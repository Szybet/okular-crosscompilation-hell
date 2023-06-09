/*
Copyright (C) 1999-2007 The Botan Project. All rights reserved.

Redistribution and use in source and binary forms, for any use, with or without
modification, is permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
list of conditions, and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice,
this list of conditions, and the following disclaimer in the documentation
and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE AUTHOR(S) "AS IS" AND ANY EXPRESS OR IMPLIED
WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE, ARE DISCLAIMED.

IN NO EVENT SHALL THE AUTHOR(S) OR CONTRIBUTOR(S) BE LIABLE FOR ANY DIRECT,
INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
// LICENSEHEADER_END
namespace QCA { // WRAPNS_LINE
/*************************************************
 * Library Internal/Global State Source File      *
 * (C) 1999-2007 The Botan Project                *
 *************************************************/

} // WRAPNS_LINE
#include <botan/libstate.h>
namespace QCA { // WRAPNS_LINE
#ifndef BOTAN_TOOLS_ONLY
} // WRAPNS_LINE
#include <botan/config.h>
namespace QCA { // WRAPNS_LINE
#endif
} // WRAPNS_LINE
#include <botan/modules.h>
namespace QCA { // WRAPNS_LINE
#ifndef BOTAN_TOOLS_ONLY
} // WRAPNS_LINE
#include <botan/engine.h>
namespace QCA { // WRAPNS_LINE
} // WRAPNS_LINE
#include <botan/x509stat.h>
namespace QCA { // WRAPNS_LINE
#endif
} // WRAPNS_LINE
#include <botan/stl_util.h>
namespace QCA { // WRAPNS_LINE
} // WRAPNS_LINE
#include <botan/mutex.h>
namespace QCA { // WRAPNS_LINE
#ifndef BOTAN_TOOLS_ONLY
} // WRAPNS_LINE
#include <botan/timers.h>
namespace QCA { // WRAPNS_LINE
} // WRAPNS_LINE
#include <botan/charset.h>
namespace QCA { // WRAPNS_LINE
#endif
} // WRAPNS_LINE
#include <algorithm>
namespace QCA { // WRAPNS_LINE

namespace Botan {

/*************************************************
 * Botan's global state                           *
 *************************************************/
namespace {

Library_State *global_lib_state = nullptr;

}

/*************************************************
 * Access the global state object                 *
 *************************************************/
Library_State &global_state()
{
    if (!global_lib_state)
        throw Invalid_State("Library was not initialized correctly");
    return (*global_lib_state);
}

/*************************************************
 * Set a new global state object                  *
 *************************************************/
void set_global_state(Library_State *new_state)
{
    delete swap_global_state(new_state);
}

/*************************************************
 * Swap two global state objects                  *
 *************************************************/
Library_State *swap_global_state(Library_State *new_state)
{
    Library_State *old_state = global_lib_state;
    global_lib_state         = new_state;
    return old_state;
}

/*************************************************
 * Increment the Engine iterator                  *
 *************************************************/
#ifndef BOTAN_TOOLS_ONLY
Engine *Library_State::Engine_Iterator::next()
{
    return lib.get_engine_n(n++);
}
#endif

/*************************************************
 * Get a new mutex object                         *
 *************************************************/
Mutex *Library_State::get_mutex() const
{
    return mutex_factory->make();
}

/*************************************************
 * Get a persistent named mutex object            *
 *************************************************/
Mutex *Library_State::get_named_mutex(const std::string &name)
{
    Mutex *mux = search_map<std::string, Mutex *>(locks, name, 0);
    if (mux)
        return mux;
    return (locks[name] = get_mutex());
}

/*************************************************
 * Get an allocator by its name                   *
 *************************************************/
Allocator *Library_State::get_allocator(const std::string &type) const
{
    Named_Mutex_Holder lock("allocator");

    if (type != "")
        return search_map<std::string, Allocator *>(alloc_factory, type, 0);

    if (!cached_default_allocator) {
#ifdef BOTAN_TOOLS_ONLY
        std::string chosen = default_allocator_type;
#else
        std::string chosen = config().option("base/default_allocator");
#endif
        if (chosen == "")
            chosen = "malloc";

        cached_default_allocator = search_map<std::string, Allocator *>(alloc_factory, chosen, 0);
    }

    return cached_default_allocator;
}

/*************************************************
 * Create a new name to object mapping            *
 *************************************************/
void Library_State::add_allocator(Allocator *allocator)
{
    Named_Mutex_Holder lock("allocator");

    allocator->init();

    allocators.push_back(allocator);
    alloc_factory[allocator->type()] = allocator;
}

/*************************************************
 * Set the default allocator type                 *
 *************************************************/
#ifdef BOTAN_TOOLS_ONLY
void Library_State::set_default_allocator(const std::string &type)
#else
void Library_State::set_default_allocator(const std::string &type) const
#endif
{
    Named_Mutex_Holder lock("allocator");

    if (type == "")
        return;

#ifdef BOTAN_TOOLS_ONLY
    default_allocator_type = type;
#else
    config().set("conf", "base/default_allocator", type);
#endif
    cached_default_allocator = nullptr;
}

#ifndef BOTAN_TOOLS_ONLY
/*************************************************
 * Set the high resolution clock implementation   *
 *************************************************/
void Library_State::set_timer(Timer *new_timer)
{
    if (new_timer) {
        delete timer;
        timer = new_timer;
    }
}

/*************************************************
 * Read a high resolution clock                   *
 *************************************************/
u64bit Library_State::system_clock() const
{
    return (timer) ? timer->clock() : 0;
}

/*************************************************
 * Set the global PRNG                            *
 *************************************************/
void Library_State::set_prng(RandomNumberGenerator *new_rng)
{
    Named_Mutex_Holder lock("rng");

    delete rng;
    rng = new_rng;
}

/*************************************************
 * Get bytes from the global PRNG                 *
 *************************************************/
void Library_State::randomize(byte out[], u32bit length)
{
    Named_Mutex_Holder lock("rng");

    rng->randomize(out, length);
}

/*************************************************
 * Add a new entropy source to use                *
 *************************************************/
void Library_State::add_entropy_source(EntropySource *src, bool last_in_list)
{
    Named_Mutex_Holder lock("rng");

    if (last_in_list)
        entropy_sources.push_back(src);
    else
        entropy_sources.insert(entropy_sources.begin(), src);
}

/*************************************************
 * Add some bytes of entropy to the global PRNG   *
 *************************************************/
void Library_State::add_entropy(const byte in[], u32bit length)
{
    Named_Mutex_Holder lock("rng");

    rng->add_entropy(in, length);
}

/*************************************************
 * Add some bytes of entropy to the global PRNG   *
 *************************************************/
void Library_State::add_entropy(EntropySource &source, bool slow_poll)
{
    Named_Mutex_Holder lock("rng");

    rng->add_entropy(source, slow_poll);
}

/*************************************************
 * Gather entropy for our PRNG object             *
 *************************************************/
u32bit Library_State::seed_prng(bool slow_poll, u32bit bits_to_get)
{
    Named_Mutex_Holder lock("rng");

    u32bit bits = 0;
    for (u32bit j = 0; j != entropy_sources.size(); ++j) {
        bits += rng->add_entropy(*(entropy_sources[j]), slow_poll);

        if (bits_to_get && bits >= bits_to_get)
            return bits;
    }

    return bits;
}

/*************************************************
 * Get an engine out of the list                  *
 *************************************************/
Engine *Library_State::get_engine_n(u32bit n) const
{
    Named_Mutex_Holder lock("engine");

    if (n >= engines.size())
        return 0;
    return engines[n];
}

/*************************************************
 * Add a new engine to the list                   *
 *************************************************/
void Library_State::add_engine(Engine *engine)
{
    Named_Mutex_Holder lock("engine");
    engines.insert(engines.begin(), engine);
}

/*************************************************
 * Set the character set transcoder object        *
 *************************************************/
void Library_State::set_transcoder(class Charset_Transcoder *transcoder)
{
    if (this->transcoder)
        delete this->transcoder;
    this->transcoder = transcoder;
}

/*************************************************
 * Transcode a string from one charset to another *
 *************************************************/
std::string Library_State::transcode(const std::string str, Character_Set to, Character_Set from) const
{
    if (!transcoder)
        throw Invalid_State("Library_State::transcode: No transcoder set");

    return transcoder->transcode(str, to, from);
}

/*************************************************
 * Set the X509 global state class                *
 *************************************************/
void Library_State::set_x509_state(X509_GlobalState *new_x509_state_obj)
{
    delete x509_state_obj;
    x509_state_obj = new_x509_state_obj;
}

/*************************************************
 * Get the X509 global state class                *
 *************************************************/
X509_GlobalState &Library_State::x509_state()
{
    if (!x509_state_obj)
        x509_state_obj = new X509_GlobalState();

    return (*x509_state_obj);
}

/*************************************************
 * Set the UI object state                        *
 *************************************************/
void Library_State::set_ui(UI *new_ui)
{
    delete ui;
    ui = new_ui;
}

/*************************************************
 * Send a pulse to the UI object                  *
 *************************************************/
void Library_State::pulse(Pulse_Type pulse_type) const
{
    if (ui)
        ui->pulse(pulse_type);
}

/*************************************************
 * Set the configuration object                   *
 *************************************************/
Config &Library_State::config() const
{
    if (!config_obj)
        throw Invalid_State("Library_State::config(): No config set");

    return (*config_obj);
}

#endif

/*************************************************
 * Load modules                                   *
 *************************************************/
void Library_State::load(Modules &modules)
{
#ifndef BOTAN_TOOLS_ONLY
    set_timer(modules.timer());
    set_transcoder(modules.transcoder());
#endif

    std::vector<Allocator *> mod_allocs = modules.allocators();
    for (Allocator *mod_alloc : mod_allocs)
        add_allocator(mod_alloc);

    set_default_allocator(modules.default_allocator());

#ifndef BOTAN_TOOLS_ONLY
    std::vector<Engine *> mod_engines = modules.engines();
    for (u32bit j = 0; j != mod_engines.size(); ++j) {
        Named_Mutex_Holder lock("engine");
        engines.push_back(mod_engines[j]);
    }

    std::vector<EntropySource *> sources = modules.entropy_sources();
    for (u32bit j = 0; j != sources.size(); ++j)
        add_entropy_source(sources[j]);
#endif
}

/*************************************************
 * Library_State Constructor                      *
 *************************************************/
Library_State::Library_State(Mutex_Factory *mutex_factory)
{
    if (!mutex_factory)
        throw Exception("Library_State: no mutex found");

    this->mutex_factory = mutex_factory;
#ifndef BOTAN_TOOLS_ONLY
    this->timer      = new Timer();
    this->transcoder = 0;
    this->config_obj = new Config();
#endif

#ifndef BOTAN_TOOLS_ONLY
    locks["settings"] = get_mutex();
#endif
    locks["allocator"] = get_mutex();
#ifndef BOTAN_TOOLS_ONLY
    locks["rng"]    = get_mutex();
    locks["engine"] = get_mutex();
    rng             = 0;
#endif
    cached_default_allocator = nullptr;
#ifndef BOTAN_TOOLS_ONLY
    x509_state_obj = 0;
    ui             = 0;
#endif
}

/*************************************************
 * Library_State Destructor                       *
 *************************************************/
static void delete_lock(std::pair<const std::string, Mutex *> &pair)
{
    delete pair.second;
}

Library_State::~Library_State()
{
#ifndef BOTAN_TOOLS_ONLY
    delete x509_state_obj;
    delete transcoder;
    delete rng;
    delete timer;
    delete config_obj;
    delete ui;

    std::for_each(entropy_sources.begin(), entropy_sources.end(), del_fun<EntropySource>());
    std::for_each(engines.begin(), engines.end(), del_fun<Engine>());
#endif

    cached_default_allocator = nullptr;

    for (Allocator *allocator : allocators) {
        allocator->destroy();
        delete allocator;
    }

    std::for_each(locks.begin(), locks.end(), delete_lock);

    delete mutex_factory;
}

}
} // WRAPNS_LINE

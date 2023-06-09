/*
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include <wtf/Platform.h>


#if ENABLE(VIDEO)

#include "JSHTMLMediaElement.h"

#include <wtf/GetPtr.h>

#include <kjs/ExecState.h>

using namespace KJS;

#include "HTMLMediaElement.h"
#include "JSMediaError.h"
#include "JSTimeRanges.h"
#include "MediaError.h"
#include "TimeRanges.h"

using namespace KJS;

namespace khtml {

/* Hash table */

static const HashEntry JSHTMLMediaElementTableEntries[] =
{
    { "readyState", JSHTMLMediaElement::ReadyStateAttrNum, DontDelete|ReadOnly, 0, nullptr },
    { "volume", JSHTMLMediaElement::VolumeAttrNum, DontDelete, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { "src", JSHTMLMediaElement::SrcAttrNum, DontDelete, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { "duration", JSHTMLMediaElement::DurationAttrNum, DontDelete|ReadOnly, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { "ended", JSHTMLMediaElement::EndedAttrNum, DontDelete|ReadOnly, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { "currentSrc", JSHTMLMediaElement::CurrentSrcAttrNum, DontDelete|ReadOnly, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { "seeking", JSHTMLMediaElement::SeekingAttrNum, DontDelete|ReadOnly, 0, &JSHTMLMediaElementTableEntries[65] },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { "played", JSHTMLMediaElement::PlayedAttrNum, DontDelete|ReadOnly, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { "constructor", JSHTMLMediaElement::ConstructorAttrNum, DontDelete|DontEnum|ReadOnly, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { "autoplay", JSHTMLMediaElement::AutoplayAttrNum, DontDelete, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { "networkState", JSHTMLMediaElement::NetworkStateAttrNum, DontDelete|ReadOnly, 0, nullptr },
    { "seekable", JSHTMLMediaElement::SeekableAttrNum, DontDelete|ReadOnly, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { "loop", JSHTMLMediaElement::LoopAttrNum, DontDelete, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { "currentTime", JSHTMLMediaElement::CurrentTimeAttrNum, DontDelete, 0, nullptr },
    { "buffered", JSHTMLMediaElement::BufferedAttrNum, DontDelete|ReadOnly, 0, &JSHTMLMediaElementTableEntries[64] },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { "paused", JSHTMLMediaElement::PausedAttrNum, DontDelete|ReadOnly, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { "error", JSHTMLMediaElement::ErrorAttrNum, DontDelete|ReadOnly, 0, nullptr },
    { "autobuffer", JSHTMLMediaElement::AutobufferAttrNum, DontDelete, 0, nullptr },
    { "playbackRate", JSHTMLMediaElement::PlaybackRateAttrNum, DontDelete, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { "muted", JSHTMLMediaElement::MutedAttrNum, DontDelete, 0, nullptr },
    { "startTime", JSHTMLMediaElement::StartTimeAttrNum, DontDelete|ReadOnly, 0, &JSHTMLMediaElementTableEntries[66] },
    { "defaultPlaybackRate", JSHTMLMediaElement::DefaultPlaybackRateAttrNum, DontDelete, 0, nullptr },
    { "controls", JSHTMLMediaElement::ControlsAttrNum, DontDelete, 0, nullptr }
};

static const HashTable JSHTMLMediaElementTable = 
{
    2, 67, JSHTMLMediaElementTableEntries, 64
};

/* Hash table for constructor */

static const HashEntry JSHTMLMediaElementConstructorTableEntries[] =
{
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { "NETWORK_LOADING", HTMLMediaElement::NETWORK_LOADING, DontDelete|ReadOnly, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { "HAVE_METADATA", HTMLMediaElement::HAVE_METADATA, DontDelete|ReadOnly, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { "HAVE_CURRENT_DATA", HTMLMediaElement::HAVE_CURRENT_DATA, DontDelete|ReadOnly, 0, nullptr },
    { "NETWORK_EMPTY", HTMLMediaElement::NETWORK_EMPTY, DontDelete|ReadOnly, 0, nullptr },
    { "NETWORK_IDLE", HTMLMediaElement::NETWORK_IDLE, DontDelete|ReadOnly, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { "HAVE_FUTURE_DATA", HTMLMediaElement::HAVE_FUTURE_DATA, DontDelete|ReadOnly, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { "HAVE_ENOUGH_DATA", HTMLMediaElement::HAVE_ENOUGH_DATA, DontDelete|ReadOnly, 0, nullptr },
    { "NETWORK_NO_SOURCE", HTMLMediaElement::NETWORK_NO_SOURCE, DontDelete|ReadOnly, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { "HAVE_NOTHING", HTMLMediaElement::HAVE_NOTHING, DontDelete|ReadOnly, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr }
};

static const HashTable JSHTMLMediaElementConstructorTable = 
{
    2, 32, JSHTMLMediaElementConstructorTableEntries, 32
};

class JSHTMLMediaElementConstructor : public DOMObject {
public:
    JSHTMLMediaElementConstructor(ExecState* exec)
    {
        setPrototype(exec->lexicalInterpreter()->builtinObjectPrototype());
        putDirect(exec->propertyNames().prototype, JSHTMLMediaElementPrototype::self(exec), None);
    }
    using KJS::JSObject::getOwnPropertySlot;
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLMediaElementConstructor::s_info = { "HTMLMediaElementConstructor", nullptr, &JSHTMLMediaElementConstructorTable, nullptr };

bool JSHTMLMediaElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLMediaElementConstructor, DOMObject>(exec, &JSHTMLMediaElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLMediaElementConstructor::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

/* Hash table for prototype */

static const HashEntry JSHTMLMediaElementPrototypeTableEntries[] =
{
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { "NETWORK_LOADING", HTMLMediaElement::NETWORK_LOADING, DontDelete|ReadOnly, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { "HAVE_METADATA", HTMLMediaElement::HAVE_METADATA, DontDelete|ReadOnly, 0, nullptr },
    { "load", JSHTMLMediaElement::LoadFuncNum, DontDelete|Function, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { "pause", JSHTMLMediaElement::PauseFuncNum, DontDelete|Function, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { "play", JSHTMLMediaElement::PlayFuncNum, DontDelete|Function, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { "HAVE_CURRENT_DATA", HTMLMediaElement::HAVE_CURRENT_DATA, DontDelete|ReadOnly, 0, nullptr },
    { "NETWORK_EMPTY", HTMLMediaElement::NETWORK_EMPTY, DontDelete|ReadOnly, 0, nullptr },
    { "NETWORK_IDLE", HTMLMediaElement::NETWORK_IDLE, DontDelete|ReadOnly, 0, nullptr },
    { "canPlayType", JSHTMLMediaElement::CanPlayTypeFuncNum, DontDelete|Function, 1, nullptr },
    { "HAVE_FUTURE_DATA", HTMLMediaElement::HAVE_FUTURE_DATA, DontDelete|ReadOnly, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { "HAVE_ENOUGH_DATA", HTMLMediaElement::HAVE_ENOUGH_DATA, DontDelete|ReadOnly, 0, nullptr },
    { "NETWORK_NO_SOURCE", HTMLMediaElement::NETWORK_NO_SOURCE, DontDelete|ReadOnly, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { "HAVE_NOTHING", HTMLMediaElement::HAVE_NOTHING, DontDelete|ReadOnly, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr }
};

static const HashTable JSHTMLMediaElementPrototypeTable = 
{
    2, 32, JSHTMLMediaElementPrototypeTableEntries, 32
};

const ClassInfo JSHTMLMediaElementPrototype::s_info = { "HTMLMediaElementPrototype", nullptr, &JSHTMLMediaElementPrototypeTable, nullptr };

JSObject* JSHTMLMediaElementPrototype::self(ExecState* exec)
{
    return ::cacheGlobalObject<JSHTMLMediaElementPrototype>(exec, "[[JSHTMLMediaElement.prototype]]");
}

bool JSHTMLMediaElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSHTMLMediaElementPrototypeFunction, JSHTMLMediaElementPrototype, JSObject>(exec, &JSHTMLMediaElementPrototypeTable, this, propertyName, slot);
}

JSValue* JSHTMLMediaElementPrototype::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

const ClassInfo JSHTMLMediaElement::s_info = { "HTMLMediaElement", &JSHTMLElement::s_info, &JSHTMLMediaElementTable , nullptr };

JSHTMLMediaElement::JSHTMLMediaElement(ExecState* exec, HTMLMediaElement* impl)
    : JSHTMLElement(exec, impl)
{
    setPrototype(JSHTMLMediaElementPrototype::self(exec));
}

bool JSHTMLMediaElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLMediaElement, JSHTMLElement>(exec, &JSHTMLMediaElementTable, this, propertyName, slot);
}

JSValue* JSHTMLMediaElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case ErrorAttrNum: {
        HTMLMediaElement* imp = static_cast<HTMLMediaElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->error()));
    }
    case SrcAttrNum: {
        HTMLMediaElement* imp = static_cast<HTMLMediaElement*>(impl());

        return jsString(imp->src());
    }
    case CurrentSrcAttrNum: {
        HTMLMediaElement* imp = static_cast<HTMLMediaElement*>(impl());

        return jsString(imp->currentSrc());
    }
    case NetworkStateAttrNum: {
        HTMLMediaElement* imp = static_cast<HTMLMediaElement*>(impl());

        return jsNumber(imp->networkState());
    }
    case AutobufferAttrNum: {
        HTMLMediaElement* imp = static_cast<HTMLMediaElement*>(impl());

        return jsBoolean(imp->autobuffer());
    }
    case BufferedAttrNum: {
        HTMLMediaElement* imp = static_cast<HTMLMediaElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->buffered()));
    }
    case ReadyStateAttrNum: {
        HTMLMediaElement* imp = static_cast<HTMLMediaElement*>(impl());

        return jsNumber(imp->readyState());
    }
    case SeekingAttrNum: {
        HTMLMediaElement* imp = static_cast<HTMLMediaElement*>(impl());

        return jsBoolean(imp->seeking());
    }
    case CurrentTimeAttrNum: {
        HTMLMediaElement* imp = static_cast<HTMLMediaElement*>(impl());

        return jsNumber(imp->currentTime());
    }
    case StartTimeAttrNum: {
        HTMLMediaElement* imp = static_cast<HTMLMediaElement*>(impl());

        return jsNumber(imp->startTime());
    }
    case DurationAttrNum: {
        HTMLMediaElement* imp = static_cast<HTMLMediaElement*>(impl());

        return jsNumber(imp->duration());
    }
    case PausedAttrNum: {
        HTMLMediaElement* imp = static_cast<HTMLMediaElement*>(impl());

        return jsBoolean(imp->paused());
    }
    case DefaultPlaybackRateAttrNum: {
        HTMLMediaElement* imp = static_cast<HTMLMediaElement*>(impl());

        return jsNumber(imp->defaultPlaybackRate());
    }
    case PlaybackRateAttrNum: {
        HTMLMediaElement* imp = static_cast<HTMLMediaElement*>(impl());

        return jsNumber(imp->playbackRate());
    }
    case PlayedAttrNum: {
        HTMLMediaElement* imp = static_cast<HTMLMediaElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->played()));
    }
    case SeekableAttrNum: {
        HTMLMediaElement* imp = static_cast<HTMLMediaElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->seekable()));
    }
    case EndedAttrNum: {
        HTMLMediaElement* imp = static_cast<HTMLMediaElement*>(impl());

        return jsBoolean(imp->ended());
    }
    case AutoplayAttrNum: {
        HTMLMediaElement* imp = static_cast<HTMLMediaElement*>(impl());

        return jsBoolean(imp->autoplay());
    }
    case LoopAttrNum: {
        HTMLMediaElement* imp = static_cast<HTMLMediaElement*>(impl());

        return jsBoolean(imp->loop());
    }
    case ControlsAttrNum: {
        HTMLMediaElement* imp = static_cast<HTMLMediaElement*>(impl());

        return jsBoolean(imp->controls());
    }
    case VolumeAttrNum: {
        HTMLMediaElement* imp = static_cast<HTMLMediaElement*>(impl());

        return jsNumber(imp->volume());
    }
    case MutedAttrNum: {
        HTMLMediaElement* imp = static_cast<HTMLMediaElement*>(impl());

        return jsBoolean(imp->muted());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return nullptr;
}

void JSHTMLMediaElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value, int attr)
{
    lookupPut<JSHTMLMediaElement, JSHTMLElement>(exec, propertyName, value, attr, &JSHTMLMediaElementTable, this);
}

void JSHTMLMediaElement::putValueProperty(ExecState* exec, int token, JSValue* value, int /*attr*/)
{
    switch (token) {
    case SrcAttrNum: {
        HTMLMediaElement* imp = static_cast<HTMLMediaElement*>(impl());

        imp->setSrc(value->toString(exec).domString());
        break;
    }
    case AutobufferAttrNum: {
        HTMLMediaElement* imp = static_cast<HTMLMediaElement*>(impl());

        imp->setAutobuffer(value->toBoolean(exec));
        break;
    }
    case CurrentTimeAttrNum: {
        HTMLMediaElement* imp = static_cast<HTMLMediaElement*>(impl());

        ExceptionCode ec = 0;
        imp->setCurrentTime(value->toFloat(exec), ec);
        setDOMException(exec, ec);
        break;
    }
    case DefaultPlaybackRateAttrNum: {
        HTMLMediaElement* imp = static_cast<HTMLMediaElement*>(impl());

        ExceptionCode ec = 0;
        imp->setDefaultPlaybackRate(value->toFloat(exec), ec);
        setDOMException(exec, ec);
        break;
    }
    case PlaybackRateAttrNum: {
        HTMLMediaElement* imp = static_cast<HTMLMediaElement*>(impl());

        ExceptionCode ec = 0;
        imp->setPlaybackRate(value->toFloat(exec), ec);
        setDOMException(exec, ec);
        break;
    }
    case AutoplayAttrNum: {
        HTMLMediaElement* imp = static_cast<HTMLMediaElement*>(impl());

        imp->setAutoplay(value->toBoolean(exec));
        break;
    }
    case LoopAttrNum: {
        HTMLMediaElement* imp = static_cast<HTMLMediaElement*>(impl());

        imp->setLoop(value->toBoolean(exec));
        break;
    }
    case ControlsAttrNum: {
        HTMLMediaElement* imp = static_cast<HTMLMediaElement*>(impl());

        imp->setControls(value->toBoolean(exec));
        break;
    }
    case VolumeAttrNum: {
        HTMLMediaElement* imp = static_cast<HTMLMediaElement*>(impl());

        ExceptionCode ec = 0;
        imp->setVolume(value->toFloat(exec), ec);
        setDOMException(exec, ec);
        break;
    }
    case MutedAttrNum: {
        HTMLMediaElement* imp = static_cast<HTMLMediaElement*>(impl());

        imp->setMuted(value->toBoolean(exec));
        break;
    }
    }
}

JSValue* JSHTMLMediaElement::getConstructor(ExecState* exec)
{
    return ::cacheGlobalObject<JSHTMLMediaElementConstructor>(exec, "[[HTMLMediaElement.constructor]]");
}
JSValue* JSHTMLMediaElementPrototypeFunction::callAsFunction(ExecState* exec, JSObject* thisObj, const List& args)
{
    if (!thisObj->inherits(&JSHTMLMediaElement::s_info))
      return throwError(exec, TypeError);

    JSHTMLMediaElement* castedThisObj = static_cast<JSHTMLMediaElement*>(thisObj);
    HTMLMediaElement* imp = static_cast<HTMLMediaElement*>(castedThisObj->impl());

    switch (id) {
    case JSHTMLMediaElement::LoadFuncNum: {
        ExceptionCode ec = 0;

        imp->load(ec);
        setDOMException(exec, ec);
        return jsUndefined();
    }
    case JSHTMLMediaElement::CanPlayTypeFuncNum: {
        String type = args[0]->toString(exec).domString();


        KJS::JSValue* result = jsString(imp->canPlayType(type));
        return result;
    }
    case JSHTMLMediaElement::PlayFuncNum: {
        ExceptionCode ec = 0;

        imp->play(ec);
        setDOMException(exec, ec);
        return jsUndefined();
    }
    case JSHTMLMediaElement::PauseFuncNum: {
        ExceptionCode ec = 0;

        imp->pause(ec);
        setDOMException(exec, ec);
        return jsUndefined();
    }
    }
    return nullptr;
}

}

#endif // ENABLE(VIDEO)

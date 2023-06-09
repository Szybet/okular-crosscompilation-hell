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

#include "JSHTMLAudioElement.h"

#include <wtf/GetPtr.h>

#include <kjs/ExecState.h>

using namespace KJS;

#include "HTMLAudioElement.h"

using namespace KJS;

namespace khtml {

/* Hash table */

static const HashEntry JSHTMLAudioElementTableEntries[] =
{
    { nullptr, 0, 0, 0, nullptr },
    { "constructor", JSHTMLAudioElement::ConstructorAttrNum, DontDelete|DontEnum|ReadOnly, 0, nullptr }
};

static const HashTable JSHTMLAudioElementTable = 
{
    2, 2, JSHTMLAudioElementTableEntries, 2
};

/* Hash table for constructor */

static const HashEntry JSHTMLAudioElementConstructorTableEntries[] =
{
    { nullptr, 0, 0, 0, nullptr }
};

static const HashTable JSHTMLAudioElementConstructorTable = 
{
    2, 1, JSHTMLAudioElementConstructorTableEntries, 1
};

class JSHTMLAudioElementConstructor : public DOMObject {
public:
    JSHTMLAudioElementConstructor(ExecState* exec)
    {
        setPrototype(exec->lexicalInterpreter()->builtinObjectPrototype());
        putDirect(exec->propertyNames().prototype, JSHTMLAudioElementPrototype::self(exec), None);
    }
    using KJS::JSObject::getOwnPropertySlot;
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLAudioElementConstructor::s_info = { "HTMLAudioElementConstructor", nullptr, &JSHTMLAudioElementConstructorTable, nullptr };

bool JSHTMLAudioElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLAudioElementConstructor, DOMObject>(exec, &JSHTMLAudioElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLAudioElementConstructor::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

/* Hash table for prototype */

static const HashEntry JSHTMLAudioElementPrototypeTableEntries[] =
{
    { nullptr, 0, 0, 0, nullptr }
};

static const HashTable JSHTMLAudioElementPrototypeTable = 
{
    2, 1, JSHTMLAudioElementPrototypeTableEntries, 1
};

const ClassInfo JSHTMLAudioElementPrototype::s_info = { "HTMLAudioElementPrototype", nullptr, &JSHTMLAudioElementPrototypeTable, nullptr };

JSObject* JSHTMLAudioElementPrototype::self(ExecState* exec)
{
    return ::cacheGlobalObject<JSHTMLAudioElementPrototype>(exec, "[[JSHTMLAudioElement.prototype]]");
}

const ClassInfo JSHTMLAudioElement::s_info = { "HTMLAudioElement", &JSHTMLMediaElement::s_info, &JSHTMLAudioElementTable , nullptr };

JSHTMLAudioElement::JSHTMLAudioElement(ExecState* exec, HTMLAudioElement* impl)
    : JSHTMLMediaElement(exec, impl)
{
    setPrototype(JSHTMLAudioElementPrototype::self(exec));
}

bool JSHTMLAudioElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLAudioElement, JSHTMLMediaElement>(exec, &JSHTMLAudioElementTable, this, propertyName, slot);
}

JSValue* JSHTMLAudioElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return nullptr;
}

JSValue* JSHTMLAudioElement::getConstructor(ExecState* exec)
{
    return ::cacheGlobalObject<JSHTMLAudioElementConstructor>(exec, "[[HTMLAudioElement.constructor]]");
}

}

#endif // ENABLE(VIDEO)

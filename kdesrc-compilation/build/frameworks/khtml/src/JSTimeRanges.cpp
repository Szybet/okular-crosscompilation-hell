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

#include "JSTimeRanges.h"

#include <wtf/GetPtr.h>

#include <kjs/ExecState.h>

using namespace KJS;

#include "ExceptionCode.h"
#include "TimeRanges.h"

using namespace KJS;

namespace khtml {

/* Hash table */

static const HashEntry JSTimeRangesTableEntries[] =
{
    { nullptr, 0, 0, 0, nullptr },
    { "length", JSTimeRanges::LengthAttrNum, DontDelete|ReadOnly, 0, nullptr }
};

static const HashTable JSTimeRangesTable = 
{
    2, 2, JSTimeRangesTableEntries, 2
};

/* Hash table for prototype */

static const HashEntry JSTimeRangesPrototypeTableEntries[] =
{
    { nullptr, 0, 0, 0, nullptr },
    { nullptr, 0, 0, 0, nullptr },
    { "start", JSTimeRanges::StartFuncNum, DontDelete|Function, 1, &JSTimeRangesPrototypeTableEntries[4] },
    { nullptr, 0, 0, 0, nullptr },
    { "end", JSTimeRanges::EndFuncNum, DontDelete|Function, 1, nullptr }
};

static const HashTable JSTimeRangesPrototypeTable = 
{
    2, 5, JSTimeRangesPrototypeTableEntries, 4
};

const ClassInfo JSTimeRangesPrototype::s_info = { "TimeRangesPrototype", nullptr, &JSTimeRangesPrototypeTable, nullptr };

JSObject* JSTimeRangesPrototype::self(ExecState* exec)
{
    return ::cacheGlobalObject<JSTimeRangesPrototype>(exec, "[[JSTimeRanges.prototype]]");
}

bool JSTimeRangesPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSTimeRangesPrototypeFunction, JSObject>(exec, &JSTimeRangesPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSTimeRanges::s_info = { "TimeRanges", nullptr, &JSTimeRangesTable , nullptr };

JSTimeRanges::JSTimeRanges(ExecState* exec, TimeRanges* impl)
    : m_impl(impl)
{
    setPrototype(JSTimeRangesPrototype::self(exec));
}

JSTimeRanges::~JSTimeRanges()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

bool JSTimeRanges::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSTimeRanges, KJS::DOMObject>(exec, &JSTimeRangesTable, this, propertyName, slot);
}

JSValue* JSTimeRanges::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case LengthAttrNum: {
        TimeRanges* imp = static_cast<TimeRanges*>(impl());

        return jsNumber(imp->length());
    }
    }
    return nullptr;
}

JSValue* JSTimeRangesPrototypeFunction::callAsFunction(ExecState* exec, JSObject* thisObj, const List& args)
{
    if (!thisObj->inherits(&JSTimeRanges::s_info))
      return throwError(exec, TypeError);

    JSTimeRanges* castedThisObj = static_cast<JSTimeRanges*>(thisObj);
    TimeRanges* imp = static_cast<TimeRanges*>(castedThisObj->impl());

    switch (id) {
    case JSTimeRanges::StartFuncNum: {
        ExceptionCode ec = 0;
        bool indexOk;
        unsigned index = args[0]->toInt32(exec, indexOk);
        if (!indexOk) {
            setDOMException(exec, DOM::DOMException::TYPE_MISMATCH_ERR);
            return jsUndefined();
        }


        KJS::JSValue* result = jsNumber(imp->start(index, ec));
        setDOMException(exec, ec);
        return result;
    }
    case JSTimeRanges::EndFuncNum: {
        ExceptionCode ec = 0;
        bool indexOk;
        unsigned index = args[0]->toInt32(exec, indexOk);
        if (!indexOk) {
            setDOMException(exec, DOM::DOMException::TYPE_MISMATCH_ERR);
            return jsUndefined();
        }


        KJS::JSValue* result = jsNumber(imp->end(index, ec));
        setDOMException(exec, ec);
        return result;
    }
    }
    return nullptr;
}
KJS::JSValue* toJS(KJS::ExecState* exec, TimeRanges* obj)
{
    return KJS::cacheDOMObject<TimeRanges, JSTimeRanges>(exec, obj);
}
TimeRanges* toTimeRanges(KJS::JSValue* val)
{
    return val->isObject(&JSTimeRanges::s_info) ? static_cast<JSTimeRanges*>(val)->impl() : nullptr;
}

}

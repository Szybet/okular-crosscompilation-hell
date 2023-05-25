/* Automatically generated from /home/szybet/kdesrc/frameworks/khtml/src/ecma/kjs_events.cpp using /mnt/HDD/Project/Public/okulartry/okular-things/share/kf5/kjs/create_hash_table. DO NOT EDIT ! */

namespace KJS {

static const struct KJS::HashEntry DOMEventTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "cancelBubble", static_cast<int>(DOMEvent::CancelBubble), KJS::DontDelete, 0, nullptr }/* 1513687862 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "returnValue", static_cast<int>(DOMEvent::ReturnValue), KJS::DontDelete, 0, nullptr }/* 851384936 */ ,
   { "type", static_cast<int>(DOMEvent::Type), KJS::DontDelete|KJS::ReadOnly, 0, &DOMEventTableEntries[8] }/* 924663163 */ ,
   { "target", static_cast<int>(DOMEvent::Target), KJS::DontDelete|KJS::ReadOnly, 0, &DOMEventTableEntries[7] }/* 421183222 */ ,
   { "currentTarget", static_cast<int>(DOMEvent::CurrentTarget), KJS::DontDelete|KJS::ReadOnly, 0, &DOMEventTableEntries[10] }/* 3891244671 */ ,
   { "srcElement", static_cast<int>(DOMEvent::SrcElement), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1924465849 */ ,
   { "eventPhase", static_cast<int>(DOMEvent::EventPhase), KJS::DontDelete|KJS::ReadOnly, 0, &DOMEventTableEntries[9] }/* 1522580434 */ ,
   { "bubbles", static_cast<int>(DOMEvent::Bubbles), KJS::DontDelete|KJS::ReadOnly, 0, &DOMEventTableEntries[11] }/* 2058807062 */ ,
   { "cancelable", static_cast<int>(DOMEvent::Cancelable), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2570308670 */ ,
   { "timeStamp", static_cast<int>(DOMEvent::TimeStamp), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 4182764170 */ 
};

const struct KJS::HashTable DOMEventTable = { 2, 12, DOMEventTableEntries, 7 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMEventProtoTableEntries[] = {
   { "stopPropagation", static_cast<int>(DOMEvent::StopPropagation), KJS::DontDelete|KJS::Function, 0, nullptr }/* 3226960341 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "preventDefault", static_cast<int>(DOMEvent::PreventDefault), KJS::DontDelete|KJS::Function, 0, &DOMEventProtoTableEntries[3] }/* 1124314886 */ ,
   { "initEvent", static_cast<int>(DOMEvent::InitEvent), KJS::DontDelete|KJS::Function, 3, nullptr }/* 2234332298 */ 
};

const struct KJS::HashTable DOMEventProtoTable = { 2, 4, DOMEventProtoTableEntries, 3 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry EventConstantsTableEntries[] = {
   { "DRAGDROP", static_cast<int>(2048), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3637500646 */ ,
   { "DBLCLICK", static_cast<int>(128), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3629877550 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "MOUSEUP", static_cast<int>(2), KJS::DontDelete|KJS::ReadOnly, 0, &EventConstantsTableEntries[23] }/* 1277524791 */ ,
   { "BLUR", static_cast<int>(8192), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2923780888 */ ,
   { "CLICK", static_cast<int>(64), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3715959102 */ ,
   { "CAPTURING_PHASE", static_cast<int>(DOM::Event::CAPTURING_PHASE), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2154765816 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "FOCUS", static_cast<int>(4096), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2567604295 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "BUBBLING_PHASE", static_cast<int>(DOM::Event::BUBBLING_PHASE), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1017461038 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "KEYPRESS", static_cast<int>(1024), KJS::DontDelete|KJS::ReadOnly, 0, &EventConstantsTableEntries[26] }/* 327741778 */ ,
   { "MOUSEOUT", static_cast<int>(8), KJS::DontDelete|KJS::ReadOnly, 0, &EventConstantsTableEntries[24] }/* 1386720130 */ ,
   { "MOUSEOVER", static_cast<int>(4), KJS::DontDelete|KJS::ReadOnly, 0, &EventConstantsTableEntries[25] }/* 4150078269 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "SELECT", static_cast<int>(16384), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2703185623 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "AT_TARGET", static_cast<int>(DOM::Event::AT_TARGET), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2498854546 */ ,
   { "MOUSEDOWN", static_cast<int>(1), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2971547166 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "MOUSEMOVE", static_cast<int>(16), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2519841612 */ ,
   { "MOUSEDRAG", static_cast<int>(32), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3205231910 */ ,
   { "KEYDOWN", static_cast<int>(256), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2903409682 */ ,
   { "KEYUP", static_cast<int>(512), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3268886169 */ ,
   { "CHANGE", static_cast<int>(32768), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1605369353 */ 
};

const struct KJS::HashTable EventConstantsTable = { 2, 27, EventConstantsTableEntries, 23 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry EventExceptionConstructorTableEntries[] = {
   { "UNSPECIFIED_EVENT_TYPE_ERR", static_cast<int>(DOM::EventException::UNSPECIFIED_EVENT_TYPE_ERR), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1897475000 */ 
};

const struct KJS::HashTable EventExceptionConstructorTable = { 2, 1, EventExceptionConstructorTableEntries, 1 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMUIEventTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "keyCode", static_cast<int>(DOMUIEvent::KeyCode), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2747714425 */ ,
   { "view", static_cast<int>(DOMUIEvent::View), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 59890602 */ ,
   { "charCode", static_cast<int>(DOMUIEvent::CharCode), KJS::DontDelete|KJS::ReadOnly, 0, &DOMUIEventTableEntries[9] }/* 684920456 */ ,
   { "layerY", static_cast<int>(DOMUIEvent::LayerY), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 466477764 */ ,
   { "which", static_cast<int>(DOMUIEvent::Which), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 69159704 */ ,
   { "detail", static_cast<int>(DOMUIEvent::Detail), KJS::DontDelete|KJS::ReadOnly, 0, &DOMUIEventTableEntries[7] }/* 3063522300 */ ,
   { "layerX", static_cast<int>(DOMUIEvent::LayerX), KJS::DontDelete|KJS::ReadOnly, 0, &DOMUIEventTableEntries[8] }/* 496487466 */ ,
   { "pageX", static_cast<int>(DOMUIEvent::PageX), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 338057446 */ ,
   { "pageY", static_cast<int>(DOMUIEvent::PageY), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1971757763 */ 
};

const struct KJS::HashTable DOMUIEventTable = { 2, 10, DOMUIEventTableEntries, 7 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMUIEventProtoTableEntries[] = {
   { "initUIEvent", static_cast<int>(DOMUIEvent::InitUIEvent), KJS::DontDelete|KJS::Function, 5, nullptr }/* 2094275527 */ 
};

const struct KJS::HashTable DOMUIEventProtoTable = { 2, 1, DOMUIEventProtoTableEntries, 1 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMMouseEventTableEntries[] = {
   { "screenY", static_cast<int>(DOMMouseEvent::ScreenY), KJS::DontDelete|KJS::ReadOnly, 0, &DOMMouseEventTableEntries[2] }/* 3451698014 */ ,
   { "screenX", static_cast<int>(DOMMouseEvent::ScreenX), KJS::DontDelete|KJS::ReadOnly, 0, &DOMMouseEventTableEntries[3] }/* 4145135541 */ ,
   { "clientX", static_cast<int>(DOMMouseEvent::ClientX), KJS::DontDelete|KJS::ReadOnly, 0, &DOMMouseEventTableEntries[5] }/* 178036506 */ ,
   { "x", static_cast<int>(DOMMouseEvent::X), KJS::DontDelete|KJS::ReadOnly, 0, &DOMMouseEventTableEntries[4] }/* 2615952593 */ ,
   { "clientY", static_cast<int>(DOMMouseEvent::ClientY), KJS::DontDelete|KJS::ReadOnly, 0, &DOMMouseEventTableEntries[9] }/* 160399307 */ ,
   { "y", static_cast<int>(DOMMouseEvent::Y), KJS::DontDelete|KJS::ReadOnly, 0, &DOMMouseEventTableEntries[6] }/* 3477867916 */ ,
   { "offsetX", static_cast<int>(DOMMouseEvent::OffsetX), KJS::DontDelete|KJS::ReadOnly, 0, &DOMMouseEventTableEntries[7] }/* 2694924326 */ ,
   { "offsetY", static_cast<int>(DOMMouseEvent::OffsetY), KJS::DontDelete|KJS::ReadOnly, 0, &DOMMouseEventTableEntries[8] }/* 2736818286 */ ,
   { "ctrlKey", static_cast<int>(DOMMouseEvent::CtrlKey), KJS::DontDelete|KJS::ReadOnly, 0, &DOMMouseEventTableEntries[11] }/* 58705618 */ ,
   { "shiftKey", static_cast<int>(DOMMouseEvent::ShiftKey), KJS::DontDelete|KJS::ReadOnly, 0, &DOMMouseEventTableEntries[10] }/* 3589857859 */ ,
   { "altKey", static_cast<int>(DOMMouseEvent::AltKey), KJS::DontDelete|KJS::ReadOnly, 0, &DOMMouseEventTableEntries[12] }/* 3779092391 */ ,
   { "metaKey", static_cast<int>(DOMMouseEvent::MetaKey), KJS::DontDelete|KJS::ReadOnly, 0, &DOMMouseEventTableEntries[13] }/* 1801211234 */ ,
   { "button", static_cast<int>(DOMMouseEvent::Button), KJS::DontDelete|KJS::ReadOnly, 0, &DOMMouseEventTableEntries[15] }/* 1091198731 */ ,
   { "relatedTarget", static_cast<int>(DOMMouseEvent::RelatedTarget), KJS::DontDelete|KJS::ReadOnly, 0, &DOMMouseEventTableEntries[14] }/* 3750855064 */ ,
   { "fromElement", static_cast<int>(DOMMouseEvent::FromElement), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1718934004 */ ,
   { "toElement", static_cast<int>(DOMMouseEvent::ToElement), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2310125191 */ 
};

const struct KJS::HashTable DOMMouseEventTable = { 2, 16, DOMMouseEventTableEntries, 2 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMMouseEventProtoTableEntries[] = {
   { "initMouseEvent", static_cast<int>(DOMMouseEvent::InitMouseEvent), KJS::DontDelete|KJS::Function, 15, nullptr }/* 2260847423 */ 
};

const struct KJS::HashTable DOMMouseEventProtoTable = { 2, 1, DOMMouseEventProtoTableEntries, 1 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMKeyEventBaseTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "virtKeyVal", static_cast<int>(DOMKeyEventBase::VirtKey), KJS::DontDelete|KJS::ReadOnly, 0, &DOMKeyEventBaseTableEntries[5] }/* 2164953691 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "ctrlKey", static_cast<int>(DOMKeyEventBase::CtrlKey), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 58705618 */ ,
   { "keyVal", static_cast<int>(DOMKeyEventBase::Key), KJS::DontDelete|KJS::ReadOnly, 0, &DOMKeyEventBaseTableEntries[6] }/* 1431294199 */ ,
   { "altKey", static_cast<int>(DOMKeyEventBase::AltKey), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3779092391 */ ,
   { "shiftKey", static_cast<int>(DOMKeyEventBase::ShiftKey), KJS::DontDelete|KJS::ReadOnly, 0, &DOMKeyEventBaseTableEntries[7] }/* 3589857859 */ ,
   { "metaKey", static_cast<int>(DOMKeyEventBase::MetaKey), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1801211234 */ 
};

const struct KJS::HashTable DOMKeyEventBaseTable = { 2, 8, DOMKeyEventBaseTableEntries, 5 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMTextEventTableEntries[] = {
   { "data", static_cast<int>(DOMTextEvent::Data), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3260053779 */ 
};

const struct KJS::HashTable DOMTextEventTable = { 2, 1, DOMTextEventTableEntries, 1 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMTextEventProtoTableEntries[] = {
   { "initTextEvent", static_cast<int>(DOMTextEvent::InitTextEvent), KJS::DontDelete|KJS::Function, 5, nullptr }/* 924419055 */ 
};

const struct KJS::HashTable DOMTextEventProtoTable = { 2, 1, DOMTextEventProtoTableEntries, 1 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMKeyboardEventTableEntries[] = {
   { "keyIdentifier", static_cast<int>(DOMKeyboardEvent::KeyIdentifier), KJS::DontDelete|KJS::ReadOnly, 0, &DOMKeyboardEventTableEntries[2] }/* 3794236932 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "keyLocation", static_cast<int>(DOMKeyboardEvent::KeyLocation), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3267115760 */ 
};

const struct KJS::HashTable DOMKeyboardEventTable = { 2, 3, DOMKeyboardEventTableEntries, 2 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMKeyboardEventProtoTableEntries[] = {
   { "getModifierState", static_cast<int>(DOMKeyboardEvent::GetModifierState), KJS::DontDelete|KJS::Function, 1, nullptr }/* 1047328020 */ ,
   { "initKeyboardEvent", static_cast<int>(DOMKeyboardEvent::InitKeyboardEvent), KJS::DontDelete|KJS::Function, 7, nullptr }/* 3998995515 */ 
};

const struct KJS::HashTable DOMKeyboardEventProtoTable = { 2, 2, DOMKeyboardEventProtoTableEntries, 2 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry KeyboardEventConstructorTableEntries[] = {
   { "DOM_KEY_LOCATION_RIGHT", static_cast<int>(DOM::KeyboardEvent::DOM_KEY_LOCATION_RIGHT), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1044741132 */ ,
   { "DOM_KEY_LOCATION_STANDARD", static_cast<int>(DOM::KeyboardEvent::DOM_KEY_LOCATION_STANDARD), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 242273193 */ ,
   { "DOM_KEY_LOCATION_NUMPAD", static_cast<int>(DOM::KeyboardEvent::DOM_KEY_LOCATION_NUMPAD), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2461023642 */ ,
   { "DOM_KEY_LOCATION_LEFT", static_cast<int>(DOM::KeyboardEvent::DOM_KEY_LOCATION_LEFT), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1215237015 */ 
};

const struct KJS::HashTable KeyboardEventConstructorTable = { 2, 4, KeyboardEventConstructorTableEntries, 4 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry MutationEventConstructorTableEntries[] = {
   { "MODIFICATION", static_cast<int>(DOM::MutationEvent::MODIFICATION), KJS::DontDelete|KJS::ReadOnly, 0, &MutationEventConstructorTableEntries[3] }/* 123930966 */ ,
   { "ADDITION", static_cast<int>(DOM::MutationEvent::ADDITION), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2886942895 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "REMOVAL", static_cast<int>(DOM::MutationEvent::REMOVAL), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 755781618 */ 
};

const struct KJS::HashTable MutationEventConstructorTable = { 2, 4, MutationEventConstructorTableEntries, 3 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMMutationEventTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "prevValue", static_cast<int>(DOMMutationEvent::PrevValue), KJS::DontDelete|KJS::ReadOnly, 0, &DOMMutationEventTableEntries[5] }/* 36230756 */ ,
   { "relatedNode", static_cast<int>(DOMMutationEvent::RelatedNode), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 795602867 */ ,
   { "newValue", static_cast<int>(DOMMutationEvent::NewValue), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2447174948 */ ,
   { "attrChange", static_cast<int>(DOMMutationEvent::AttrChange), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2607113824 */ ,
   { "attrName", static_cast<int>(DOMMutationEvent::AttrName), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3958897246 */ 
};

const struct KJS::HashTable DOMMutationEventTable = { 2, 6, DOMMutationEventTableEntries, 5 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMMutationEventProtoTableEntries[] = {
   { "initMutationEvent", static_cast<int>(DOMMutationEvent::InitMutationEvent), KJS::DontDelete|KJS::Function, 8, nullptr }/* 3563012867 */ 
};

const struct KJS::HashTable DOMMutationEventProtoTable = { 2, 1, DOMMutationEventProtoTableEntries, 1 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMMessageEventTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "origin", static_cast<int>(DOMMessageEvent::Origin), KJS::DontDelete|KJS::ReadOnly, 0, &DOMMessageEventTableEntries[6] }/* 1562642372 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "data", static_cast<int>(DOMMessageEvent::Data), KJS::DontDelete|KJS::ReadOnly, 0, &DOMMessageEventTableEntries[5] }/* 3260053779 */ ,
   { "source", static_cast<int>(DOMMessageEvent::Source), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 251999914 */ ,
   { "lastEventId", static_cast<int>(DOMMessageEvent::LastEventId), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2383422412 */ 
};

const struct KJS::HashTable DOMMessageEventTable = { 2, 7, DOMMessageEventTableEntries, 5 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMMessageEventProtoTableEntries[] = {
   { "initMessageEvent", static_cast<int>(DOMMessageEvent::InitMessageEvent), KJS::DontDelete|KJS::Function, 7, nullptr }/* 3351233556 */ 
};

const struct KJS::HashTable DOMMessageEventProtoTable = { 2, 1, DOMMessageEventProtoTableEntries, 1 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMHashChangeEventTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "oldURL", static_cast<int>(DOMHashChangeEvent::OldUrl), KJS::DontDelete|KJS::ReadOnly, 0, &DOMHashChangeEventTableEntries[2] }/* 4236691013 */ ,
   { "newURL", static_cast<int>(DOMHashChangeEvent::NewUrl), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 770344559 */ 
};

const struct KJS::HashTable DOMHashChangeEventTable = { 2, 3, DOMHashChangeEventTableEntries, 2 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMHashChangeEventProtoTableEntries[] = {
   { "initHashChangeEvent", static_cast<int>(DOMHashChangeEvent::InitHashChangeEvent), KJS::DontDelete|KJS::Function, 5, nullptr }/* 2225701023 */ 
};

const struct KJS::HashTable DOMHashChangeEventProtoTable = { 2, 1, DOMHashChangeEventProtoTableEntries, 1 };

} // namespace

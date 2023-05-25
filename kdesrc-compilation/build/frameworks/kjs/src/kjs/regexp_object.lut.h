/* Automatically generated from /home/szybet/kdesrc/frameworks/kjs/src/kjs/regexp_object.cpp using /home/szybet/kdesrc/frameworks/kjs/src/kjs/create_hash_table. DO NOT EDIT ! */

#include "lookup.h"

namespace KJS {

static const struct KJS::HashEntry RegExpTableEntries[] = {
   { "input", static_cast<int>(RegExpObjectImp::Input), KJS::None, 0, nullptr }/* 916335100 */ ,
   { "$5", static_cast<int>(RegExpObjectImp::Dollar5), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1294203281 */ ,
   { "$3", static_cast<int>(RegExpObjectImp::Dollar3), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1474083822 */ ,
   { "$1", static_cast<int>(RegExpObjectImp::Dollar1), KJS::DontDelete|KJS::ReadOnly, 0, &RegExpTableEntries[26] }/* 1905495623 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "$_", static_cast<int>(RegExpObjectImp::Input), KJS::DontEnum, 0, nullptr }/* 1478551605 */ ,
   { "$+", static_cast<int>(RegExpObjectImp::LastParen), KJS::DontDelete|KJS::ReadOnly|KJS::DontEnum, 0, &RegExpTableEntries[23] }/* 2230578446 */ ,
   { "multiline", static_cast<int>(RegExpObjectImp::Multiline), KJS::None, 0, nullptr }/* 167225807 */ ,
   { "lastParen", static_cast<int>(RegExpObjectImp::LastParen), KJS::DontDelete|KJS::ReadOnly, 0, &RegExpTableEntries[21] }/* 1570511608 */ ,
   { "$*", static_cast<int>(RegExpObjectImp::Multiline), KJS::DontEnum, 0, &RegExpTableEntries[20] }/* 2273268249 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "rightContext", static_cast<int>(RegExpObjectImp::RightContext), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2723842571 */ ,
   { "$&", static_cast<int>(RegExpObjectImp::LastMatch), KJS::DontDelete|KJS::ReadOnly|KJS::DontEnum, 0, &RegExpTableEntries[25] }/* 3834535012 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "$`", static_cast<int>(RegExpObjectImp::LeftContext), KJS::DontDelete|KJS::ReadOnly|KJS::DontEnum, 0, &RegExpTableEntries[22] }/* 2990930896 */ ,
   { "lastMatch", static_cast<int>(RegExpObjectImp::LastMatch), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1773827617 */ ,
   { "$4", static_cast<int>(RegExpObjectImp::Dollar4), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1436644538 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "leftContext", static_cast<int>(RegExpObjectImp::LeftContext), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3329414529 */ ,
   { "$'", static_cast<int>(RegExpObjectImp::RightContext), KJS::DontDelete|KJS::ReadOnly|KJS::DontEnum, 0, nullptr }/* 3924383088 */ ,
   { "$2", static_cast<int>(RegExpObjectImp::Dollar2), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1984886116 */ ,
   { "$6", static_cast<int>(RegExpObjectImp::Dollar6), KJS::DontDelete|KJS::ReadOnly, 0, &RegExpTableEntries[24] }/* 1220309546 */ ,
   { "$7", static_cast<int>(RegExpObjectImp::Dollar7), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3710803966 */ ,
   { "$8", static_cast<int>(RegExpObjectImp::Dollar8), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3492788052 */ ,
   { "$9", static_cast<int>(RegExpObjectImp::Dollar9), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1575317823 */ 
};

const struct KJS::HashTable RegExpTable = { 2, 27, RegExpTableEntries, 20 };

} // namespace

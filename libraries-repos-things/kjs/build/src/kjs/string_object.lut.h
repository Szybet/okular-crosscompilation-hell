/* Automatically generated from /mnt/HDD/Project/Public/okulartry/kjs/src/kjs/string_object.cpp using /mnt/HDD/Project/Public/okulartry/kjs/src/kjs/create_hash_table. DO NOT EDIT ! */

#include "lookup.h"

namespace KJS {

static const struct KJS::HashEntry stringTableEntries[] = {
   { "indexOf", static_cast<int>(StringProtoFunc::IndexOf), KJS::DontEnum|KJS::Function, 1, &stringTableEntries[31] }/* 3409593642 */ ,
   { "charAt", static_cast<int>(StringProtoFunc::CharAt), KJS::DontEnum|KJS::Function, 1, &stringTableEntries[26] }/* 2303787019 */ ,
   { "toString", static_cast<int>(StringProtoFunc::ToString), KJS::DontEnum|KJS::Function, 0, &stringTableEntries[29] }/* 150235932 */ ,
   { "concat", static_cast<int>(StringProtoFunc::Concat), KJS::DontEnum|KJS::Function, 1, &stringTableEntries[28] }/* 2774556463 */ ,
   { "endsWith", static_cast<int>(StringProtoFunc::EndsWith), KJS::DontEnum|KJS::Function, 1, &stringTableEntries[39] }/* 2066391006 */ ,
   { "replace", static_cast<int>(StringProtoFunc::Replace), KJS::DontEnum|KJS::Function, 2, &stringTableEntries[35] }/* 3553311767 */ ,
   { "fontsize", static_cast<int>(StringProtoFunc::Fontsize), KJS::DontEnum|KJS::Function, 1, &stringTableEntries[41] }/* 3907622426 */ ,
   { "toLocaleUpperCase", static_cast<int>(StringProtoFunc::ToLocaleUpperCase), KJS::DontEnum|KJS::Function, 0, nullptr }/* 3253347845 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "match", static_cast<int>(StringProtoFunc::Match), KJS::DontEnum|KJS::Function, 1, nullptr }/* 397212903 */ ,
   { "trimLeft", static_cast<int>(StringProtoFunc::TrimLeft), KJS::DontEnum|KJS::Function, 0, nullptr }/* 1167779038 */ ,
   { "slice", static_cast<int>(StringProtoFunc::Slice), KJS::DontEnum|KJS::Function, 2, &stringTableEntries[36] }/* 1302631211 */ ,
   { "toUpperCase", static_cast<int>(StringProtoFunc::ToUpperCase), KJS::DontEnum|KJS::Function, 0, &stringTableEntries[32] }/* 140328382 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "substring", static_cast<int>(StringProtoFunc::Substring), KJS::DontEnum|KJS::Function, 2, nullptr }/* 3759584831 */ ,
   { "trim", static_cast<int>(StringProtoFunc::Trim), KJS::DontEnum|KJS::Function, 0, &stringTableEntries[40] }/* 4151827800 */ ,
   { "substr", static_cast<int>(StringProtoFunc::Substr), KJS::DontEnum|KJS::Function, 2, &stringTableEntries[38] }/* 2760417833 */ ,
   { "startsWith", static_cast<int>(StringProtoFunc::StartsWith), KJS::DontEnum|KJS::Function, 1, nullptr }/* 2908526340 */ ,
   { "fontcolor", static_cast<int>(StringProtoFunc::Fontcolor), KJS::DontEnum|KJS::Function, 1, &stringTableEntries[42] }/* 254240785 */ ,
   { "valueOf", static_cast<int>(StringProtoFunc::ValueOf), KJS::DontEnum|KJS::Function, 0, nullptr }/* 510084322 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "lastIndexOf", static_cast<int>(StringProtoFunc::LastIndexOf), KJS::DontEnum|KJS::Function, 1, nullptr }/* 2145229914 */ ,
   { "includes", static_cast<int>(StringProtoFunc::Includes), KJS::DontEnum|KJS::Function, 1, &stringTableEntries[27] }/* 2316496517 */ ,
   { "split", static_cast<int>(StringProtoFunc::Split), KJS::DontEnum|KJS::Function, 2, nullptr }/* 2665456818 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "charCodeAt", static_cast<int>(StringProtoFunc::CharCodeAt), KJS::DontEnum|KJS::Function, 1, &stringTableEntries[37] }/* 3861594465 */ ,
   { "search", static_cast<int>(StringProtoFunc::Search), KJS::DontEnum|KJS::Function, 1, nullptr }/* 2758369481 */ ,
   { "toLowerCase", static_cast<int>(StringProtoFunc::ToLowerCase), KJS::DontEnum|KJS::Function, 0, nullptr }/* 4150493545 */ ,
   { "toLocaleLowerCase", static_cast<int>(StringProtoFunc::ToLocaleLowerCase), KJS::DontEnum|KJS::Function, 0, &stringTableEntries[30] }/* 3660867394 */ ,
   { "localeCompare", static_cast<int>(StringProtoFunc::LocaleCompare), KJS::DontEnum|KJS::Function, 1, nullptr }/* 2251443118 */ ,
   { "repeat", static_cast<int>(StringProtoFunc::Repeat), KJS::DontEnum|KJS::Function, 1, &stringTableEntries[33] }/* 2608406840 */ ,
   { "big", static_cast<int>(StringProtoFunc::Big), KJS::DontEnum|KJS::Function, 0, nullptr }/* 1914932746 */ ,
   { "small", static_cast<int>(StringProtoFunc::Small), KJS::DontEnum|KJS::Function, 0, &stringTableEntries[34] }/* 3336251672 */ ,
   { "blink", static_cast<int>(StringProtoFunc::Blink), KJS::DontEnum|KJS::Function, 0, nullptr }/* 1262278186 */ ,
   { "bold", static_cast<int>(StringProtoFunc::Bold), KJS::DontEnum|KJS::Function, 0, nullptr }/* 318223287 */ ,
   { "fixed", static_cast<int>(StringProtoFunc::Fixed), KJS::DontEnum|KJS::Function, 0, nullptr }/* 1949685047 */ ,
   { "italics", static_cast<int>(StringProtoFunc::Italics), KJS::DontEnum|KJS::Function, 0, &stringTableEntries[43] }/* 3744078755 */ ,
   { "strike", static_cast<int>(StringProtoFunc::Strike), KJS::DontEnum|KJS::Function, 0, nullptr }/* 367394031 */ ,
   { "sub", static_cast<int>(StringProtoFunc::Sub), KJS::DontEnum|KJS::Function, 0, nullptr }/* 3002127314 */ ,
   { "sup", static_cast<int>(StringProtoFunc::Sup), KJS::DontEnum|KJS::Function, 0, nullptr }/* 2072338986 */ ,
   { "anchor", static_cast<int>(StringProtoFunc::Anchor), KJS::DontEnum|KJS::Function, 1, nullptr }/* 3767033406 */ ,
   { "link", static_cast<int>(StringProtoFunc::Link), KJS::DontEnum|KJS::Function, 1, nullptr }/* 1298856123 */ ,
   { "trimRight", static_cast<int>(StringProtoFunc::TrimRight), KJS::DontEnum|KJS::Function, 0, nullptr }/* 2241493359 */ 
};

const struct KJS::HashTable stringTable = { 2, 44, stringTableEntries, 26 };

} // namespace

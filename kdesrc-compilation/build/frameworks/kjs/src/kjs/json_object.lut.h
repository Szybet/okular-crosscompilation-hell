/* Automatically generated from /home/szybet/kdesrc/frameworks/kjs/src/kjs/json_object.cpp using /home/szybet/kdesrc/frameworks/kjs/src/kjs/create_hash_table. DO NOT EDIT ! */

#include "lookup.h"

namespace KJS {

static const struct KJS::HashEntry jsonTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "parse", static_cast<int>(JSONObjectImp::Parse), KJS::DontEnum|KJS::Function, 2, &jsonTableEntries[2] }/* 2601290665 */ ,
   { "stringify", static_cast<int>(JSONObjectImp::Stringify), KJS::DontEnum|KJS::Function, 3, nullptr }/* 1977481115 */ 
};

const struct KJS::HashTable jsonTable = { 2, 3, jsonTableEntries, 2 };

} // namespace

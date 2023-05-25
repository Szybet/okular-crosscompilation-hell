/* Automatically generated from /mnt/HDD/Project/Public/okulartry/kjs/src/kjs/number_object.cpp using /mnt/HDD/Project/Public/okulartry/kjs/src/kjs/create_hash_table. DO NOT EDIT ! */

#include "lookup.h"

namespace KJS {

static const struct KJS::HashEntry numberTableEntries[] = {
   { "MIN_SAFE_INTEGER", static_cast<int>(NumberObjectImp::MinSafeInteger), KJS::DontEnum|KJS::DontDelete|KJS::ReadOnly, 0, &numberTableEntries[9] }/* 687774655 */ ,
   { "MAX_VALUE", static_cast<int>(NumberObjectImp::MaxValue), KJS::DontEnum|KJS::DontDelete|KJS::ReadOnly, 0, &numberTableEntries[12] }/* 2846567726 */ ,
   { "NaN", static_cast<int>(NumberObjectImp::NaNValue), KJS::DontEnum|KJS::DontDelete|KJS::ReadOnly, 0, &numberTableEntries[8] }/* 2899381417 */ ,
   { "parseInt", static_cast<int>(NumberObjectImp::ParseInt), KJS::DontEnum|KJS::Function, 2, nullptr }/* 38573943 */ ,
   { "NEGATIVE_INFINITY", static_cast<int>(NumberObjectImp::NegInfinity), KJS::DontEnum|KJS::DontDelete|KJS::ReadOnly, 0, &numberTableEntries[5] }/* 1655285119 */ ,
   { "POSITIVE_INFINITY", static_cast<int>(NumberObjectImp::PosInfinity), KJS::DontEnum|KJS::DontDelete|KJS::ReadOnly, 0, &numberTableEntries[6] }/* 2941182689 */ ,
   { "MIN_VALUE", static_cast<int>(NumberObjectImp::MinValue), KJS::DontEnum|KJS::DontDelete|KJS::ReadOnly, 0, &numberTableEntries[7] }/* 3873332699 */ ,
   { "MAX_SAFE_INTEGER", static_cast<int>(NumberObjectImp::MaxSafeInteger), KJS::DontEnum|KJS::DontDelete|KJS::ReadOnly, 0, &numberTableEntries[11] }/* 2098293089 */ ,
   { "isFinite", static_cast<int>(NumberObjectImp::IsFinite), KJS::DontEnum|KJS::Function, 1, nullptr }/* 841536107 */ ,
   { "isInteger", static_cast<int>(NumberObjectImp::IsInteger), KJS::DontEnum|KJS::Function, 1, &numberTableEntries[10] }/* 2574049485 */ ,
   { "isNaN", static_cast<int>(NumberObjectImp::IsNaN), KJS::DontEnum|KJS::Function, 1, nullptr }/* 858874645 */ ,
   { "isSafeInteger", static_cast<int>(NumberObjectImp::IsSafeInteger), KJS::DontEnum|KJS::Function, 1, nullptr }/* 2012993289 */ ,
   { "parseFloat", static_cast<int>(NumberObjectImp::ParseFloat), KJS::DontEnum|KJS::Function, 1, nullptr }/* 3924686096 */ 
};

const struct KJS::HashTable numberTable = { 2, 13, numberTableEntries, 5 };

} // namespace

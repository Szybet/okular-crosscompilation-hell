/* Automatically generated from /mnt/HDD/Project/Public/okulartry/kjs/src/kjs/array_object.cpp using /mnt/HDD/Project/Public/okulartry/kjs/src/kjs/create_hash_table. DO NOT EDIT ! */

#include "lookup.h"

namespace KJS {

static const struct KJS::HashEntry arrayTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "reduceRight", static_cast<int>(ArrayProtoFunc::ReduceRight), KJS::DontEnum|KJS::Function, 1, nullptr }/* 1657359297 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "reverse", static_cast<int>(ArrayProtoFunc::Reverse), KJS::DontEnum|KJS::Function, 0, nullptr }/* 1259697523 */ ,
   { "pop", static_cast<int>(ArrayProtoFunc::Pop), KJS::DontEnum|KJS::Function, 0, &arrayTableEntries[17] }/* 876916276 */ ,
   { "push", static_cast<int>(ArrayProtoFunc::Push), KJS::DontEnum|KJS::Function, 1, nullptr }/* 55090581 */ ,
   { "toLocaleString", static_cast<int>(ArrayProtoFunc::ToLocaleString), KJS::DontEnum|KJS::Function, 0, nullptr }/* 3561459206 */ ,
   { "shift", static_cast<int>(ArrayProtoFunc::Shift), KJS::DontEnum|KJS::Function, 0, &arrayTableEntries[19] }/* 2106316215 */ ,
   { "map", static_cast<int>(ArrayProtoFunc::Map), KJS::DontEnum|KJS::Function, 1, nullptr }/* 2902200536 */ ,
   { "splice", static_cast<int>(ArrayProtoFunc::Splice), KJS::DontEnum|KJS::Function, 2, &arrayTableEntries[22] }/* 3393300697 */ ,
   { "indexOf", static_cast<int>(ArrayProtoFunc::IndexOf), KJS::DontEnum|KJS::Function, 1, &arrayTableEntries[21] }/* 3409593642 */ ,
   { "slice", static_cast<int>(ArrayProtoFunc::Slice), KJS::DontEnum|KJS::Function, 2, nullptr }/* 1302631211 */ ,
   { "toString", static_cast<int>(ArrayProtoFunc::ToString), KJS::DontEnum|KJS::Function, 0, nullptr }/* 150235932 */ ,
   { "sort", static_cast<int>(ArrayProtoFunc::Sort), KJS::DontEnum|KJS::Function, 1, nullptr }/* 3234276573 */ ,
   { "filter", static_cast<int>(ArrayProtoFunc::Filter), KJS::DontEnum|KJS::Function, 1, nullptr }/* 1342131950 */ ,
   { "concat", static_cast<int>(ArrayProtoFunc::Concat), KJS::DontEnum|KJS::Function, 1, &arrayTableEntries[16] }/* 2774556463 */ ,
   { "join", static_cast<int>(ArrayProtoFunc::Join), KJS::DontEnum|KJS::Function, 1, &arrayTableEntries[18] }/* 74534303 */ ,
   { "unshift", static_cast<int>(ArrayProtoFunc::UnShift), KJS::DontEnum|KJS::Function, 1, nullptr }/* 1292001012 */ ,
   { "every", static_cast<int>(ArrayProtoFunc::Every), KJS::DontEnum|KJS::Function, 1, &arrayTableEntries[20] }/* 4286540159 */ ,
   { "forEach", static_cast<int>(ArrayProtoFunc::ForEach), KJS::DontEnum|KJS::Function, 1, nullptr }/* 2626804119 */ ,
   { "some", static_cast<int>(ArrayProtoFunc::Some), KJS::DontEnum|KJS::Function, 1, nullptr }/* 2331092431 */ ,
   { "lastIndexOf", static_cast<int>(ArrayProtoFunc::LastIndexOf), KJS::DontEnum|KJS::Function, 1, nullptr }/* 2145229914 */ ,
   { "reduce", static_cast<int>(ArrayProtoFunc::Reduce), KJS::DontEnum|KJS::Function, 1, nullptr }/* 1089655529 */ 
};

const struct KJS::HashTable arrayTable = { 2, 23, arrayTableEntries, 16 };

} // namespace

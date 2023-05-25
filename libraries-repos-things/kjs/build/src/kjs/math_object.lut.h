/* Automatically generated from /mnt/HDD/Project/Public/okulartry/kjs/src/kjs/math_object.cpp using /mnt/HDD/Project/Public/okulartry/kjs/src/kjs/create_hash_table. DO NOT EDIT ! */

#include "lookup.h"

namespace KJS {

static const struct KJS::HashEntry mathTableEntries[] = {
   { "LN2", static_cast<int>(MathObjectImp::Ln2), KJS::DontEnum|KJS::DontDelete|KJS::ReadOnly, 0, &mathTableEntries[25] }/* 2671667313 */ ,
   { "round", static_cast<int>(MathObjectImp::Round), KJS::DontEnum|KJS::Function, 1, &mathTableEntries[30] }/* 368505691 */ ,
   { "abs", static_cast<int>(MathObjectImp::Abs), KJS::DontEnum|KJS::Function, 1, &mathTableEntries[23] }/* 4031145932 */ ,
   { "acosh", static_cast<int>(MathObjectImp::ACosH), KJS::DontEnum|KJS::Function, 1, &mathTableEntries[31] }/* 1180204875 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "LOG10E", static_cast<int>(MathObjectImp::Log10E), KJS::DontEnum|KJS::DontDelete|KJS::ReadOnly, 0, &mathTableEntries[21] }/* 3985658276 */ ,
   { "pow", static_cast<int>(MathObjectImp::Pow), KJS::DontEnum|KJS::Function, 2, nullptr }/* 195216468 */ ,
   { "exp", static_cast<int>(MathObjectImp::Exp), KJS::DontEnum|KJS::Function, 1, &mathTableEntries[33] }/* 3909690232 */ ,
   { "E", static_cast<int>(MathObjectImp::Euler), KJS::DontEnum|KJS::DontDelete|KJS::ReadOnly, 0, &mathTableEntries[36] }/* 4247163005 */ ,
   { "floor", static_cast<int>(MathObjectImp::Floor), KJS::DontEnum|KJS::Function, 1, &mathTableEntries[34] }/* 1931817057 */ ,
   { "LOG2E", static_cast<int>(MathObjectImp::Log2E), KJS::DontEnum|KJS::DontDelete|KJS::ReadOnly, 0, &mathTableEntries[29] }/* 1065392359 */ ,
   { "atan2", static_cast<int>(MathObjectImp::ATan2), KJS::DontEnum|KJS::Function, 2, &mathTableEntries[24] }/* 240016088 */ ,
   { "acos", static_cast<int>(MathObjectImp::ACos), KJS::DontEnum|KJS::Function, 1, nullptr }/* 2091015246 */ ,
   { "PI", static_cast<int>(MathObjectImp::Pi), KJS::DontEnum|KJS::DontDelete|KJS::ReadOnly, 0, &mathTableEntries[22] }/* 2281976437 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "tan", static_cast<int>(MathObjectImp::Tan), KJS::DontEnum|KJS::Function, 1, nullptr }/* 1495917418 */ ,
   { "log", static_cast<int>(MathObjectImp::Log), KJS::DontEnum|KJS::Function, 1, &mathTableEntries[32] }/* 3271412756 */ ,
   { "LN10", static_cast<int>(MathObjectImp::Ln10), KJS::DontEnum|KJS::DontDelete|KJS::ReadOnly, 0, &mathTableEntries[35] }/* 3786008769 */ ,
   { "SQRT2", static_cast<int>(MathObjectImp::Sqrt2), KJS::DontEnum|KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 670080997 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "SQRT1_2", static_cast<int>(MathObjectImp::Sqrt1_2), KJS::DontEnum|KJS::DontDelete|KJS::ReadOnly, 0, &mathTableEntries[28] }/* 2399638022 */ ,
   { "asin", static_cast<int>(MathObjectImp::ASin), KJS::DontEnum|KJS::Function, 1, &mathTableEntries[44] }/* 41780542 */ ,
   { "atan", static_cast<int>(MathObjectImp::ATan), KJS::DontEnum|KJS::Function, 1, &mathTableEntries[26] }/* 1142128808 */ ,
   { "ceil", static_cast<int>(MathObjectImp::Ceil), KJS::DontEnum|KJS::Function, 1, &mathTableEntries[27] }/* 2762729288 */ ,
   { "cos", static_cast<int>(MathObjectImp::Cos), KJS::DontEnum|KJS::Function, 1, nullptr }/* 2954861070 */ ,
   { "max", static_cast<int>(MathObjectImp::Max), KJS::DontEnum|KJS::Function, 2, &mathTableEntries[39] }/* 389325134 */ ,
   { "min", static_cast<int>(MathObjectImp::Min), KJS::DontEnum|KJS::Function, 2, &mathTableEntries[37] }/* 1361150774 */ ,
   { "random", static_cast<int>(MathObjectImp::Random), KJS::DontEnum|KJS::Function, 0, nullptr }/* 549648839 */ ,
   { "sin", static_cast<int>(MathObjectImp::Sin), KJS::DontEnum|KJS::Function, 1, &mathTableEntries[42] }/* 1589798521 */ ,
   { "sqrt", static_cast<int>(MathObjectImp::Sqrt), KJS::DontEnum|KJS::Function, 1, &mathTableEntries[40] }/* 4154444533 */ ,
   { "acosh", static_cast<int>(MathObjectImp::ASinH), KJS::DontEnum|KJS::Function, 1, nullptr }/* 1180204875 */ ,
   { "atanh", static_cast<int>(MathObjectImp::ATanH), KJS::DontEnum|KJS::Function, 1, &mathTableEntries[38] }/* 3571102328 */ ,
   { "cbrt", static_cast<int>(MathObjectImp::Cbrt), KJS::DontEnum|KJS::Function, 1, nullptr }/* 2922510871 */ ,
   { "cosh", static_cast<int>(MathObjectImp::CosH), KJS::DontEnum|KJS::Function, 1, nullptr }/* 2816545398 */ ,
   { "exmp1", static_cast<int>(MathObjectImp::Exmp1), KJS::DontEnum|KJS::Function, 1, nullptr }/* 3919018275 */ ,
   { "log1p", static_cast<int>(MathObjectImp::Log1p), KJS::DontEnum|KJS::Function, 1, &mathTableEntries[45] }/* 2895489857 */ ,
   { "log10", static_cast<int>(MathObjectImp::Log10), KJS::DontEnum|KJS::Function, 1, nullptr }/* 605892074 */ ,
   { "log2", static_cast<int>(MathObjectImp::Log2), KJS::DontEnum|KJS::Function, 1, &mathTableEntries[41] }/* 3577529063 */ ,
   { "sign", static_cast<int>(MathObjectImp::Sign), KJS::DontEnum|KJS::Function, 1, &mathTableEntries[46] }/* 2949593054 */ ,
   { "sinh", static_cast<int>(MathObjectImp::SinH), KJS::DontEnum|KJS::Function, 1, nullptr }/* 2586822799 */ ,
   { "tanh", static_cast<int>(MathObjectImp::TanH), KJS::DontEnum|KJS::Function, 1, nullptr }/* 48808952 */ ,
   { "trunc", static_cast<int>(MathObjectImp::Trunc), KJS::DontEnum|KJS::Function, 1, &mathTableEntries[43] }/* 3912457048 */ ,
   { "hypot", static_cast<int>(MathObjectImp::Hypot), KJS::DontEnum|KJS::Function, 0, nullptr }/* 1301352727 */ ,
   { "imul", static_cast<int>(MathObjectImp::Imul), KJS::DontEnum|KJS::Function, 2, nullptr }/* 3503057557 */ ,
   { "fround", static_cast<int>(MathObjectImp::FRound), KJS::DontEnum|KJS::Function, 1, nullptr }/* 2056525409 */ ,
   { "clz32", static_cast<int>(MathObjectImp::Clz32), KJS::DontEnum|KJS::Function, 1, nullptr }/* 1512247970 */ 
};

const struct KJS::HashTable mathTable = { 2, 47, mathTableEntries, 21 };

} // namespace

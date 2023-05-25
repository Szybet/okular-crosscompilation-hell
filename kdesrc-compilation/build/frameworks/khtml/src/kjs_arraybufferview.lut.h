/* Automatically generated from /home/szybet/kdesrc/frameworks/khtml/src/ecma/kjs_arraybufferview.cpp using /mnt/HDD/Project/Public/okulartry/okular-things/share/kf5/kjs/create_hash_table. DO NOT EDIT ! */

namespace KJS {

static const struct KJS::HashEntry ArrayBufferViewProtoTableEntries[] = {
   { "subarray", static_cast<int>(ArrayBufferViewBase::Subarray), KJS::Function|KJS::DontDelete, 1, nullptr }/* 2761800440 */ ,
   { "set", static_cast<int>(ArrayBufferViewBase::Set), KJS::Function|KJS::DontDelete, 1, nullptr }/* 1282359495 */ 
};

const struct KJS::HashTable ArrayBufferViewProtoTable = { 2, 2, ArrayBufferViewProtoTableEntries, 2 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry ArrayBufferViewConstTableEntries[] = {
   { "BYTES_PER_ELEMENT", static_cast<int>(ArrayBufferViewBase::BytesPerElement), KJS::ReadOnly|KJS::DontDelete, 0, nullptr }/* 3920311470 */ 
};

const struct KJS::HashTable ArrayBufferViewConstTable = { 2, 1, ArrayBufferViewConstTableEntries, 1 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry ArrayBufferViewTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "byteLength", static_cast<int>(ArrayBufferViewBase::ByteLength), KJS::ReadOnly|KJS::DontDelete, 0, &ArrayBufferViewTableEntries[4] }/* 3209110669 */ ,
   { "byteOffset", static_cast<int>(ArrayBufferViewBase::ByteOffset), KJS::ReadOnly|KJS::DontDelete, 0, nullptr }/* 3658961218 */ ,
   { "buffer", static_cast<int>(ArrayBufferViewBase::Buffer), KJS::ReadOnly|KJS::DontDelete, 0, nullptr }/* 740270091 */ ,
   { "length", static_cast<int>(ArrayBufferViewBase::Length), KJS::ReadOnly|KJS::DontDelete, 0, nullptr }/* 2484182065 */ 
};

const struct KJS::HashTable ArrayBufferViewTable = { 2, 5, ArrayBufferViewTableEntries, 4 };

} // namespace

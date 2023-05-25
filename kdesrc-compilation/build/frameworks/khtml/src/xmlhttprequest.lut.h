/* Automatically generated from /home/szybet/kdesrc/frameworks/khtml/src/ecma/xmlhttprequest.cpp using /mnt/HDD/Project/Public/okulartry/okular-things/share/kf5/kjs/create_hash_table. DO NOT EDIT ! */

namespace KJS {

static const struct KJS::HashEntry XMLHttpRequestProtoTableEntries[] = {
   { "getResponseHeader", static_cast<int>(XMLHttpRequest::GetResponseHeader), KJS::DontDelete|KJS::Function, 1, nullptr }/* 3719932930 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "setRequestHeader", static_cast<int>(XMLHttpRequest::SetRequestHeader), KJS::DontDelete|KJS::Function, 2, nullptr }/* 447965870 */ ,
   { "send", static_cast<int>(XMLHttpRequest::Send), KJS::DontDelete|KJS::Function, 1, nullptr }/* 1580270940 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "open", static_cast<int>(XMLHttpRequest::Open), KJS::DontDelete|KJS::Function, 5, &XMLHttpRequestProtoTableEntries[8] }/* 1674648015 */ ,
   { "abort", static_cast<int>(XMLHttpRequest::Abort), KJS::DontDelete|KJS::Function, 0, &XMLHttpRequestProtoTableEntries[7] }/* 3823818319 */ ,
   { "getAllResponseHeaders", static_cast<int>(XMLHttpRequest::GetAllResponseHeaders), KJS::DontDelete|KJS::Function, 0, nullptr }/* 571638136 */ ,
   { "overrideMimeType", static_cast<int>(XMLHttpRequest::OverrideMIMEType), KJS::DontDelete|KJS::Function, 1, nullptr }/* 4250026191 */ 
};

const struct KJS::HashTable XMLHttpRequestProtoTable = { 2, 9, XMLHttpRequestProtoTableEntries, 7 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry XMLHttpRequestTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "responseText", static_cast<int>(XMLHttpRequest::ResponseText), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 287730045 */ ,
   { "status", static_cast<int>(XMLHttpRequest::Status), KJS::DontDelete|KJS::ReadOnly, 0, &XMLHttpRequestTableEntries[8] }/* 704781072 */ ,
   { "readyState", static_cast<int>(XMLHttpRequest::ReadyState), KJS::DontDelete|KJS::ReadOnly, 0, &XMLHttpRequestTableEntries[7] }/* 2142707136 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "responseXML", static_cast<int>(XMLHttpRequest::ResponseXML), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 406434600 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "statusText", static_cast<int>(XMLHttpRequest::StatusText), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 158010352 */ ,
   { "onreadystatechange", static_cast<int>(XMLHttpRequest::Onreadystatechange), KJS::DontDelete, 0, &XMLHttpRequestTableEntries[9] }/* 95629655 */ ,
   { "onload", static_cast<int>(XMLHttpRequest::Onload), KJS::DontDelete, 0, nullptr }/* 3960668140 */ 
};

const struct KJS::HashTable XMLHttpRequestTable = { 2, 10, XMLHttpRequestTableEntries, 7 };

} // namespace

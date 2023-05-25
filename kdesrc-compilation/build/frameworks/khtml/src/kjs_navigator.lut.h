/* Automatically generated from /home/szybet/kdesrc/frameworks/khtml/src/ecma/kjs_navigator.cpp using /mnt/HDD/Project/Public/okulartry/okular-things/share/kf5/kjs/create_hash_table. DO NOT EDIT ! */

namespace KJS {

static const struct KJS::HashEntry NavigatorTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "mimeTypes", static_cast<int>(Navigator::_MimeTypes), KJS::DontDelete|KJS::ReadOnly, 0, &NavigatorTableEntries[18] }/* 541397713 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "vendor", static_cast<int>(Navigator::Vendor), KJS::DontDelete|KJS::ReadOnly, 0, &NavigatorTableEntries[19] }/* 4183282360 */ ,
   { "appName", static_cast<int>(Navigator::AppName), KJS::DontDelete|KJS::ReadOnly, 0, &NavigatorTableEntries[13] }/* 1928575421 */ ,
   { "platform", static_cast<int>(Navigator::Platform), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1656147642 */ ,
   { "appCodeName", static_cast<int>(Navigator::AppCodeName), KJS::DontDelete|KJS::ReadOnly, 0, &NavigatorTableEntries[12] }/* 2036402863 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "plugins", static_cast<int>(Navigator::_Plugins), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3805841733 */ ,
   { "userLanguage", static_cast<int>(Navigator::UserLanguage), KJS::DontDelete|KJS::ReadOnly, 0, &NavigatorTableEntries[17] }/* 2090750194 */ ,
   { "browserLanguage", static_cast<int>(Navigator::BrowserLanguage), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1793368571 */ ,
   { "appVersion", static_cast<int>(Navigator::AppVersion), KJS::DontDelete|KJS::ReadOnly, 0, &NavigatorTableEntries[15] }/* 737224111 */ ,
   { "language", static_cast<int>(Navigator::Language), KJS::DontDelete|KJS::ReadOnly, 0, &NavigatorTableEntries[14] }/* 389985029 */ ,
   { "userAgent", static_cast<int>(Navigator::UserAgent), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1491767165 */ ,
   { "cpuClass", static_cast<int>(Navigator::CpuClass), KJS::DontDelete|KJS::ReadOnly, 0, &NavigatorTableEntries[16] }/* 4209816751 */ ,
   { "product", static_cast<int>(Navigator::Product), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3666888811 */ ,
   { "vendorSub", static_cast<int>(Navigator::VendorSub), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2200565686 */ ,
   { "productSub", static_cast<int>(Navigator::ProductSub), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2097335881 */ ,
   { "cookieEnabled", static_cast<int>(Navigator::CookieEnabled), KJS::DontDelete|KJS::ReadOnly, 0, &NavigatorTableEntries[20] }/* 2175375748 */ ,
   { "javaEnabled", static_cast<int>(Navigator::JavaEnabled), KJS::DontDelete|KJS::Function, 0, nullptr }/* 3101780464 */ 
};

const struct KJS::HashTable NavigatorTable = { 2, 21, NavigatorTableEntries, 12 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry PluginsTableEntries[] = {
   { "refresh", static_cast<int>(Plugins_Refresh), KJS::DontDelete|KJS::Function, 0, nullptr }/* 561650708 */ ,
   { "length", static_cast<int>(Plugins_Length), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2484182065 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "item", static_cast<int>(Plugins_Item), KJS::DontDelete|KJS::Function, 1, &PluginsTableEntries[4] }/* 1031584463 */ ,
   { "namedItem", static_cast<int>(Plugins_NamedItem), KJS::DontDelete|KJS::Function, 1, nullptr }/* 4103559531 */ 
};

const struct KJS::HashTable PluginsTable = { 2, 5, PluginsTableEntries, 4 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry MimeTypesTableEntries[] = {
   { "namedItem", static_cast<int>(MimeTypes_NamedItem), KJS::DontDelete|KJS::Function, 1, nullptr }/* 4103559531 */ ,
   { "length", static_cast<int>(MimeTypes_Length), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2484182065 */ ,
   { "item", static_cast<int>(MimeTypes_Item), KJS::DontDelete|KJS::Function, 1, nullptr }/* 1031584463 */ 
};

const struct KJS::HashTable MimeTypesTable = { 2, 3, MimeTypesTableEntries, 3 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry PluginTableEntries[] = {
   { "item", static_cast<int>(Plugin_Item), KJS::DontDelete|KJS::Function, 1, nullptr }/* 1031584463 */ ,
   { "filename", static_cast<int>(Plugin_FileName), KJS::DontDelete|KJS::ReadOnly, 0, &PluginTableEntries[7] }/* 2442346670 */ ,
   { "name", static_cast<int>(Plugin_Name), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 4135969945 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "description", static_cast<int>(Plugin_Description), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 432724751 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "length", static_cast<int>(Plugin_Length), KJS::DontDelete|KJS::ReadOnly, 0, &PluginTableEntries[8] }/* 2484182065 */ ,
   { "namedItem", static_cast<int>(Plugin_NamedItem), KJS::DontDelete|KJS::Function, 1, nullptr }/* 4103559531 */ 
};

const struct KJS::HashTable PluginTable = { 2, 9, PluginTableEntries, 7 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry MimeTypeTableEntries[] = {
   { "suffixes", static_cast<int>(MimeType_Suffixes), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 272507524 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "enabledPlugin", static_cast<int>(MimeType_EnabledPlugin), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 4109007998 */ ,
   { "description", static_cast<int>(MimeType_Description), KJS::DontDelete|KJS::ReadOnly, 0, &MimeTypeTableEntries[4] }/* 432724751 */ ,
   { "type", static_cast<int>(MimeType_Type), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 924663163 */ 
};

const struct KJS::HashTable MimeTypeTable = { 2, 5, MimeTypeTableEntries, 4 };

} // namespace

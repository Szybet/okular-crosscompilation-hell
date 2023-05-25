/* Automatically generated from /home/szybet/kdesrc/frameworks/khtml/src/ecma/kjs_html.cpp using /mnt/HDD/Project/Public/okulartry/okular-things/share/kf5/kjs/create_hash_table. DO NOT EDIT ! */

namespace KJS {

static const struct KJS::HashEntry HTMLDocumentProtoTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "clear", static_cast<int>(HTMLDocument::Clear), KJS::DontDelete|KJS::Function, 0, nullptr }/* 3385053211 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "close", static_cast<int>(HTMLDocument::Close), KJS::DontDelete|KJS::Function, 0, nullptr }/* 3509661114 */ ,
   { "getElementsByName", static_cast<int>(HTMLDocument::GetElementsByName), KJS::DontDelete|KJS::Function, 1, nullptr }/* 230354854 */ ,
   { "writeln", static_cast<int>(HTMLDocument::WriteLn), KJS::DontDelete|KJS::Function, 1, &HTMLDocumentProtoTableEntries[11] }/* 4045222967 */ ,
   { "write", static_cast<int>(HTMLDocument::Write), KJS::DontDelete|KJS::Function, 1, nullptr }/* 580445663 */ ,
   { "open", static_cast<int>(HTMLDocument::Open), KJS::DontDelete|KJS::Function, 0, &HTMLDocumentProtoTableEntries[12] }/* 1674648015 */ ,
   { "captureEvents", static_cast<int>(HTMLDocument::CaptureEvents), KJS::DontDelete|KJS::Function, 0, nullptr }/* 1782609507 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "getSelection", static_cast<int>(HTMLDocument::GetSelection), KJS::DontDelete|KJS::Function, 1, nullptr }/* 1198479100 */ ,
   { "releaseEvents", static_cast<int>(HTMLDocument::ReleaseEvents), KJS::DontDelete|KJS::Function, 0, nullptr }/* 2991574956 */ 
};

const struct KJS::HashTable HTMLDocumentProtoTable = { 2, 13, HTMLDocumentProtoTableEntries, 11 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLDocumentTableEntries[] = {
   { "lastModified", static_cast<int>(HTMLDocument::LastModified), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 917634410 */ ,
   { "body", static_cast<int>(HTMLDocument::Body), KJS::DontDelete, 0, &HTMLDocumentTableEntries[31] }/* 1045050084 */ ,
   { "anchors", static_cast<int>(HTMLDocument::Anchors), KJS::DontDelete|KJS::ReadOnly, 0, &HTMLDocumentTableEntries[40] }/* 3665063042 */ ,
   { "images", static_cast<int>(HTMLDocument::Images), KJS::DontDelete|KJS::ReadOnly, 0, &HTMLDocumentTableEntries[32] }/* 3901693855 */ ,
   { "forms", static_cast<int>(HTMLDocument::Forms), KJS::DontDelete|KJS::ReadOnly, 0, &HTMLDocumentTableEntries[39] }/* 2278696110 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "links", static_cast<int>(HTMLDocument::Links), KJS::DontDelete|KJS::ReadOnly, 0, &HTMLDocumentTableEntries[37] }/* 2488595967 */ ,
   { "all", static_cast<int>(HTMLDocument::All), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 765480498 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "domain", static_cast<int>(HTMLDocument::Domain), KJS::DontDelete, 0, &HTMLDocumentTableEntries[36] }/* 2826778473 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "linkColor", static_cast<int>(HTMLDocument::LinkColor), KJS::DontDelete, 0, nullptr }/* 2993261312 */ ,
   { "activeElement", static_cast<int>(HTMLDocument::ActiveElement), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2557178175 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "cookie", static_cast<int>(HTMLDocument::Cookie), KJS::DontDelete, 0, &HTMLDocumentTableEntries[38] }/* 1084978134 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "frames", static_cast<int>(HTMLDocument::Frames), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2355833864 */ ,
   { "location", static_cast<int>(HTMLDocument::Location), KJS::DontDelete, 0, nullptr }/* 290291248 */ ,
   { "applets", static_cast<int>(HTMLDocument::Applets), KJS::DontDelete|KJS::ReadOnly, 0, &HTMLDocumentTableEntries[35] }/* 4212231046 */ ,
   { "URL", static_cast<int>(HTMLDocument::URL), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1369323967 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "referrer", static_cast<int>(HTMLDocument::Referrer), KJS::DontDelete|KJS::ReadOnly, 0, &HTMLDocumentTableEntries[33] }/* 2325244744 */ ,
   { "scripts", static_cast<int>(HTMLDocument::Scripts), KJS::DontDelete|KJS::ReadOnly, 0, &HTMLDocumentTableEntries[34] }/* 927479608 */ ,
   { "bgColor", static_cast<int>(HTMLDocument::BgColor), KJS::DontDelete, 0, nullptr }/* 997909440 */ ,
   { "fgColor", static_cast<int>(HTMLDocument::FgColor), KJS::DontDelete, 0, nullptr }/* 2535760908 */ ,
   { "alinkColor", static_cast<int>(HTMLDocument::AlinkColor), KJS::DontDelete, 0, nullptr }/* 4214326466 */ ,
   { "vlinkColor", static_cast<int>(HTMLDocument::VlinkColor), KJS::DontDelete, 0, nullptr }/* 51173710 */ ,
   { "height", static_cast<int>(HTMLDocument::Height), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 241578857 */ ,
   { "width", static_cast<int>(HTMLDocument::Width), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 365223811 */ ,
   { "dir", static_cast<int>(HTMLDocument::Dir), KJS::DontDelete, 0, nullptr }/* 4098763507 */ ,
   { "compatMode", static_cast<int>(HTMLDocument::CompatMode), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2788190937 */ ,
   { "designMode", static_cast<int>(HTMLDocument::DesignMode), KJS::DontDelete, 0, &HTMLDocumentTableEntries[41] }/* 102518552 */ ,
   { "layers", static_cast<int>(HTMLDocument::Layers), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3543075531 */ 
};

const struct KJS::HashTable HTMLDocumentTable = { 2, 42, HTMLDocumentTableEntries, 31 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLElementTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "document", static_cast<int>(KJS::HTMLElement::ElementDocument), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1372288083 */ ,
   { "innerText", static_cast<int>(KJS::HTMLElement::ElementInnerText), KJS::DontDelete, 0, &HTMLElementTableEntries[12] }/* 1535269100 */ ,
   { "dir", static_cast<int>(KJS::HTMLElement::ElementDir), KJS::DontDelete, 0, &HTMLElementTableEntries[14] }/* 4098763507 */ ,
   { "title", static_cast<int>(KJS::HTMLElement::ElementTitle), KJS::DontDelete, 0, nullptr }/* 3894651600 */ ,
   { "className", static_cast<int>(KJS::HTMLElement::ElementClassName), KJS::DontDelete, 0, nullptr }/* 2534234466 */ ,
   { "tabIndex", static_cast<int>(KJS::HTMLElement::ElementTabIndex), KJS::DontDelete, 0, nullptr }/* 2345934333 */ ,
   { "id", static_cast<int>(KJS::HTMLElement::ElementId), KJS::DontDelete, 0, nullptr }/* 3009267213 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "lang", static_cast<int>(KJS::HTMLElement::ElementLang), KJS::DontDelete, 0, &HTMLElementTableEntries[11] }/* 2755165841 */ ,
   { "innerHTML", static_cast<int>(KJS::HTMLElement::ElementInnerHTML), KJS::DontDelete, 0, nullptr }/* 3440833978 */ ,
   { "children", static_cast<int>(KJS::HTMLElement::ElementChildren), KJS::DontDelete|KJS::ReadOnly, 0, &HTMLElementTableEntries[13] }/* 4203930513 */ ,
   { "all", static_cast<int>(KJS::HTMLElement::ElementAll), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 765480498 */ ,
   { "contentEditable", static_cast<int>(KJS::HTMLElement::ElementContentEditable), KJS::DontDelete, 0, &HTMLElementTableEntries[15] }/* 3889290364 */ ,
   { "isContentEditable", static_cast<int>(KJS::HTMLElement::ElementIsContentEditable), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 479561789 */ 
};

const struct KJS::HashTable HTMLElementTable = { 2, 16, HTMLElementTableEntries, 11 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLElementProtoTableEntries[] = {
   { "scrollIntoView", static_cast<int>(KJS::HTMLElement::ElementScrollIntoView), KJS::DontDelete|KJS::Function, 0, nullptr }/* 3011657972 */ 
};

const struct KJS::HashTable HTMLElementProtoTable = { 2, 1, HTMLElementProtoTableEntries, 1 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLHtmlElementTableEntries[] = {
   { "version", static_cast<int>(KJS::HTMLElement::HtmlVersion), KJS::DontDelete, 0, nullptr }/* 1048315839 */ 
};

const struct KJS::HashTable HTMLHtmlElementTable = { 2, 1, HTMLHtmlElementTableEntries, 1 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLHeadElementTableEntries[] = {
   { "profile", static_cast<int>(KJS::HTMLElement::HeadProfile), KJS::DontDelete, 0, nullptr }/* 3802130349 */ 
};

const struct KJS::HashTable HTMLHeadElementTable = { 2, 1, HTMLHeadElementTableEntries, 1 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLLinkElementTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "charset", static_cast<int>(KJS::HTMLElement::LinkCharset), KJS::DontDelete, 0, nullptr }/* 484036018 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "disabled", static_cast<int>(KJS::HTMLElement::LinkDisabled), KJS::DontDelete, 0, &HTMLLinkElementTableEntries[11] }/* 3166354153 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "media", static_cast<int>(KJS::HTMLElement::LinkMedia), KJS::DontDelete, 0, &HTMLLinkElementTableEntries[12] }/* 4258541229 */ ,
   { "hreflang", static_cast<int>(KJS::HTMLElement::LinkHrefLang), KJS::DontDelete, 0, &HTMLLinkElementTableEntries[13] }/* 1556085914 */ ,
   { "rel", static_cast<int>(KJS::HTMLElement::LinkRel), KJS::DontDelete, 0, nullptr }/* 3381183574 */ ,
   { "href", static_cast<int>(KJS::HTMLElement::LinkHref), KJS::DontDelete, 0, &HTMLLinkElementTableEntries[14] }/* 3763893832 */ ,
   { "rev", static_cast<int>(KJS::HTMLElement::LinkRev), KJS::DontDelete, 0, nullptr }/* 733637341 */ ,
   { "target", static_cast<int>(KJS::HTMLElement::LinkTarget), KJS::DontDelete, 0, nullptr }/* 421183222 */ ,
   { "type", static_cast<int>(KJS::HTMLElement::LinkType), KJS::DontDelete, 0, &HTMLLinkElementTableEntries[15] }/* 924663163 */ ,
   { "sheet", static_cast<int>(KJS::HTMLElement::LinkSheet), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3633021695 */ 
};

const struct KJS::HashTable HTMLLinkElementTable = { 2, 16, HTMLLinkElementTableEntries, 11 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLTitleElementTableEntries[] = {
   { "text", static_cast<int>(KJS::HTMLElement::TitleText), KJS::DontDelete, 0, nullptr }/* 1026194830 */ 
};

const struct KJS::HashTable HTMLTitleElementTable = { 2, 1, HTMLTitleElementTableEntries, 1 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLMetaElementTableEntries[] = {
   { "httpEquiv", static_cast<int>(KJS::HTMLElement::MetaHttpEquiv), KJS::DontDelete, 0, nullptr }/* 381861456 */ ,
   { "content", static_cast<int>(KJS::HTMLElement::MetaContent), KJS::DontDelete, 0, &HTMLMetaElementTableEntries[4] }/* 3244897453 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "scheme", static_cast<int>(KJS::HTMLElement::MetaScheme), KJS::DontDelete, 0, nullptr }/* 4231810495 */ ,
   { "name", static_cast<int>(KJS::HTMLElement::MetaName), KJS::DontDelete, 0, nullptr }/* 4135969945 */ 
};

const struct KJS::HashTable HTMLMetaElementTable = { 2, 5, HTMLMetaElementTableEntries, 4 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLBaseElementTableEntries[] = {
   { "href", static_cast<int>(KJS::HTMLElement::BaseHref), KJS::DontDelete, 0, &HTMLBaseElementTableEntries[2] }/* 3763893832 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "target", static_cast<int>(KJS::HTMLElement::BaseTarget), KJS::DontDelete, 0, nullptr }/* 421183222 */ 
};

const struct KJS::HashTable HTMLBaseElementTable = { 2, 3, HTMLBaseElementTableEntries, 2 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLIsIndexElementTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "form", static_cast<int>(KJS::HTMLElement::IsIndexForm), KJS::DontDelete|KJS::ReadOnly, 0, &HTMLIsIndexElementTableEntries[2] }/* 2174321165 */ ,
   { "prompt", static_cast<int>(KJS::HTMLElement::IsIndexPrompt), KJS::DontDelete, 0, nullptr }/* 4113950555 */ 
};

const struct KJS::HashTable HTMLIsIndexElementTable = { 2, 3, HTMLIsIndexElementTableEntries, 2 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLStyleElementTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "disabled", static_cast<int>(KJS::HTMLElement::StyleDisabled), KJS::DontDelete, 0, &HTMLStyleElementTableEntries[4] }/* 3166354153 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "type", static_cast<int>(KJS::HTMLElement::StyleType), KJS::DontDelete, 0, &HTMLStyleElementTableEntries[5] }/* 924663163 */ ,
   { "media", static_cast<int>(KJS::HTMLElement::StyleMedia), KJS::DontDelete, 0, nullptr }/* 4258541229 */ ,
   { "sheet", static_cast<int>(KJS::HTMLElement::StyleSheet), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3633021695 */ 
};

const struct KJS::HashTable HTMLStyleElementTable = { 2, 6, HTMLStyleElementTableEntries, 4 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLBodyElementTableEntries[] = {
   { "bgColor", static_cast<int>(KJS::HTMLElement::BodyBgColor), KJS::DontDelete, 0, nullptr }/* 997909440 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "aLink", static_cast<int>(KJS::HTMLElement::BodyALink), KJS::DontDelete, 0, &HTMLBodyElementTableEntries[12] }/* 943779243 */ ,
   { "onload", static_cast<int>(KJS::HTMLElement::BodyOnLoad), KJS::DontDelete, 0, nullptr }/* 3960668140 */ ,
   { "vLink", static_cast<int>(KJS::HTMLElement::BodyVLink), KJS::DontDelete, 0, nullptr }/* 4289744501 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "onblur", static_cast<int>(KJS::HTMLElement::BodyOnBlur), KJS::DontDelete, 0, nullptr }/* 714907351 */ ,
   { "onmessage", static_cast<int>(KJS::HTMLElement::BodyOnMessage), KJS::DontDelete, 0, nullptr }/* 283946708 */ ,
   { "onfocus", static_cast<int>(KJS::HTMLElement::BodyOnFocus), KJS::DontDelete, 0, nullptr }/* 1118781009 */ ,
   { "background", static_cast<int>(KJS::HTMLElement::BodyBackground), KJS::DontDelete, 0, &HTMLBodyElementTableEntries[13] }/* 1467725398 */ ,
   { "onhashchange", static_cast<int>(KJS::HTMLElement::BodyOnHashChange), KJS::DontDelete, 0, nullptr }/* 2685251723 */ ,
   { "link", static_cast<int>(KJS::HTMLElement::BodyLink), KJS::DontDelete, 0, nullptr }/* 1298856123 */ ,
   { "text", static_cast<int>(KJS::HTMLElement::BodyText), KJS::DontDelete, 0, &HTMLBodyElementTableEntries[14] }/* 1026194830 */ ,
   { "onerror", static_cast<int>(KJS::HTMLElement::BodyOnError), KJS::DontDelete, 0, nullptr }/* 3777531886 */ 
};

const struct KJS::HashTable HTMLBodyElementTable = { 2, 15, HTMLBodyElementTableEntries, 12 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLBodyElementProtoTableEntries[] = {
   { "focus", static_cast<int>(KJS::HTMLElement::BodyFocus), KJS::DontDelete|KJS::Function, 0, nullptr }/* 3491510110 */ ,
   { nullptr, 0, 0, 0, nullptr }
};

const struct KJS::HashTable HTMLBodyElementProtoTable = { 2, 2, HTMLBodyElementProtoTableEntries, 2 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLFormElementTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "elements", static_cast<int>(KJS::HTMLElement::FormElements), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3786325159 */ ,
   { "length", static_cast<int>(KJS::HTMLElement::FormLength), KJS::DontDelete|KJS::ReadOnly, 0, &HTMLFormElementTableEntries[11] }/* 2484182065 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "encoding", static_cast<int>(KJS::HTMLElement::FormEncType), KJS::DontDelete, 0, &HTMLFormElementTableEntries[12] }/* 571067259 */ ,
   { "action", static_cast<int>(KJS::HTMLElement::FormAction), KJS::DontDelete, 0, nullptr }/* 1709376850 */ ,
   { "enctype", static_cast<int>(KJS::HTMLElement::FormEncType), KJS::DontDelete, 0, nullptr }/* 984466599 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "name", static_cast<int>(KJS::HTMLElement::FormName), KJS::DontDelete, 0, nullptr }/* 4135969945 */ ,
   { "target", static_cast<int>(KJS::HTMLElement::FormTarget), KJS::DontDelete, 0, nullptr }/* 421183222 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "acceptCharset", static_cast<int>(KJS::HTMLElement::FormAcceptCharset), KJS::DontDelete, 0, nullptr }/* 2836082735 */ ,
   { "method", static_cast<int>(KJS::HTMLElement::FormMethod), KJS::DontDelete, 0, nullptr }/* 31456484 */ 
};

const struct KJS::HashTable HTMLFormElementTable = { 2, 13, HTMLFormElementTableEntries, 11 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLFormElementProtoTableEntries[] = {
   { "submit", static_cast<int>(KJS::HTMLElement::FormSubmit), KJS::DontDelete|KJS::Function, 0, &HTMLFormElementProtoTableEntries[2] }/* 2109480646 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "reset", static_cast<int>(KJS::HTMLElement::FormReset), KJS::DontDelete|KJS::Function, 0, nullptr }/* 3704661724 */ 
};

const struct KJS::HashTable HTMLFormElementProtoTable = { 2, 3, HTMLFormElementProtoTableEntries, 2 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLSelectElementTableEntries[] = {
   { "size", static_cast<int>(KJS::HTMLElement::SelectSize), KJS::DontDelete, 0, nullptr }/* 667026448 */ ,
   { "value", static_cast<int>(KJS::HTMLElement::SelectValue), KJS::DontDelete, 0, &HTMLSelectElementTableEntries[12] }/* 2443567787 */ ,
   { "length", static_cast<int>(KJS::HTMLElement::SelectLength), KJS::DontDelete, 0, nullptr }/* 2484182065 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "form", static_cast<int>(KJS::HTMLElement::SelectForm), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2174321165 */ ,
   { "type", static_cast<int>(KJS::HTMLElement::SelectType), KJS::DontDelete|KJS::ReadOnly, 0, &HTMLSelectElementTableEntries[11] }/* 924663163 */ ,
   { "selectedIndex", static_cast<int>(KJS::HTMLElement::SelectSelectedIndex), KJS::DontDelete, 0, nullptr }/* 633197803 */ ,
   { "name", static_cast<int>(KJS::HTMLElement::SelectName), KJS::DontDelete, 0, nullptr }/* 4135969945 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "options", static_cast<int>(KJS::HTMLElement::SelectOptions), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1453360952 */ ,
   { "disabled", static_cast<int>(KJS::HTMLElement::SelectDisabled), KJS::DontDelete, 0, nullptr }/* 3166354153 */ ,
   { "multiple", static_cast<int>(KJS::HTMLElement::SelectMultiple), KJS::DontDelete, 0, nullptr }/* 3445514766 */ 
};

const struct KJS::HashTable HTMLSelectElementTable = { 2, 13, HTMLSelectElementTableEntries, 11 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLSelectElementProtoTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "remove", static_cast<int>(KJS::HTMLElement::SelectRemove), KJS::DontDelete|KJS::Function, 1, nullptr }/* 4093363626 */ ,
   { "add", static_cast<int>(KJS::HTMLElement::SelectAdd), KJS::DontDelete|KJS::Function, 2, &HTMLSelectElementProtoTableEntries[4] }/* 975278071 */ ,
   { "item", static_cast<int>(KJS::HTMLElement::SelectItem), KJS::DontDelete|KJS::Function, 1, nullptr }/* 1031584463 */ 
};

const struct KJS::HashTable HTMLSelectElementProtoTable = { 2, 5, HTMLSelectElementProtoTableEntries, 4 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLOptGroupElementTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "disabled", static_cast<int>(KJS::HTMLElement::OptGroupDisabled), KJS::DontDelete, 0, &HTMLOptGroupElementTableEntries[2] }/* 3166354153 */ ,
   { "label", static_cast<int>(KJS::HTMLElement::OptGroupLabel), KJS::DontDelete, 0, nullptr }/* 1592150777 */ 
};

const struct KJS::HashTable HTMLOptGroupElementTable = { 2, 3, HTMLOptGroupElementTableEntries, 2 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLOptionElementTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "disabled", static_cast<int>(KJS::HTMLElement::OptionDisabled), KJS::DontDelete, 0, &HTMLOptionElementTableEntries[9] }/* 3166354153 */ ,
   { "index", static_cast<int>(KJS::HTMLElement::OptionIndex), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2074202018 */ ,
   { "value", static_cast<int>(KJS::HTMLElement::OptionValue), KJS::DontDelete, 0, nullptr }/* 2443567787 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "form", static_cast<int>(KJS::HTMLElement::OptionForm), KJS::DontDelete|KJS::ReadOnly, 0, &HTMLOptionElementTableEntries[8] }/* 2174321165 */ ,
   { "text", static_cast<int>(KJS::HTMLElement::OptionText), KJS::DontDelete, 0, nullptr }/* 1026194830 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "defaultSelected", static_cast<int>(KJS::HTMLElement::OptionDefaultSelected), KJS::DontDelete, 0, nullptr }/* 1908016077 */ ,
   { "label", static_cast<int>(KJS::HTMLElement::OptionLabel), KJS::DontDelete, 0, &HTMLOptionElementTableEntries[10] }/* 1592150777 */ ,
   { "selected", static_cast<int>(KJS::HTMLElement::OptionSelected), KJS::DontDelete, 0, nullptr }/* 3404760241 */ 
};

const struct KJS::HashTable HTMLOptionElementTable = { 2, 11, HTMLOptionElementTableEntries, 8 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLInputElementTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "readOnly", static_cast<int>(KJS::HTMLElement::InputReadOnly), KJS::DontDelete, 0, &HTMLInputElementTableEntries[33] }/* 647516952 */ ,
   { "defaultChecked", static_cast<int>(KJS::HTMLElement::InputDefaultChecked), KJS::DontDelete, 0, &HTMLInputElementTableEntries[28] }/* 1982872203 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "defaultValue", static_cast<int>(KJS::HTMLElement::InputDefaultValue), KJS::DontDelete, 0, &HTMLInputElementTableEntries[25] }/* 116178905 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "accept", static_cast<int>(KJS::HTMLElement::InputAccept), KJS::DontDelete, 0, nullptr }/* 2051660209 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "value", static_cast<int>(KJS::HTMLElement::InputValue), KJS::DontDelete, 0, &HTMLInputElementTableEntries[32] }/* 2443567787 */ ,
   { "alt", static_cast<int>(KJS::HTMLElement::InputAlt), KJS::DontDelete, 0, &HTMLInputElementTableEntries[30] }/* 753533113 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "form", static_cast<int>(KJS::HTMLElement::InputForm), KJS::DontDelete|KJS::ReadOnly, 0, &HTMLInputElementTableEntries[26] }/* 2174321165 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "indeterminate", static_cast<int>(KJS::HTMLElement::InputIndeterminate), KJS::DontDelete, 0, nullptr }/* 2611438244 */ ,
   { "name", static_cast<int>(KJS::HTMLElement::InputName), KJS::DontDelete, 0, nullptr }/* 4135969945 */ ,
   { "maxLength", static_cast<int>(KJS::HTMLElement::InputMaxLength), KJS::DontDelete, 0, nullptr }/* 2289877671 */ ,
   { "status", static_cast<int>(KJS::HTMLElement::InputChecked), KJS::DontDelete, 0, nullptr }/* 704781072 */ ,
   { "size", static_cast<int>(KJS::HTMLElement::InputSize), KJS::DontDelete, 0, nullptr }/* 667026448 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "accessKey", static_cast<int>(KJS::HTMLElement::InputAccessKey), KJS::DontDelete, 0, &HTMLInputElementTableEntries[27] }/* 1552983230 */ ,
   { "align", static_cast<int>(KJS::HTMLElement::InputAlign), KJS::DontDelete, 0, &HTMLInputElementTableEntries[31] }/* 1654261565 */ ,
   { "checked", static_cast<int>(KJS::HTMLElement::InputChecked), KJS::DontDelete, 0, &HTMLInputElementTableEntries[29] }/* 882628755 */ ,
   { "disabled", static_cast<int>(KJS::HTMLElement::InputDisabled), KJS::DontDelete, 0, nullptr }/* 3166354153 */ ,
   { "src", static_cast<int>(KJS::HTMLElement::InputSrc), KJS::DontDelete, 0, nullptr }/* 1823457155 */ ,
   { "type", static_cast<int>(KJS::HTMLElement::InputType), KJS::DontDelete, 0, &HTMLInputElementTableEntries[34] }/* 924663163 */ ,
   { "useMap", static_cast<int>(KJS::HTMLElement::InputUseMap), KJS::DontDelete, 0, nullptr }/* 3578316365 */ ,
   { "selectionStart", static_cast<int>(KJS::HTMLElement::InputSelectionStart), KJS::DontDelete, 0, nullptr }/* 1536095437 */ ,
   { "selectionEnd", static_cast<int>(KJS::HTMLElement::InputSelectionEnd), KJS::DontDelete, 0, nullptr }/* 1540332652 */ ,
   { "placeholder", static_cast<int>(KJS::HTMLElement::InputPlaceholder), KJS::DontDelete, 0, nullptr }/* 3009254013 */ 
};

const struct KJS::HashTable HTMLInputElementTable = { 2, 35, HTMLInputElementTableEntries, 25 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLInputElementProtoTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "click", static_cast<int>(KJS::HTMLElement::InputClick), KJS::DontDelete|KJS::Function, 0, nullptr }/* 228229333 */ ,
   { "select", static_cast<int>(KJS::HTMLElement::InputSelect), KJS::DontDelete|KJS::Function, 0, &HTMLInputElementProtoTableEntries[5] }/* 2147694219 */ ,
   { "setSelectionRange", static_cast<int>(KJS::HTMLElement::InputSetSelectionRange), KJS::DontDelete|KJS::Function, 2, nullptr }/* 3823956179 */ 
};

const struct KJS::HashTable HTMLInputElementProtoTable = { 2, 6, HTMLInputElementProtoTableEntries, 5 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLTextAreaElementTableEntries[] = {
   { "rows", static_cast<int>(KJS::HTMLElement::TextAreaRows), KJS::DontDelete, 0, nullptr }/* 699636691 */ ,
   { "disabled", static_cast<int>(KJS::HTMLElement::TextAreaDisabled), KJS::DontDelete, 0, &HTMLTextAreaElementTableEntries[17] }/* 3166354153 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "form", static_cast<int>(KJS::HTMLElement::TextAreaForm), KJS::DontDelete|KJS::ReadOnly, 0, &HTMLTextAreaElementTableEntries[14] }/* 2174321165 */ ,
   { "readOnly", static_cast<int>(KJS::HTMLElement::TextAreaReadOnly), KJS::DontDelete, 0, nullptr }/* 647516952 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "accessKey", static_cast<int>(KJS::HTMLElement::TextAreaAccessKey), KJS::DontDelete, 0, &HTMLTextAreaElementTableEntries[16] }/* 1552983230 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "type", static_cast<int>(KJS::HTMLElement::TextAreaType), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 924663163 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "textLength", static_cast<int>(KJS::HTMLElement::TextAreaTextLength), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3869077638 */ ,
   { "defaultValue", static_cast<int>(KJS::HTMLElement::TextAreaDefaultValue), KJS::DontDelete, 0, &HTMLTextAreaElementTableEntries[13] }/* 116178905 */ ,
   { "placeholder", static_cast<int>(KJS::HTMLElement::TextAreaPlaceholder), KJS::DontDelete, 0, nullptr }/* 3009254013 */ ,
   { "cols", static_cast<int>(KJS::HTMLElement::TextAreaCols), KJS::DontDelete, 0, &HTMLTextAreaElementTableEntries[15] }/* 3360365175 */ ,
   { "name", static_cast<int>(KJS::HTMLElement::TextAreaName), KJS::DontDelete, 0, nullptr }/* 4135969945 */ ,
   { "value", static_cast<int>(KJS::HTMLElement::TextAreaValue), KJS::DontDelete, 0, nullptr }/* 2443567787 */ ,
   { "selectionStart", static_cast<int>(KJS::HTMLElement::TextAreaSelectionStart), KJS::DontDelete, 0, nullptr }/* 1536095437 */ ,
   { "selectionEnd", static_cast<int>(KJS::HTMLElement::TextAreaSelectionEnd), KJS::DontDelete, 0, nullptr }/* 1540332652 */ 
};

const struct KJS::HashTable HTMLTextAreaElementTable = { 2, 18, HTMLTextAreaElementTableEntries, 13 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLTextAreaElementProtoTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "select", static_cast<int>(KJS::HTMLElement::TextAreaSelect), KJS::DontDelete|KJS::Function, 0, &HTMLTextAreaElementProtoTableEntries[4] }/* 2147694219 */ ,
   { "setSelectionRange", static_cast<int>(KJS::HTMLElement::TextAreaSetSelectionRange), KJS::DontDelete|KJS::Function, 2, nullptr }/* 3823956179 */ 
};

const struct KJS::HashTable HTMLTextAreaElementProtoTable = { 2, 5, HTMLTextAreaElementProtoTableEntries, 4 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLButtonElementTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "disabled", static_cast<int>(KJS::HTMLElement::ButtonDisabled), KJS::DontDelete, 0, &HTMLButtonElementTableEntries[9] }/* 3166354153 */ ,
   { "accessKey", static_cast<int>(KJS::HTMLElement::ButtonAccessKey), KJS::DontDelete, 0, nullptr }/* 1552983230 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "type", static_cast<int>(KJS::HTMLElement::ButtonType), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 924663163 */ ,
   { "form", static_cast<int>(KJS::HTMLElement::ButtonForm), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2174321165 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "value", static_cast<int>(KJS::HTMLElement::ButtonValue), KJS::DontDelete, 0, nullptr }/* 2443567787 */ ,
   { "name", static_cast<int>(KJS::HTMLElement::ButtonName), KJS::DontDelete, 0, nullptr }/* 4135969945 */ 
};

const struct KJS::HashTable HTMLButtonElementTable = { 2, 10, HTMLButtonElementTableEntries, 9 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLButtonElementProtoTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "click", static_cast<int>(KJS::HTMLElement::ButtonClick), KJS::DontDelete|KJS::Function, 0, nullptr }/* 228229333 */ ,
   { nullptr, 0, 0, 0, nullptr }
};

const struct KJS::HashTable HTMLButtonElementProtoTable = { 2, 3, HTMLButtonElementProtoTableEntries, 3 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLLabelElementTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "htmlFor", static_cast<int>(KJS::HTMLElement::LabelHtmlFor), KJS::DontDelete, 0, nullptr }/* 2832653065 */ ,
   { "form", static_cast<int>(KJS::HTMLElement::LabelForm), KJS::DontDelete|KJS::ReadOnly, 0, &HTMLLabelElementTableEntries[3] }/* 2174321165 */ ,
   { "accessKey", static_cast<int>(KJS::HTMLElement::LabelAccessKey), KJS::DontDelete, 0, nullptr }/* 1552983230 */ 
};

const struct KJS::HashTable HTMLLabelElementTable = { 2, 4, HTMLLabelElementTableEntries, 3 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLFieldSetElementTableEntries[] = {
   { "form", static_cast<int>(KJS::HTMLElement::FieldSetForm), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2174321165 */ 
};

const struct KJS::HashTable HTMLFieldSetElementTable = { 2, 1, HTMLFieldSetElementTableEntries, 1 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLLegendElementTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "form", static_cast<int>(KJS::HTMLElement::LegendForm), KJS::DontDelete|KJS::ReadOnly, 0, &HTMLLegendElementTableEntries[3] }/* 2174321165 */ ,
   { "accessKey", static_cast<int>(KJS::HTMLElement::LegendAccessKey), KJS::DontDelete, 0, &HTMLLegendElementTableEntries[4] }/* 1552983230 */ ,
   { "align", static_cast<int>(KJS::HTMLElement::LegendAlign), KJS::DontDelete, 0, nullptr }/* 1654261565 */ 
};

const struct KJS::HashTable HTMLLegendElementTable = { 2, 5, HTMLLegendElementTableEntries, 3 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLUListElementTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "compact", static_cast<int>(KJS::HTMLElement::UListCompact), KJS::DontDelete, 0, &HTMLUListElementTableEntries[2] }/* 1342546647 */ ,
   { "type", static_cast<int>(KJS::HTMLElement::UListType), KJS::DontDelete, 0, nullptr }/* 924663163 */ 
};

const struct KJS::HashTable HTMLUListElementTable = { 2, 3, HTMLUListElementTableEntries, 2 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLOListElementTableEntries[] = {
   { "compact", static_cast<int>(KJS::HTMLElement::OListCompact), KJS::DontDelete, 0, &HTMLOListElementTableEntries[3] }/* 1342546647 */ ,
   { "type", static_cast<int>(KJS::HTMLElement::OListType), KJS::DontDelete, 0, nullptr }/* 924663163 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "start", static_cast<int>(KJS::HTMLElement::OListStart), KJS::DontDelete, 0, nullptr }/* 3020920170 */ 
};

const struct KJS::HashTable HTMLOListElementTable = { 2, 4, HTMLOListElementTableEntries, 3 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLDListElementTableEntries[] = {
   { "compact", static_cast<int>(KJS::HTMLElement::DListCompact), KJS::DontDelete, 0, nullptr }/* 1342546647 */ 
};

const struct KJS::HashTable HTMLDListElementTable = { 2, 1, HTMLDListElementTableEntries, 1 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLDirectoryElementTableEntries[] = {
   { "compact", static_cast<int>(KJS::HTMLElement::DirectoryCompact), KJS::DontDelete, 0, nullptr }/* 1342546647 */ 
};

const struct KJS::HashTable HTMLDirectoryElementTable = { 2, 1, HTMLDirectoryElementTableEntries, 1 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLMenuElementTableEntries[] = {
   { "compact", static_cast<int>(KJS::HTMLElement::MenuCompact), KJS::DontDelete, 0, nullptr }/* 1342546647 */ 
};

const struct KJS::HashTable HTMLMenuElementTable = { 2, 1, HTMLMenuElementTableEntries, 1 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLLIElementTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "type", static_cast<int>(KJS::HTMLElement::LIType), KJS::DontDelete, 0, &HTMLLIElementTableEntries[2] }/* 924663163 */ ,
   { "value", static_cast<int>(KJS::HTMLElement::LIValue), KJS::DontDelete, 0, nullptr }/* 2443567787 */ 
};

const struct KJS::HashTable HTMLLIElementTable = { 2, 3, HTMLLIElementTableEntries, 2 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLDivElementTableEntries[] = {
   { "align", static_cast<int>(KJS::HTMLElement::DivAlign), KJS::DontDelete, 0, nullptr }/* 1654261565 */ 
};

const struct KJS::HashTable HTMLDivElementTable = { 2, 1, HTMLDivElementTableEntries, 1 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLParagraphElementTableEntries[] = {
   { "align", static_cast<int>(KJS::HTMLElement::ParagraphAlign), KJS::DontDelete, 0, nullptr }/* 1654261565 */ 
};

const struct KJS::HashTable HTMLParagraphElementTable = { 2, 1, HTMLParagraphElementTableEntries, 1 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLHeadingElementTableEntries[] = {
   { "align", static_cast<int>(KJS::HTMLElement::HeadingAlign), KJS::DontDelete, 0, nullptr }/* 1654261565 */ 
};

const struct KJS::HashTable HTMLHeadingElementTable = { 2, 1, HTMLHeadingElementTableEntries, 1 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLBlockQuoteElementTableEntries[] = {
   { "cite", static_cast<int>(KJS::HTMLElement::BlockQuoteCite), KJS::DontDelete, 0, nullptr }/* 1798866241 */ 
};

const struct KJS::HashTable HTMLBlockQuoteElementTable = { 2, 1, HTMLBlockQuoteElementTableEntries, 1 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLQuoteElementTableEntries[] = {
   { "cite", static_cast<int>(KJS::HTMLElement::QuoteCite), KJS::DontDelete, 0, nullptr }/* 1798866241 */ 
};

const struct KJS::HashTable HTMLQuoteElementTable = { 2, 1, HTMLQuoteElementTableEntries, 1 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLPreElementTableEntries[] = {
   { "width", static_cast<int>(KJS::HTMLElement::PreWidth), KJS::DontDelete, 0, nullptr }/* 365223811 */ 
};

const struct KJS::HashTable HTMLPreElementTable = { 2, 1, HTMLPreElementTableEntries, 1 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLBRElementTableEntries[] = {
   { "clear", static_cast<int>(KJS::HTMLElement::BRClear), KJS::DontDelete, 0, nullptr }/* 3385053211 */ 
};

const struct KJS::HashTable HTMLBRElementTable = { 2, 1, HTMLBRElementTableEntries, 1 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLBaseFontElementTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "size", static_cast<int>(KJS::HTMLElement::BaseFontSize), KJS::DontDelete, 0, nullptr }/* 667026448 */ ,
   { "color", static_cast<int>(KJS::HTMLElement::BaseFontColor), KJS::DontDelete, 0, &HTMLBaseFontElementTableEntries[3] }/* 3307846481 */ ,
   { "face", static_cast<int>(KJS::HTMLElement::BaseFontFace), KJS::DontDelete, 0, nullptr }/* 4173177179 */ 
};

const struct KJS::HashTable HTMLBaseFontElementTable = { 2, 4, HTMLBaseFontElementTableEntries, 3 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLFontElementTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "size", static_cast<int>(KJS::HTMLElement::FontSize), KJS::DontDelete, 0, nullptr }/* 667026448 */ ,
   { "color", static_cast<int>(KJS::HTMLElement::FontColor), KJS::DontDelete, 0, &HTMLFontElementTableEntries[3] }/* 3307846481 */ ,
   { "face", static_cast<int>(KJS::HTMLElement::FontFace), KJS::DontDelete, 0, nullptr }/* 4173177179 */ 
};

const struct KJS::HashTable HTMLFontElementTable = { 2, 4, HTMLFontElementTableEntries, 3 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLHRElementTableEntries[] = {
   { "size", static_cast<int>(KJS::HTMLElement::HRSize), KJS::DontDelete, 0, nullptr }/* 667026448 */ ,
   { "align", static_cast<int>(KJS::HTMLElement::HRAlign), KJS::DontDelete, 0, &HTMLHRElementTableEntries[4] }/* 1654261565 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "width", static_cast<int>(KJS::HTMLElement::HRWidth), KJS::DontDelete, 0, nullptr }/* 365223811 */ ,
   { "noShade", static_cast<int>(KJS::HTMLElement::HRNoShade), KJS::DontDelete, 0, nullptr }/* 2038815049 */ 
};

const struct KJS::HashTable HTMLHRElementTable = { 2, 5, HTMLHRElementTableEntries, 4 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLModElementTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "cite", static_cast<int>(KJS::HTMLElement::ModCite), KJS::DontDelete, 0, &HTMLModElementTableEntries[2] }/* 1798866241 */ ,
   { "dateTime", static_cast<int>(KJS::HTMLElement::ModDateTime), KJS::DontDelete, 0, nullptr }/* 4126553249 */ 
};

const struct KJS::HashTable HTMLModElementTable = { 2, 3, HTMLModElementTableEntries, 2 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLAnchorElementTableEntries[] = {
   { "accessKey", static_cast<int>(KJS::HTMLElement::AnchorAccessKey), KJS::DontDelete, 0, &HTMLAnchorElementTableEntries[23] }/* 1552983230 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "name", static_cast<int>(KJS::HTMLElement::AnchorName), KJS::DontDelete, 0, &HTMLAnchorElementTableEntries[26] }/* 4135969945 */ ,
   { "charset", static_cast<int>(KJS::HTMLElement::AnchorCharset), KJS::DontDelete, 0, nullptr }/* 484036018 */ ,
   { "hreflang", static_cast<int>(KJS::HTMLElement::AnchorHrefLang), KJS::DontDelete, 0, &HTMLAnchorElementTableEntries[25] }/* 1556085914 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "host", static_cast<int>(KJS::HTMLElement::AnchorHost), KJS::DontDelete|KJS::ReadOnly, 0, &HTMLAnchorElementTableEntries[27] }/* 563166120 */ ,
   { "text", static_cast<int>(KJS::HTMLElement::AnchorText), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1026194830 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "port", static_cast<int>(KJS::HTMLElement::AnchorPort), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 559559355 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "rev", static_cast<int>(KJS::HTMLElement::AnchorRev), KJS::DontDelete, 0, nullptr }/* 733637341 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "search", static_cast<int>(KJS::HTMLElement::AnchorSearch), KJS::DontDelete, 0, nullptr }/* 2758369481 */ ,
   { "href", static_cast<int>(KJS::HTMLElement::AnchorHref), KJS::DontDelete, 0, nullptr }/* 3763893832 */ ,
   { "hash", static_cast<int>(KJS::HTMLElement::AnchorHash), KJS::DontDelete|KJS::ReadOnly, 0, &HTMLAnchorElementTableEntries[28] }/* 3430241159 */ ,
   { "coords", static_cast<int>(KJS::HTMLElement::AnchorCoords), KJS::DontDelete, 0, &HTMLAnchorElementTableEntries[24] }/* 2866415549 */ ,
   { "hostname", static_cast<int>(KJS::HTMLElement::AnchorHostname), KJS::DontDelete|KJS::ReadOnly, 0, &HTMLAnchorElementTableEntries[29] }/* 1516393680 */ ,
   { "pathname", static_cast<int>(KJS::HTMLElement::AnchorPathName), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2188260073 */ ,
   { "protocol", static_cast<int>(KJS::HTMLElement::AnchorProtocol), KJS::DontDelete|KJS::ReadOnly, 0, &HTMLAnchorElementTableEntries[30] }/* 481372249 */ ,
   { "rel", static_cast<int>(KJS::HTMLElement::AnchorRel), KJS::DontDelete, 0, nullptr }/* 3381183574 */ ,
   { "shape", static_cast<int>(KJS::HTMLElement::AnchorShape), KJS::DontDelete, 0, nullptr }/* 1223169692 */ ,
   { "target", static_cast<int>(KJS::HTMLElement::AnchorTarget), KJS::DontDelete, 0, nullptr }/* 421183222 */ ,
   { "type", static_cast<int>(KJS::HTMLElement::AnchorType), KJS::DontDelete, 0, nullptr }/* 924663163 */ 
};

const struct KJS::HashTable HTMLAnchorElementTable = { 2, 31, HTMLAnchorElementTableEntries, 23 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLAnchorElementProtoTableEntries[] = {
   { "toString", static_cast<int>(KJS::HTMLElement::AnchorToString), KJS::DontDelete|KJS::Function, 0, nullptr }/* 150235932 */ ,
   { "click", static_cast<int>(KJS::HTMLElement::AnchorClick), KJS::DontDelete|KJS::Function, 0, nullptr }/* 228229333 */ ,
   { nullptr, 0, 0, 0, nullptr }
};

const struct KJS::HashTable HTMLAnchorElementProtoTable = { 2, 3, HTMLAnchorElementProtoTableEntries, 3 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLImageElementTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "width", static_cast<int>(KJS::HTMLElement::ImageWidth), KJS::DontDelete, 0, &HTMLImageElementTableEntries[19] }/* 365223811 */ ,
   { "height", static_cast<int>(KJS::HTMLElement::ImageHeight), KJS::DontDelete, 0, nullptr }/* 241578857 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "align", static_cast<int>(KJS::HTMLElement::ImageAlign), KJS::DontDelete, 0, &HTMLImageElementTableEntries[16] }/* 1654261565 */ ,
   { "complete", static_cast<int>(KJS::HTMLElement::ImageComplete), KJS::DontDelete|KJS::ReadOnly, 0, &HTMLImageElementTableEntries[15] }/* 727500051 */ ,
   { "border", static_cast<int>(KJS::HTMLElement::ImageBorder), KJS::DontDelete, 0, nullptr }/* 3292724152 */ ,
   { "x", static_cast<int>(KJS::HTMLElement::ImageX), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2615952593 */ ,
   { "isMap", static_cast<int>(KJS::HTMLElement::ImageIsMap), KJS::DontDelete, 0, nullptr }/* 1574120604 */ ,
   { "name", static_cast<int>(KJS::HTMLElement::ImageName), KJS::DontDelete, 0, nullptr }/* 4135969945 */ ,
   { "longDesc", static_cast<int>(KJS::HTMLElement::ImageLongDesc), KJS::DontDelete, 0, nullptr }/* 3898121501 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "alt", static_cast<int>(KJS::HTMLElement::ImageAlt), KJS::DontDelete, 0, &HTMLImageElementTableEntries[18] }/* 753533113 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "hspace", static_cast<int>(KJS::HTMLElement::ImageHspace), KJS::DontDelete, 0, nullptr }/* 4030714056 */ ,
   { "src", static_cast<int>(KJS::HTMLElement::ImageSrc), KJS::DontDelete, 0, &HTMLImageElementTableEntries[17] }/* 1823457155 */ ,
   { "useMap", static_cast<int>(KJS::HTMLElement::ImageUseMap), KJS::DontDelete, 0, nullptr }/* 3578316365 */ ,
   { "vspace", static_cast<int>(KJS::HTMLElement::ImageVspace), KJS::DontDelete, 0, nullptr }/* 3231087748 */ ,
   { "y", static_cast<int>(KJS::HTMLElement::ImageY), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3477867916 */ 
};

const struct KJS::HashTable HTMLImageElementTable = { 2, 20, HTMLImageElementTableEntries, 15 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLObjectElementTableEntries[] = {
   { "vspace", static_cast<int>(KJS::HTMLElement::ObjectVspace), KJS::DontDelete, 0, nullptr }/* 3231087748 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "width", static_cast<int>(KJS::HTMLElement::ObjectWidth), KJS::DontDelete, 0, nullptr }/* 365223811 */ ,
   { "code", static_cast<int>(KJS::HTMLElement::ObjectCode), KJS::DontDelete, 0, nullptr }/* 498127265 */ ,
   { "hspace", static_cast<int>(KJS::HTMLElement::ObjectHspace), KJS::DontDelete, 0, &HTMLObjectElementTableEntries[27] }/* 4030714056 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "codeBase", static_cast<int>(KJS::HTMLElement::ObjectCodeBase), KJS::DontDelete, 0, nullptr }/* 3681549978 */ ,
   { "contentDocument", static_cast<int>(KJS::HTMLElement::ObjectContentDocument), KJS::DontDelete|KJS::ReadOnly, 0, &HTMLObjectElementTableEntries[29] }/* 1887823840 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "archive", static_cast<int>(KJS::HTMLElement::ObjectArchive), KJS::DontDelete, 0, &HTMLObjectElementTableEntries[26] }/* 3335727779 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "border", static_cast<int>(KJS::HTMLElement::ObjectBorder), KJS::DontDelete, 0, &HTMLObjectElementTableEntries[24] }/* 3292724152 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "form", static_cast<int>(KJS::HTMLElement::ObjectForm), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2174321165 */ ,
   { "align", static_cast<int>(KJS::HTMLElement::ObjectAlign), KJS::DontDelete, 0, &HTMLObjectElementTableEntries[23] }/* 1654261565 */ ,
   { "standby", static_cast<int>(KJS::HTMLElement::ObjectStandby), KJS::DontDelete, 0, nullptr }/* 1585452535 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "codeType", static_cast<int>(KJS::HTMLElement::ObjectCodeType), KJS::DontDelete, 0, &HTMLObjectElementTableEntries[25] }/* 943626287 */ ,
   { "data", static_cast<int>(KJS::HTMLElement::ObjectData), KJS::DontDelete, 0, nullptr }/* 3260053779 */ ,
   { "declare", static_cast<int>(KJS::HTMLElement::ObjectDeclare), KJS::DontDelete, 0, nullptr }/* 986518642 */ ,
   { "height", static_cast<int>(KJS::HTMLElement::ObjectHeight), KJS::DontDelete, 0, nullptr }/* 241578857 */ ,
   { "name", static_cast<int>(KJS::HTMLElement::ObjectName), KJS::DontDelete, 0, &HTMLObjectElementTableEntries[28] }/* 4135969945 */ ,
   { "type", static_cast<int>(KJS::HTMLElement::ObjectType), KJS::DontDelete, 0, nullptr }/* 924663163 */ ,
   { "useMap", static_cast<int>(KJS::HTMLElement::ObjectUseMap), KJS::DontDelete, 0, nullptr }/* 3578316365 */ 
};

const struct KJS::HashTable HTMLObjectElementTable = { 2, 30, HTMLObjectElementTableEntries, 23 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLObjectElementProtoTableEntries[] = {
   { "getSVGDocument", static_cast<int>(KJS::HTMLElement::ObjectGetSVGDocument), KJS::DontDelete|KJS::Function, 0, nullptr }/* 3185178526 */ 
};

const struct KJS::HashTable HTMLObjectElementProtoTable = { 2, 1, HTMLObjectElementProtoTableEntries, 1 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLParamElementTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "name", static_cast<int>(KJS::HTMLElement::ParamName), KJS::DontDelete, 0, nullptr }/* 4135969945 */ ,
   { "valueType", static_cast<int>(KJS::HTMLElement::ParamValueType), KJS::DontDelete, 0, nullptr }/* 1552620886 */ ,
   { "type", static_cast<int>(KJS::HTMLElement::ParamType), KJS::DontDelete, 0, &HTMLParamElementTableEntries[4] }/* 924663163 */ ,
   { "value", static_cast<int>(KJS::HTMLElement::ParamValue), KJS::DontDelete, 0, nullptr }/* 2443567787 */ 
};

const struct KJS::HashTable HTMLParamElementTable = { 2, 5, HTMLParamElementTableEntries, 4 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLAppletElementTableEntries[] = {
   { "align", static_cast<int>(KJS::HTMLElement::AppletAlign), KJS::DontDelete, 0, nullptr }/* 1654261565 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "alt", static_cast<int>(KJS::HTMLElement::AppletAlt), KJS::DontDelete, 0, &HTMLAppletElementTableEntries[11] }/* 753533113 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "hspace", static_cast<int>(KJS::HTMLElement::AppletHspace), KJS::DontDelete, 0, nullptr }/* 4030714056 */ ,
   { "codeBase", static_cast<int>(KJS::HTMLElement::AppletCodeBase), KJS::DontDelete, 0, &HTMLAppletElementTableEntries[14] }/* 3681549978 */ ,
   { "name", static_cast<int>(KJS::HTMLElement::AppletName), KJS::DontDelete, 0, nullptr }/* 4135969945 */ ,
   { "code", static_cast<int>(KJS::HTMLElement::AppletCode), KJS::DontDelete, 0, &HTMLAppletElementTableEntries[12] }/* 498127265 */ ,
   { "archive", static_cast<int>(KJS::HTMLElement::AppletArchive), KJS::DontDelete, 0, nullptr }/* 3335727779 */ ,
   { "height", static_cast<int>(KJS::HTMLElement::AppletHeight), KJS::DontDelete, 0, nullptr }/* 241578857 */ ,
   { "object", static_cast<int>(KJS::HTMLElement::AppletObject), KJS::DontDelete, 0, &HTMLAppletElementTableEntries[13] }/* 1147757774 */ ,
   { "vspace", static_cast<int>(KJS::HTMLElement::AppletVspace), KJS::DontDelete, 0, nullptr }/* 3231087748 */ ,
   { "width", static_cast<int>(KJS::HTMLElement::AppletWidth), KJS::DontDelete, 0, nullptr }/* 365223811 */ 
};

const struct KJS::HashTable HTMLAppletElementTable = { 2, 15, HTMLAppletElementTableEntries, 11 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLMapElementTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "areas", static_cast<int>(KJS::HTMLElement::MapAreas), KJS::DontDelete|KJS::ReadOnly, 0, &HTMLMapElementTableEntries[2] }/* 3432044703 */ ,
   { "name", static_cast<int>(KJS::HTMLElement::MapName), KJS::DontDelete, 0, nullptr }/* 4135969945 */ 
};

const struct KJS::HashTable HTMLMapElementTable = { 2, 3, HTMLMapElementTableEntries, 2 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLAreaElementTableEntries[] = {
   { "host", static_cast<int>(KJS::HTMLElement::AreaHost), KJS::DontDelete|KJS::ReadOnly, 0, &HTMLAreaElementTableEntries[16] }/* 563166120 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "shape", static_cast<int>(KJS::HTMLElement::AreaShape), KJS::DontDelete, 0, nullptr }/* 1223169692 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "protocol", static_cast<int>(KJS::HTMLElement::AreaProtocol), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 481372249 */ ,
   { "accessKey", static_cast<int>(KJS::HTMLElement::AreaAccessKey), KJS::DontDelete, 0, nullptr }/* 1552983230 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "href", static_cast<int>(KJS::HTMLElement::AreaHref), KJS::DontDelete, 0, &HTMLAreaElementTableEntries[19] }/* 3763893832 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "search", static_cast<int>(KJS::HTMLElement::AreaSearch), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2758369481 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "alt", static_cast<int>(KJS::HTMLElement::AreaAlt), KJS::DontDelete, 0, &HTMLAreaElementTableEntries[17] }/* 753533113 */ ,
   { "coords", static_cast<int>(KJS::HTMLElement::AreaCoords), KJS::DontDelete, 0, &HTMLAreaElementTableEntries[15] }/* 2866415549 */ ,
   { "hash", static_cast<int>(KJS::HTMLElement::AreaHash), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3430241159 */ ,
   { "hostname", static_cast<int>(KJS::HTMLElement::AreaHostName), KJS::DontDelete|KJS::ReadOnly, 0, &HTMLAreaElementTableEntries[18] }/* 1516393680 */ ,
   { "pathname", static_cast<int>(KJS::HTMLElement::AreaPathName), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2188260073 */ ,
   { "port", static_cast<int>(KJS::HTMLElement::AreaPort), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 559559355 */ ,
   { "noHref", static_cast<int>(KJS::HTMLElement::AreaNoHref), KJS::DontDelete, 0, &HTMLAreaElementTableEntries[20] }/* 525524527 */ ,
   { "target", static_cast<int>(KJS::HTMLElement::AreaTarget), KJS::DontDelete, 0, nullptr }/* 421183222 */ 
};

const struct KJS::HashTable HTMLAreaElementTable = { 2, 21, HTMLAreaElementTableEntries, 15 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLScriptElementTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "defer", static_cast<int>(KJS::HTMLElement::ScriptDefer), KJS::DontDelete, 0, nullptr }/* 2127761420 */ ,
   { "src", static_cast<int>(KJS::HTMLElement::ScriptSrc), KJS::DontDelete, 0, nullptr }/* 1823457155 */ ,
   { "text", static_cast<int>(KJS::HTMLElement::ScriptText), KJS::DontDelete, 0, nullptr }/* 1026194830 */ ,
   { "htmlFor", static_cast<int>(KJS::HTMLElement::ScriptHtmlFor), KJS::DontDelete, 0, &HTMLScriptElementTableEntries[7] }/* 2832653065 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "event", static_cast<int>(KJS::HTMLElement::ScriptEvent), KJS::DontDelete, 0, &HTMLScriptElementTableEntries[8] }/* 2755668584 */ ,
   { "charset", static_cast<int>(KJS::HTMLElement::ScriptCharset), KJS::DontDelete, 0, &HTMLScriptElementTableEntries[9] }/* 484036018 */ ,
   { "type", static_cast<int>(KJS::HTMLElement::ScriptType), KJS::DontDelete, 0, nullptr }/* 924663163 */ 
};

const struct KJS::HashTable HTMLScriptElementTable = { 2, 10, HTMLScriptElementTableEntries, 7 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLTableElementTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "width", static_cast<int>(KJS::HTMLElement::TableWidth), KJS::DontDelete, 0, nullptr }/* 365223811 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "cellSpacing", static_cast<int>(KJS::HTMLElement::TableCellSpacing), KJS::DontDelete, 0, nullptr }/* 3393768964 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "frame", static_cast<int>(KJS::HTMLElement::TableFrame), KJS::DontDelete, 0, nullptr }/* 3476292115 */ ,
   { "caption", static_cast<int>(KJS::HTMLElement::TableCaption), KJS::DontDelete, 0, nullptr }/* 1613050386 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "rows", static_cast<int>(KJS::HTMLElement::TableRows), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 699636691 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "border", static_cast<int>(KJS::HTMLElement::TableBorder), KJS::DontDelete, 0, nullptr }/* 3292724152 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "tFoot", static_cast<int>(KJS::HTMLElement::TableTFoot), KJS::DontDelete, 0, &HTMLTableElementTableEntries[24] }/* 814324516 */ ,
   { "rules", static_cast<int>(KJS::HTMLElement::TableRules), KJS::DontDelete, 0, nullptr }/* 1032014549 */ ,
   { "tHead", static_cast<int>(KJS::HTMLElement::TableTHead), KJS::DontDelete, 0, &HTMLTableElementTableEntries[23] }/* 2468374463 */ ,
   { "align", static_cast<int>(KJS::HTMLElement::TableAlign), KJS::DontDelete, 0, &HTMLTableElementTableEntries[25] }/* 1654261565 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "bgColor", static_cast<int>(KJS::HTMLElement::TableBgColor), KJS::DontDelete, 0, nullptr }/* 997909440 */ ,
   { "tBodies", static_cast<int>(KJS::HTMLElement::TableTBodies), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1548810382 */ ,
   { "cellPadding", static_cast<int>(KJS::HTMLElement::TableCellPadding), KJS::DontDelete, 0, nullptr }/* 3837294004 */ ,
   { "summary", static_cast<int>(KJS::HTMLElement::TableSummary), KJS::DontDelete, 0, nullptr }/* 3138487652 */ 
};

const struct KJS::HashTable HTMLTableElementTable = { 2, 26, HTMLTableElementTableEntries, 23 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLTableElementProtoTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "deleteTFoot", static_cast<int>(KJS::HTMLElement::TableDeleteTFoot), KJS::DontDelete|KJS::Function, 0, nullptr }/* 807671993 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "createTHead", static_cast<int>(KJS::HTMLElement::TableCreateTHead), KJS::DontDelete|KJS::Function, 0, &HTMLTableElementProtoTableEntries[8] }/* 2004942171 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "createCaption", static_cast<int>(KJS::HTMLElement::TableCreateCaption), KJS::DontDelete|KJS::Function, 0, &HTMLTableElementProtoTableEntries[9] }/* 2755134622 */ ,
   { "createTFoot", static_cast<int>(KJS::HTMLElement::TableCreateTFoot), KJS::DontDelete|KJS::Function, 0, nullptr }/* 1047519815 */ ,
   { "deleteTHead", static_cast<int>(KJS::HTMLElement::TableDeleteTHead), KJS::DontDelete|KJS::Function, 0, &HTMLTableElementProtoTableEntries[10] }/* 3825422771 */ ,
   { "deleteCaption", static_cast<int>(KJS::HTMLElement::TableDeleteCaption), KJS::DontDelete|KJS::Function, 0, nullptr }/* 3942732766 */ ,
   { "insertRow", static_cast<int>(KJS::HTMLElement::TableInsertRow), KJS::DontDelete|KJS::Function, 1, &HTMLTableElementProtoTableEntries[11] }/* 409323971 */ ,
   { "deleteRow", static_cast<int>(KJS::HTMLElement::TableDeleteRow), KJS::DontDelete|KJS::Function, 1, nullptr }/* 2660886139 */ 
};

const struct KJS::HashTable HTMLTableElementProtoTable = { 2, 12, HTMLTableElementProtoTableEntries, 8 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLTableCaptionElementTableEntries[] = {
   { "align", static_cast<int>(KJS::HTMLElement::TableCaptionAlign), KJS::DontDelete, 0, nullptr }/* 1654261565 */ 
};

const struct KJS::HashTable HTMLTableCaptionElementTable = { 2, 1, HTMLTableCaptionElementTableEntries, 1 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLTableColElementTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "width", static_cast<int>(KJS::HTMLElement::TableColWidth), KJS::DontDelete, 0, nullptr }/* 365223811 */ ,
   { "chOff", static_cast<int>(KJS::HTMLElement::TableColChOff), KJS::DontDelete, 0, &HTMLTableColElementTableEntries[7] }/* 2770722684 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "ch", static_cast<int>(KJS::HTMLElement::TableColCh), KJS::DontDelete, 0, nullptr }/* 3808073574 */ ,
   { "align", static_cast<int>(KJS::HTMLElement::TableColAlign), KJS::DontDelete, 0, &HTMLTableColElementTableEntries[8] }/* 1654261565 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "span", static_cast<int>(KJS::HTMLElement::TableColSpan), KJS::DontDelete, 0, nullptr }/* 1688890492 */ ,
   { "vAlign", static_cast<int>(KJS::HTMLElement::TableColVAlign), KJS::DontDelete, 0, nullptr }/* 1126953434 */ 
};

const struct KJS::HashTable HTMLTableColElementTable = { 2, 9, HTMLTableColElementTableEntries, 7 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLTableSectionElementTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "chOff", static_cast<int>(KJS::HTMLElement::TableSectionChOff), KJS::DontDelete, 0, nullptr }/* 2770722684 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "ch", static_cast<int>(KJS::HTMLElement::TableSectionCh), KJS::DontDelete, 0, nullptr }/* 3808073574 */ ,
   { "align", static_cast<int>(KJS::HTMLElement::TableSectionAlign), KJS::DontDelete, 0, &HTMLTableSectionElementTableEntries[7] }/* 1654261565 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "vAlign", static_cast<int>(KJS::HTMLElement::TableSectionVAlign), KJS::DontDelete, 0, &HTMLTableSectionElementTableEntries[8] }/* 1126953434 */ ,
   { "rows", static_cast<int>(KJS::HTMLElement::TableSectionRows), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 699636691 */ 
};

const struct KJS::HashTable HTMLTableSectionElementTable = { 2, 9, HTMLTableSectionElementTableEntries, 7 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLTableSectionElementProtoTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "insertRow", static_cast<int>(KJS::HTMLElement::TableSectionInsertRow), KJS::DontDelete|KJS::Function, 1, &HTMLTableSectionElementProtoTableEntries[2] }/* 409323971 */ ,
   { "deleteRow", static_cast<int>(KJS::HTMLElement::TableSectionDeleteRow), KJS::DontDelete|KJS::Function, 1, nullptr }/* 2660886139 */ 
};

const struct KJS::HashTable HTMLTableSectionElementProtoTable = { 2, 3, HTMLTableSectionElementProtoTableEntries, 2 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLTableRowElementTableEntries[] = {
   { "sectionRowIndex", static_cast<int>(KJS::HTMLElement::TableRowSectionRowIndex), KJS::DontDelete|KJS::ReadOnly, 0, &HTMLTableRowElementTableEntries[11] }/* 2521454364 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "vAlign", static_cast<int>(KJS::HTMLElement::TableRowVAlign), KJS::DontDelete, 0, nullptr }/* 1126953434 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "chOff", static_cast<int>(KJS::HTMLElement::TableRowChOff), KJS::DontDelete, 0, nullptr }/* 2770722684 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "cells", static_cast<int>(KJS::HTMLElement::TableRowCells), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1263226575 */ ,
   { "rowIndex", static_cast<int>(KJS::HTMLElement::TableRowRowIndex), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1286658666 */ ,
   { "ch", static_cast<int>(KJS::HTMLElement::TableRowCh), KJS::DontDelete, 0, nullptr }/* 3808073574 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "align", static_cast<int>(KJS::HTMLElement::TableRowAlign), KJS::DontDelete, 0, &HTMLTableRowElementTableEntries[12] }/* 1654261565 */ ,
   { "bgColor", static_cast<int>(KJS::HTMLElement::TableRowBgColor), KJS::DontDelete, 0, nullptr }/* 997909440 */ 
};

const struct KJS::HashTable HTMLTableRowElementTable = { 2, 13, HTMLTableRowElementTableEntries, 11 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLTableRowElementProtoTableEntries[] = {
   { "insertCell", static_cast<int>(KJS::HTMLElement::TableRowInsertCell), KJS::DontDelete|KJS::Function, 1, nullptr }/* 2713670716 */ ,
   { "deleteCell", static_cast<int>(KJS::HTMLElement::TableRowDeleteCell), KJS::DontDelete|KJS::Function, 1, nullptr }/* 1064764633 */ 
};

const struct KJS::HashTable HTMLTableRowElementProtoTable = { 2, 2, HTMLTableRowElementProtoTableEntries, 2 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLTableCellElementTableEntries[] = {
   { "bgColor", static_cast<int>(KJS::HTMLElement::TableCellBgColor), KJS::DontDelete, 0, &HTMLTableCellElementTableEntries[17] }/* 997909440 */ ,
   { "axis", static_cast<int>(KJS::HTMLElement::TableCellAxis), KJS::DontDelete, 0, &HTMLTableCellElementTableEntries[18] }/* 802877056 */ ,
   { "cellIndex", static_cast<int>(KJS::HTMLElement::TableCellCellIndex), KJS::DontDelete|KJS::ReadOnly, 0, &HTMLTableCellElementTableEntries[16] }/* 3122017472 */ ,
   { "headers", static_cast<int>(KJS::HTMLElement::TableCellHeaders), KJS::DontDelete, 0, nullptr }/* 2770868313 */ ,
   { "scope", static_cast<int>(KJS::HTMLElement::TableCellScope), KJS::DontDelete, 0, nullptr }/* 139842544 */ ,
   { "align", static_cast<int>(KJS::HTMLElement::TableCellAlign), KJS::DontDelete, 0, nullptr }/* 1654261565 */ ,
   { "noWrap", static_cast<int>(KJS::HTMLElement::TableCellNoWrap), KJS::DontDelete, 0, nullptr }/* 3089689941 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "ch", static_cast<int>(KJS::HTMLElement::TableCellCh), KJS::DontDelete, 0, &HTMLTableCellElementTableEntries[15] }/* 3808073574 */ ,
   { "colSpan", static_cast<int>(KJS::HTMLElement::TableCellColSpan), KJS::DontDelete, 0, nullptr }/* 4274746930 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "abbr", static_cast<int>(KJS::HTMLElement::TableCellAbbr), KJS::DontDelete, 0, nullptr }/* 3909741853 */ ,
   { "vAlign", static_cast<int>(KJS::HTMLElement::TableCellVAlign), KJS::DontDelete, 0, nullptr }/* 1126953434 */ ,
   { "chOff", static_cast<int>(KJS::HTMLElement::TableCellChOff), KJS::DontDelete, 0, nullptr }/* 2770722684 */ ,
   { "height", static_cast<int>(KJS::HTMLElement::TableCellHeight), KJS::DontDelete, 0, nullptr }/* 241578857 */ ,
   { "rowSpan", static_cast<int>(KJS::HTMLElement::TableCellRowSpan), KJS::DontDelete, 0, nullptr }/* 2506863525 */ ,
   { "width", static_cast<int>(KJS::HTMLElement::TableCellWidth), KJS::DontDelete, 0, nullptr }/* 365223811 */ 
};

const struct KJS::HashTable HTMLTableCellElementTable = { 2, 19, HTMLTableCellElementTableEntries, 15 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLFrameSetElementTableEntries[] = {
   { "onmessage", static_cast<int>(KJS::HTMLElement::FrameSetOnMessage), KJS::DontDelete, 0, nullptr }/* 283946708 */ ,
   { "cols", static_cast<int>(KJS::HTMLElement::FrameSetCols), KJS::DontDelete, 0, &HTMLFrameSetElementTableEntries[2] }/* 3360365175 */ ,
   { "rows", static_cast<int>(KJS::HTMLElement::FrameSetRows), KJS::DontDelete, 0, nullptr }/* 699636691 */ 
};

const struct KJS::HashTable HTMLFrameSetElementTable = { 2, 3, HTMLFrameSetElementTableEntries, 2 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLLayerElementTableEntries[] = {
   { "bgColor", static_cast<int>(KJS::HTMLElement::LayerBgColor), KJS::DontDelete, 0, nullptr }/* 997909440 */ ,
   { "top", static_cast<int>(KJS::HTMLElement::LayerTop), KJS::DontDelete, 0, &HTMLLayerElementTableEntries[6] }/* 2430386407 */ ,
   { "clip", static_cast<int>(KJS::HTMLElement::LayerClip), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2011497998 */ ,
   { "document", static_cast<int>(KJS::HTMLElement::LayerDocument), KJS::DontDelete|KJS::ReadOnly, 0, &HTMLLayerElementTableEntries[8] }/* 1372288083 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "left", static_cast<int>(KJS::HTMLElement::LayerLeft), KJS::DontDelete, 0, &HTMLLayerElementTableEntries[7] }/* 3026229763 */ ,
   { "visibility", static_cast<int>(KJS::HTMLElement::LayerVisibility), KJS::DontDelete, 0, nullptr }/* 711692773 */ ,
   { "layers", static_cast<int>(KJS::HTMLElement::LayerLayers), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3543075531 */ 
};

const struct KJS::HashTable HTMLLayerElementTable = { 2, 9, HTMLLayerElementTableEntries, 6 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLFrameElementTableEntries[] = {
   { "marginHeight", static_cast<int>(KJS::HTMLElement::FrameMarginHeight), KJS::DontDelete, 0, &HTMLFrameElementTableEntries[13] }/* 4147933270 */ ,
   { "longDesc", static_cast<int>(KJS::HTMLElement::FrameLongDesc), KJS::DontDelete, 0, nullptr }/* 3898121501 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "name", static_cast<int>(KJS::HTMLElement::FrameName), KJS::DontDelete, 0, nullptr }/* 4135969945 */ ,
   { "width", static_cast<int>(KJS::HTMLElement::FrameWidth), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 365223811 */ ,
   { "marginWidth", static_cast<int>(KJS::HTMLElement::FrameMarginWidth), KJS::DontDelete, 0, &HTMLFrameElementTableEntries[14] }/* 1807803054 */ ,
   { "contentDocument", static_cast<int>(KJS::HTMLElement::FrameContentDocument), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1887823840 */ ,
   { "frameBorder", static_cast<int>(KJS::HTMLElement::FrameFrameBorder), KJS::DontDelete, 0, nullptr }/* 2293552645 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "contentWindow", static_cast<int>(KJS::HTMLElement::FrameContentWindow), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1044358951 */ ,
   { "noResize", static_cast<int>(KJS::HTMLElement::FrameNoResize), KJS::DontDelete, 0, &HTMLFrameElementTableEntries[15] }/* 3980921568 */ ,
   { "scrolling", static_cast<int>(KJS::HTMLElement::FrameScrolling), KJS::DontDelete, 0, nullptr }/* 3208769998 */ ,
   { "src", static_cast<int>(KJS::HTMLElement::FrameSrc), KJS::DontDelete, 0, &HTMLFrameElementTableEntries[16] }/* 1823457155 */ ,
   { "location", static_cast<int>(KJS::HTMLElement::FrameLocation), KJS::DontDelete, 0, &HTMLFrameElementTableEntries[17] }/* 290291248 */ ,
   { "height", static_cast<int>(KJS::HTMLElement::FrameHeight), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 241578857 */ 
};

const struct KJS::HashTable HTMLFrameElementTable = { 2, 18, HTMLFrameElementTableEntries, 13 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLIFrameElementTableEntries[] = {
   { "height", static_cast<int>(KJS::HTMLElement::IFrameHeight), KJS::DontDelete, 0, &HTMLIFrameElementTableEntries[13] }/* 241578857 */ ,
   { "longDesc", static_cast<int>(KJS::HTMLElement::IFrameLongDesc), KJS::DontDelete, 0, nullptr }/* 3898121501 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "name", static_cast<int>(KJS::HTMLElement::IFrameName), KJS::DontDelete, 0, nullptr }/* 4135969945 */ ,
   { "width", static_cast<int>(KJS::HTMLElement::IFrameWidth), KJS::DontDelete, 0, nullptr }/* 365223811 */ ,
   { "marginWidth", static_cast<int>(KJS::HTMLElement::IFrameMarginWidth), KJS::DontDelete, 0, &HTMLIFrameElementTableEntries[14] }/* 1807803054 */ ,
   { "contentDocument", static_cast<int>(KJS::HTMLElement::IFrameContentDocument), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1887823840 */ ,
   { "frameBorder", static_cast<int>(KJS::HTMLElement::IFrameFrameBorder), KJS::DontDelete, 0, nullptr }/* 2293552645 */ ,
   { "align", static_cast<int>(KJS::HTMLElement::IFrameAlign), KJS::DontDelete, 0, nullptr }/* 1654261565 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "contentWindow", static_cast<int>(KJS::HTMLElement::IFrameContentWindow), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1044358951 */ ,
   { "marginHeight", static_cast<int>(KJS::HTMLElement::IFrameMarginHeight), KJS::DontDelete, 0, &HTMLIFrameElementTableEntries[15] }/* 4147933270 */ ,
   { "scrolling", static_cast<int>(KJS::HTMLElement::IFrameScrolling), KJS::DontDelete, 0, nullptr }/* 3208769998 */ ,
   { "src", static_cast<int>(KJS::HTMLElement::IFrameSrc), KJS::DontDelete, 0, nullptr }/* 1823457155 */ 
};

const struct KJS::HashTable HTMLIFrameElementTable = { 2, 16, HTMLIFrameElementTableEntries, 13 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLIFrameElementProtoTableEntries[] = {
   { "getSVGDocument", static_cast<int>(KJS::HTMLElement::IFrameGetSVGDocument), KJS::DontDelete|KJS::Function, 0, nullptr }/* 3185178526 */ 
};

const struct KJS::HashTable HTMLIFrameElementProtoTable = { 2, 1, HTMLIFrameElementProtoTableEntries, 1 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLMarqueeElementProtoTableEntries[] = {
   { "start", static_cast<int>(KJS::HTMLElement::MarqueeStart), KJS::DontDelete|KJS::Function, 0, &HTMLMarqueeElementProtoTableEntries[2] }/* 3020920170 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "stop", static_cast<int>(KJS::HTMLElement::MarqueeStop), KJS::DontDelete|KJS::Function, 0, nullptr }/* 3740762590 */ 
};

const struct KJS::HashTable HTMLMarqueeElementProtoTable = { 2, 3, HTMLMarqueeElementProtoTableEntries, 2 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLCanvasElementTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "width", static_cast<int>(KJS::HTMLElement::CanvasWidth), KJS::DontDelete, 0, &HTMLCanvasElementTableEntries[2] }/* 365223811 */ ,
   { "height", static_cast<int>(KJS::HTMLElement::CanvasHeight), KJS::DontDelete, 0, nullptr }/* 241578857 */ 
};

const struct KJS::HashTable HTMLCanvasElementTable = { 2, 3, HTMLCanvasElementTableEntries, 2 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLCanvasElementProtoTableEntries[] = {
   { "getContext", static_cast<int>(KJS::HTMLElement::CanvasGetContext), KJS::DontDelete|KJS::Function, 1, &HTMLCanvasElementProtoTableEntries[1] }/* 1363545337 */ ,
   { "toDataURL", static_cast<int>(KJS::HTMLElement::CanvasToDataURL), KJS::DontDelete|KJS::Function, 0, nullptr }/* 3269266523 */ 
};

const struct KJS::HashTable HTMLCanvasElementProtoTable = { 2, 2, HTMLCanvasElementProtoTableEntries, 1 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLCollectionProtoTableEntries[] = {
   { "namedItem", static_cast<int>(HTMLCollection::NamedItem), KJS::DontDelete|KJS::Function, 1, &HTMLCollectionProtoTableEntries[3] }/* 4103559531 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "item", static_cast<int>(HTMLCollection::Item), KJS::DontDelete|KJS::Function, 1, nullptr }/* 1031584463 */ ,
   { "tags", static_cast<int>(HTMLCollection::Tags), KJS::DontDelete|KJS::Function, 1, nullptr }/* 2769653196 */ 
};

const struct KJS::HashTable HTMLCollectionProtoTable = { 2, 4, HTMLCollectionProtoTableEntries, 3 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry HTMLSelectCollectionProtoTableEntries[] = {
   { "add", static_cast<int>(HTMLSelectCollection::Add), KJS::DontDelete|KJS::Function, 2, &HTMLSelectCollectionProtoTableEntries[1] }/* 975278071 */ ,
   { "remove", static_cast<int>(HTMLSelectCollection::Remove), KJS::DontDelete|KJS::Function, 1, nullptr }/* 4093363626 */ 
};

const struct KJS::HashTable HTMLSelectCollectionProtoTable = { 2, 2, HTMLSelectCollectionProtoTableEntries, 1 };

} // namespace

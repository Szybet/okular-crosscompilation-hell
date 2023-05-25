/* Automatically generated from /home/szybet/kdesrc/frameworks/khtml/src/ecma/kjs_dom.cpp using /mnt/HDD/Project/Public/okulartry/okular-things/share/kf5/kjs/create_hash_table. DO NOT EDIT ! */

namespace KJS {

static const struct KJS::HashEntry DOMNodeConstantsTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "COMMENT_NODE", static_cast<int>(DOM::Node::COMMENT_NODE), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3945349614 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "DOCUMENT_POSITION_FOLLOWING", static_cast<int>(DOM::Node::DOCUMENT_POSITION_FOLLOWING), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 42347891 */ ,
   { "DOCUMENT_POSITION_CONTAINS", static_cast<int>(DOM::Node::DOCUMENT_POSITION_CONTAINS), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3335440254 */ ,
   { "NOTATION_NODE", static_cast<int>(DOM::Node::NOTATION_NODE), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3457536145 */ ,
   { "ENTITY_NODE", static_cast<int>(DOM::Node::ENTITY_NODE), KJS::DontDelete|KJS::ReadOnly, 0, &DOMNodeConstantsTableEntries[21] }/* 3336584231 */ ,
   { "DOCUMENT_NODE", static_cast<int>(DOM::Node::DOCUMENT_NODE), KJS::DontDelete|KJS::ReadOnly, 0, &DOMNodeConstantsTableEntries[24] }/* 168749310 */ ,
   { "ATTRIBUTE_NODE", static_cast<int>(DOM::Node::ATTRIBUTE_NODE), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2724955390 */ ,
   { "XPATH_NAMESPACE_NODE", static_cast<int>(DOM::Node::XPATH_NAMESPACE_NODE), KJS::DontDelete|KJS::ReadOnly, 0, &DOMNodeConstantsTableEntries[25] }/* 3549160724 */ ,
   { "ELEMENT_NODE", static_cast<int>(DOM::Node::ELEMENT_NODE), KJS::DontDelete|KJS::ReadOnly, 0, &DOMNodeConstantsTableEntries[23] }/* 2082358941 */ ,
   { "TEXT_NODE", static_cast<int>(DOM::Node::TEXT_NODE), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1151404456 */ ,
   { "CDATA_SECTION_NODE", static_cast<int>(DOM::Node::CDATA_SECTION_NODE), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2729682578 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "DOCUMENT_POSITION_CONTAINED_BY", static_cast<int>(DOM::Node::DOCUMENT_POSITION_CONTAINED_BY), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 4249059839 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "ENTITY_REFERENCE_NODE", static_cast<int>(DOM::Node::ENTITY_REFERENCE_NODE), KJS::DontDelete|KJS::ReadOnly, 0, &DOMNodeConstantsTableEntries[22] }/* 3659764393 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "PROCESSING_INSTRUCTION_NODE", static_cast<int>(DOM::Node::PROCESSING_INSTRUCTION_NODE), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 474549566 */ ,
   { "DOCUMENT_TYPE_NODE", static_cast<int>(DOM::Node::DOCUMENT_TYPE_NODE), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3027174253 */ ,
   { "DOCUMENT_FRAGMENT_NODE", static_cast<int>(DOM::Node::DOCUMENT_FRAGMENT_NODE), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 734442168 */ ,
   { "DOCUMENT_POSITION_DISCONNECTED", static_cast<int>(DOM::Node::DOCUMENT_POSITION_DISCONNECTED), KJS::DontDelete|KJS::ReadOnly, 0, &DOMNodeConstantsTableEntries[26] }/* 2699511075 */ ,
   { "DOCUMENT_POSITION_PRECEDING", static_cast<int>(DOM::Node::DOCUMENT_POSITION_PRECEDING), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 344863586 */ ,
   { "DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC", static_cast<int>(DOM::Node::DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2225251632 */ 
};

const struct KJS::HashTable DOMNodeConstantsTable = { 2, 27, DOMNodeConstantsTableEntries, 21 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMNodeProtoTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "removeChild", static_cast<int>(DOMNode::RemoveChild), KJS::DontDelete|KJS::Function, 1, &DOMNodeProtoTableEntries[14] }/* 1865492552 */ ,
   { "replaceChild", static_cast<int>(DOMNode::ReplaceChild), KJS::DontDelete|KJS::Function, 2, nullptr }/* 1731994994 */ ,
   { "removeEventListener", static_cast<int>(DOMNode::RemoveEventListener), KJS::DontDelete|KJS::Function, 3, nullptr }/* 1047744376 */ ,
   { "insertAdjacentHTML", static_cast<int>(DOMNode::InsertAdjacentHTML), KJS::DontDelete|KJS::Function, 2, nullptr }/* 114341010 */ ,
   { "insertBefore", static_cast<int>(DOMNode::InsertBefore), KJS::DontDelete|KJS::Function, 2, &DOMNodeProtoTableEntries[16] }/* 2365200960 */ ,
   { "compareDocumentPosition", static_cast<int>(DOMNode::CompareDocumentPosition), KJS::DontDelete|KJS::Function, 1, nullptr }/* 3278131304 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "hasAttributes", static_cast<int>(DOMNode::HasAttributes), KJS::DontDelete|KJS::Function, 0, &DOMNodeProtoTableEntries[13] }/* 3117746692 */ ,
   { "appendChild", static_cast<int>(DOMNode::AppendChild), KJS::DontDelete|KJS::Function, 1, nullptr }/* 3705585191 */ ,
   { "normalize", static_cast<int>(DOMNode::Normalize), KJS::DontDelete|KJS::Function, 0, nullptr }/* 191670372 */ ,
   { "isSupported", static_cast<int>(DOMNode::IsSupported), KJS::DontDelete|KJS::Function, 2, &DOMNodeProtoTableEntries[15] }/* 2771538716 */ ,
   { "addEventListener", static_cast<int>(DOMNode::AddEventListener), KJS::DontDelete|KJS::Function, 3, nullptr }/* 75269726 */ ,
   { "hasChildNodes", static_cast<int>(DOMNode::HasChildNodes), KJS::DontDelete|KJS::Function, 0, nullptr }/* 2606571092 */ ,
   { "cloneNode", static_cast<int>(DOMNode::CloneNode), KJS::DontDelete|KJS::Function, 1, nullptr }/* 56795961 */ ,
   { "dispatchEvent", static_cast<int>(DOMNode::DispatchEvent), KJS::DontDelete|KJS::Function, 1, nullptr }/* 3265753021 */ ,
   { "contains", static_cast<int>(DOMNode::Contains), KJS::DontDelete|KJS::Function, 1, nullptr }/* 1312575256 */ 
};

const struct KJS::HashTable DOMNodeProtoTable = { 2, 17, DOMNodeProtoTableEntries, 13 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMNodeTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "ondblclick", static_cast<int>(DOMNode::OnDblClick), KJS::DontDelete, 0, nullptr }/* 2375071935 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "onmouseout", static_cast<int>(DOMNode::OnMouseOut), KJS::DontDelete, 0, nullptr }/* 708315430 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "childNodes", static_cast<int>(DOMNode::ChildNodes), KJS::DontDelete|KJS::ReadOnly, 0, &DOMNodeTableEntries[68] }/* 1338454904 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "clientWidth", static_cast<int>(DOMNode::ClientWidth), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2290634519 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "offsetParent", static_cast<int>(DOMNode::OffsetParent), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3433804135 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "nodeName", static_cast<int>(DOMNode::NodeName), KJS::DontDelete|KJS::ReadOnly, 0, &DOMNodeTableEntries[53] }/* 2267760624 */ ,
   { "offsetTop", static_cast<int>(DOMNode::OffsetTop), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2611207674 */ ,
   { "parentNode", static_cast<int>(DOMNode::ParentNode), KJS::DontDelete|KJS::ReadOnly, 0, &DOMNodeTableEntries[54] }/* 3796390601 */ ,
   { "parentElement", static_cast<int>(DOMNode::ParentElement), KJS::DontDelete|KJS::ReadOnly, 0, &DOMNodeTableEntries[55] }/* 4206754709 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "onunload", static_cast<int>(DOMNode::OnUnload), KJS::DontDelete, 0, nullptr }/* 2768506114 */ ,
   { "localName", static_cast<int>(DOMNode::LocalName), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1745307460 */ ,
   { "ownerDocument", static_cast<int>(DOMNode::OwnerDocument), KJS::DontDelete|KJS::ReadOnly, 0, &DOMNodeTableEntries[58] }/* 2538072504 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "onkeydown", static_cast<int>(DOMNode::OnKeyDown), KJS::DontDelete, 0, &DOMNodeTableEntries[60] }/* 118358195 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "onerror", static_cast<int>(DOMNode::OnError), KJS::DontDelete, 0, nullptr }/* 3777531886 */ ,
   { "onload", static_cast<int>(DOMNode::OnLoad), KJS::DontDelete, 0, &DOMNodeTableEntries[74] }/* 3960668140 */ ,
   { "nextSibling", static_cast<int>(DOMNode::NextSibling), KJS::DontDelete|KJS::ReadOnly, 0, &DOMNodeTableEntries[65] }/* 4268664444 */ ,
   { "onclick", static_cast<int>(DOMNode::OnClick), KJS::DontDelete, 0, &DOMNodeTableEntries[59] }/* 252326300 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "offsetHeight", static_cast<int>(DOMNode::OffsetHeight), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 358287347 */ ,
   { "textContent", static_cast<int>(DOMNode::TextContent), KJS::DontDelete, 0, &DOMNodeTableEntries[57] }/* 1265738667 */ ,
   { "onselect", static_cast<int>(DOMNode::OnSelect), KJS::DontDelete, 0, nullptr }/* 2628083475 */ ,
   { "nodeType", static_cast<int>(DOMNode::NodeType), KJS::DontDelete|KJS::ReadOnly, 0, &DOMNodeTableEntries[70] }/* 3219289519 */ ,
   { "onabort", static_cast<int>(DOMNode::OnAbort), KJS::DontDelete, 0, nullptr }/* 495556821 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "onkeypress", static_cast<int>(DOMNode::OnKeyPress), KJS::DontDelete, 0, &DOMNodeTableEntries[67] }/* 1537355616 */ ,
   { "prefix", static_cast<int>(DOMNode::Prefix), KJS::DontDelete, 0, nullptr }/* 5913462 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "namespaceURI", static_cast<int>(DOMNode::NamespaceURI), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 4013206047 */ ,
   { "lastChild", static_cast<int>(DOMNode::LastChild), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 4207761045 */ ,
   { "onmouseover", static_cast<int>(DOMNode::OnMouseOver), KJS::DontDelete, 0, nullptr }/* 793985466 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "nodeValue", static_cast<int>(DOMNode::NodeValue), KJS::DontDelete, 0, nullptr }/* 646353439 */ ,
   { "clientHeight", static_cast<int>(DOMNode::ClientHeight), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 571883511 */ ,
   { "onblur", static_cast<int>(DOMNode::OnBlur), KJS::DontDelete, 0, &DOMNodeTableEntries[64] }/* 714907351 */ ,
   { "ondragdrop", static_cast<int>(DOMNode::OnDragDrop), KJS::DontDelete, 0, &DOMNodeTableEntries[61] }/* 3962768128 */ ,
   { "onsubmit", static_cast<int>(DOMNode::OnSubmit), KJS::DontDelete, 0, nullptr }/* 10895898 */ ,
   { "firstChild", static_cast<int>(DOMNode::FirstChild), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1669569499 */ ,
   { "previousSibling", static_cast<int>(DOMNode::PreviousSibling), KJS::DontDelete|KJS::ReadOnly, 0, &DOMNodeTableEntries[56] }/* 3892386692 */ ,
   { "attributes", static_cast<int>(DOMNode::Attributes), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 44961085 */ ,
   { "onchange", static_cast<int>(DOMNode::OnChange), KJS::DontDelete, 0, nullptr }/* 3424140278 */ ,
   { "onfocus", static_cast<int>(DOMNode::OnFocus), KJS::DontDelete, 0, nullptr }/* 1118781009 */ ,
   { "onkeyup", static_cast<int>(DOMNode::OnKeyUp), KJS::DontDelete, 0, &DOMNodeTableEntries[62] }/* 1382830391 */ ,
   { "onmousedown", static_cast<int>(DOMNode::OnMouseDown), KJS::DontDelete, 0, nullptr }/* 3265682216 */ ,
   { "onmousemove", static_cast<int>(DOMNode::OnMouseMove), KJS::DontDelete, 0, nullptr }/* 1053316302 */ ,
   { "onmouseup", static_cast<int>(DOMNode::OnMouseUp), KJS::DontDelete, 0, &DOMNodeTableEntries[63] }/* 3297267162 */ ,
   { "onmove", static_cast<int>(DOMNode::OnMove), KJS::DontDelete, 0, nullptr }/* 4007416838 */ ,
   { "onreset", static_cast<int>(DOMNode::OnReset), KJS::DontDelete, 0, nullptr }/* 2148355157 */ ,
   { "onresize", static_cast<int>(DOMNode::OnResize), KJS::DontDelete, 0, &DOMNodeTableEntries[66] }/* 4050308757 */ ,
   { "onscroll", static_cast<int>(DOMNode::OnScroll), KJS::DontDelete, 0, nullptr }/* 2108608051 */ ,
   { "offsetLeft", static_cast<int>(DOMNode::OffsetLeft), KJS::DontDelete|KJS::ReadOnly, 0, &DOMNodeTableEntries[72] }/* 3985540955 */ ,
   { "offsetWidth", static_cast<int>(DOMNode::OffsetWidth), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3471158613 */ ,
   { "clientLeft", static_cast<int>(DOMNode::ClientLeft), KJS::DontDelete|KJS::ReadOnly, 0, &DOMNodeTableEntries[69] }/* 2404141009 */ ,
   { "clientTop", static_cast<int>(DOMNode::ClientTop), KJS::DontDelete|KJS::ReadOnly, 0, &DOMNodeTableEntries[73] }/* 728893795 */ ,
   { "scrollLeft", static_cast<int>(DOMNode::ScrollLeft), KJS::DontDelete, 0, &DOMNodeTableEntries[71] }/* 2632356495 */ ,
   { "scrollTop", static_cast<int>(DOMNode::ScrollTop), KJS::DontDelete, 0, nullptr }/* 1287828433 */ ,
   { "scrollWidth", static_cast<int>(DOMNode::ScrollWidth), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3733368121 */ ,
   { "scrollHeight", static_cast<int>(DOMNode::ScrollHeight), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1325668707 */ ,
   { "sourceIndex", static_cast<int>(DOMNode::SourceIndex), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1514155810 */ 
};

const struct KJS::HashTable DOMNodeTable = { 2, 75, DOMNodeTableEntries, 53 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMNodeListProtoTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "item", static_cast<int>(DOMNodeList::Item), KJS::DontDelete|KJS::Function, 1, &DOMNodeListProtoTableEntries[2] }/* 1031584463 */ ,
   { "namedItem", static_cast<int>(DOMNodeList::NamedItem), KJS::DontDelete|KJS::Function, 1, nullptr }/* 4103559531 */ 
};

const struct KJS::HashTable DOMNodeListProtoTable = { 2, 3, DOMNodeListProtoTableEntries, 2 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMAttrTableEntries[] = {
   { "name", static_cast<int>(DOMAttr::Name), KJS::DontDelete|KJS::ReadOnly, 0, &DOMAttrTableEntries[5] }/* 4135969945 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "value", static_cast<int>(DOMAttr::ValueProperty), KJS::DontDelete, 0, nullptr }/* 2443567787 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "ownerElement", static_cast<int>(DOMAttr::OwnerElement), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 737964134 */ ,
   { "specified", static_cast<int>(DOMAttr::Specified), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2732418985 */ 
};

const struct KJS::HashTable DOMAttrTable = { 2, 6, DOMAttrTableEntries, 5 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMDocumentProtoTableEntries[] = {
   { "load", static_cast<int>(DOMDocument::Load), KJS::DontDelete|KJS::Function, 1, nullptr }/* 2457681353 */ ,
   { "createComment", static_cast<int>(DOMDocument::CreateComment), KJS::DontDelete|KJS::Function, 1, nullptr }/* 1423730982 */ ,
   { "queryCommandIndeterm", static_cast<int>(DOMDocument::QueryCommandIndeterm), KJS::DontDelete|KJS::Function, 1, nullptr }/* 2131431277 */ ,
   { "createDocumentFragment", static_cast<int>(DOMDocument::CreateDocumentFragment), KJS::DontDelete|KJS::Function, 1, nullptr }/* 374464613 */ ,
   { "queryCommandSupported", static_cast<int>(DOMDocument::QueryCommandSupported), KJS::DontDelete|KJS::Function, 1, nullptr }/* 1971644966 */ ,
   { "createTextNode", static_cast<int>(DOMDocument::CreateTextNode), KJS::DontDelete|KJS::Function, 1, &DOMDocumentProtoTableEntries[23] }/* 2342845463 */ ,
   { "queryCommandEnabled", static_cast<int>(DOMDocument::QueryCommandEnabled), KJS::DontDelete|KJS::Function, 1, nullptr }/* 2199847633 */ ,
   { "getElementsByTagName", static_cast<int>(DOMDocument::GetElementsByTagName), KJS::DontDelete|KJS::Function, 1, &DOMDocumentProtoTableEntries[25] }/* 2838379315 */ ,
   { "getElementsByTagNameNS", static_cast<int>(DOMDocument::GetElementsByTagNameNS), KJS::DontDelete|KJS::Function, 2, &DOMDocumentProtoTableEntries[29] }/* 3680157650 */ ,
   { "getOverrideStyle", static_cast<int>(DOMDocument::GetOverrideStyle), KJS::DontDelete|KJS::Function, 2, &DOMDocumentProtoTableEntries[30] }/* 1767758918 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "createAttribute", static_cast<int>(DOMDocument::CreateAttribute), KJS::DontDelete|KJS::Function, 1, &DOMDocumentProtoTableEntries[24] }/* 3904209324 */ ,
   { "createEvent", static_cast<int>(DOMDocument::CreateEvent), KJS::DontDelete|KJS::Function, 1, &DOMDocumentProtoTableEntries[32] }/* 143781269 */ ,
   { "queryCommandState", static_cast<int>(DOMDocument::QueryCommandState), KJS::DontDelete|KJS::Function, 1, nullptr }/* 1128968882 */ ,
   { "importNode", static_cast<int>(DOMDocument::ImportNode), KJS::DontDelete|KJS::Function, 2, &DOMDocumentProtoTableEntries[27] }/* 3090586144 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "createElement", static_cast<int>(DOMDocument::CreateElement), KJS::DontDelete|KJS::Function, 1, nullptr }/* 3471003548 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "getElementsByClassName", static_cast<int>(DOMDocument::GetElementsByClassName), KJS::DontDelete|KJS::Function, 1, nullptr }/* 3875681236 */ ,
   { "createAttributeNS", static_cast<int>(DOMDocument::CreateAttributeNS), KJS::DontDelete|KJS::Function, 2, &DOMDocumentProtoTableEntries[31] }/* 3503721626 */ ,
   { "querySelector", static_cast<int>(DOMDocument::QuerySelector), KJS::DontDelete|KJS::Function, 1, nullptr }/* 2206159170 */ ,
   { "createCDATASection", static_cast<int>(DOMDocument::CreateCDATASection), KJS::DontDelete|KJS::Function, 1, &DOMDocumentProtoTableEntries[36] }/* 3047382377 */ ,
   { "createProcessingInstruction", static_cast<int>(DOMDocument::CreateProcessingInstruction), KJS::DontDelete|KJS::Function, 1, &DOMDocumentProtoTableEntries[26] }/* 4090051043 */ ,
   { "createEntityReference", static_cast<int>(DOMDocument::CreateEntityReference), KJS::DontDelete|KJS::Function, 1, &DOMDocumentProtoTableEntries[28] }/* 3749552195 */ ,
   { "createElementNS", static_cast<int>(DOMDocument::CreateElementNS), KJS::DontDelete|KJS::Function, 2, nullptr }/* 491354596 */ ,
   { "getElementById", static_cast<int>(DOMDocument::GetElementById), KJS::DontDelete|KJS::Function, 1, &DOMDocumentProtoTableEntries[34] }/* 1659551849 */ ,
   { "createRange", static_cast<int>(DOMDocument::CreateRange), KJS::DontDelete|KJS::Function, 0, nullptr }/* 345344393 */ ,
   { "createNodeIterator", static_cast<int>(DOMDocument::CreateNodeIterator), KJS::DontDelete|KJS::Function, 3, nullptr }/* 1674809526 */ ,
   { "createTreeWalker", static_cast<int>(DOMDocument::CreateTreeWalker), KJS::DontDelete|KJS::Function, 4, &DOMDocumentProtoTableEntries[35] }/* 797116137 */ ,
   { "abort", static_cast<int>(DOMDocument::Abort), KJS::DontDelete|KJS::Function, 0, nullptr }/* 3823818319 */ ,
   { "loadXML", static_cast<int>(DOMDocument::LoadXML), KJS::DontDelete|KJS::Function, 2, &DOMDocumentProtoTableEntries[33] }/* 3357827083 */ ,
   { "execCommand", static_cast<int>(DOMDocument::ExecCommand), KJS::DontDelete|KJS::Function, 3, nullptr }/* 3841611237 */ ,
   { "queryCommandValue", static_cast<int>(DOMDocument::QueryCommandValue), KJS::DontDelete|KJS::Function, 1, nullptr }/* 3907448055 */ ,
   { "querySelectorAll", static_cast<int>(DOMDocument::QuerySelectorAll), KJS::DontDelete|KJS::Function, 1, &DOMDocumentProtoTableEntries[37] }/* 2663264535 */ ,
   { "createExpression", static_cast<int>(DOMDocument::CreateExpression), KJS::DontDelete|KJS::Function, 2, nullptr }/* 2584524245 */ ,
   { "createNSResolver", static_cast<int>(DOMDocument::CreateNSResolver), KJS::DontDelete|KJS::Function, 1, nullptr }/* 10746956 */ ,
   { "evaluate", static_cast<int>(DOMDocument::Evaluate), KJS::DontDelete|KJS::Function, 4, nullptr }/* 2616313347 */ 
};

const struct KJS::HashTable DOMDocumentProtoTable = { 2, 38, DOMDocumentProtoTableEntries, 23 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMDocumentTableEntries[] = {
   { "documentElement", static_cast<int>(DOMDocument::DocumentElement), KJS::DontDelete|KJS::ReadOnly, 0, &DOMDocumentTableEntries[5] }/* 4146830856 */ ,
   { "doctype", static_cast<int>(DOMDocument::DocType), KJS::DontDelete|KJS::ReadOnly, 0, &DOMDocumentTableEntries[6] }/* 1738593433 */ ,
   { "selectedStylesheetSet", static_cast<int>(DOMDocument::SelectedStylesheetSet), KJS::DontDelete, 0, nullptr }/* 1594745282 */ ,
   { "implementation", static_cast<int>(DOMDocument::Implementation), KJS::DontDelete|KJS::ReadOnly, 0, &DOMDocumentTableEntries[4] }/* 829227323 */ ,
   { "characterSet", static_cast<int>(DOMDocument::CharacterSet), KJS::DontDelete|KJS::ReadOnly, 0, &DOMDocumentTableEntries[8] }/* 3439307207 */ ,
   { "styleSheets", static_cast<int>(DOMDocument::StyleSheets), KJS::DontDelete|KJS::ReadOnly, 0, &DOMDocumentTableEntries[7] }/* 150827444 */ ,
   { "preferredStylesheetSet", static_cast<int>(DOMDocument::PreferredStylesheetSet), KJS::DontDelete|KJS::ReadOnly, 0, &DOMDocumentTableEntries[9] }/* 1185293577 */ ,
   { "readyState", static_cast<int>(DOMDocument::ReadyState), KJS::DontDelete|KJS::ReadOnly, 0, &DOMDocumentTableEntries[10] }/* 2142707136 */ ,
   { "defaultView", static_cast<int>(DOMDocument::DefaultView), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 642202727 */ ,
   { "async", static_cast<int>(DOMDocument::Async), KJS::DontDelete, 0, nullptr }/* 3441885761 */ ,
   { "title", static_cast<int>(DOMDocument::Title), KJS::DontDelete, 0, nullptr }/* 3894651600 */ 
};

const struct KJS::HashTable DOMDocumentTable = { 2, 11, DOMDocumentTableEntries, 4 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMElementProtoTableEntries[] = {
   { "hasAttribute", static_cast<int>(DOMElement::HasAttribute), KJS::DontDelete|KJS::Function, 1, &DOMElementProtoTableEntries[20] }/* 3953631044 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "getAttribute", static_cast<int>(DOMElement::GetAttribute), KJS::DontDelete|KJS::Function, 1, &DOMElementProtoTableEntries[17] }/* 3893879735 */ ,
   { "getAttributeNode", static_cast<int>(DOMElement::GetAttributeNode), KJS::DontDelete|KJS::Function, 1, &DOMElementProtoTableEntries[22] }/* 3463601100 */ ,
   { "setAttributeNode", static_cast<int>(DOMElement::SetAttributeNode), KJS::DontDelete|KJS::Function, 2, &DOMElementProtoTableEntries[21] }/* 2135046494 */ ,
   { "removeAttribute", static_cast<int>(DOMElement::RemoveAttribute), KJS::DontDelete|KJS::Function, 1, &DOMElementProtoTableEntries[18] }/* 945058548 */ ,
   { "removeAttributeNode", static_cast<int>(DOMElement::RemoveAttributeNode), KJS::DontDelete|KJS::Function, 1, &DOMElementProtoTableEntries[25] }/* 1625434334 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "setAttribute", static_cast<int>(DOMElement::SetAttribute), KJS::DontDelete|KJS::Function, 2, &DOMElementProtoTableEntries[19] }/* 2719196588 */ ,
   { "setAttributeNS", static_cast<int>(DOMElement::SetAttributeNS), KJS::DontDelete|KJS::Function, 3, nullptr }/* 4202125663 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "focus", static_cast<int>(DOMElement::Focus), KJS::DontDelete|KJS::Function, 0, nullptr }/* 3491510110 */ ,
   { "querySelectorAll", static_cast<int>(DOMElement::QuerySelectorAll), KJS::DontDelete|KJS::Function, 1, nullptr }/* 2663264535 */ ,
   { "getElementsByTagNameNS", static_cast<int>(DOMElement::GetElementsByTagNameNS), KJS::DontDelete|KJS::Function, 2, nullptr }/* 3680157650 */ ,
   { "getAttributeNodeNS", static_cast<int>(DOMElement::GetAttributeNodeNS), KJS::DontDelete|KJS::Function, 2, &DOMElementProtoTableEntries[24] }/* 375203444 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "getElementsByTagName", static_cast<int>(DOMElement::GetElementsByTagName), KJS::DontDelete|KJS::Function, 1, nullptr }/* 2838379315 */ ,
   { "getAttributeNS", static_cast<int>(DOMElement::GetAttributeNS), KJS::DontDelete|KJS::Function, 2, &DOMElementProtoTableEntries[23] }/* 1740045137 */ ,
   { "removeAttributeNS", static_cast<int>(DOMElement::RemoveAttributeNS), KJS::DontDelete|KJS::Function, 2, nullptr }/* 3201872981 */ ,
   { "setAttributeNodeNS", static_cast<int>(DOMElement::SetAttributeNodeNS), KJS::DontDelete|KJS::Function, 1, nullptr }/* 2809447030 */ ,
   { "hasAttributeNS", static_cast<int>(DOMElement::HasAttributeNS), KJS::DontDelete|KJS::Function, 2, &DOMElementProtoTableEntries[26] }/* 1689311713 */ ,
   { "getElementsByClassName", static_cast<int>(DOMElement::GetElementsByClassName), KJS::DontDelete|KJS::Function, 1, nullptr }/* 3875681236 */ ,
   { "blur", static_cast<int>(DOMElement::Blur), KJS::DontDelete|KJS::Function, 0, nullptr }/* 2637903843 */ ,
   { "querySelector", static_cast<int>(DOMElement::QuerySelector), KJS::DontDelete|KJS::Function, 1, nullptr }/* 2206159170 */ ,
   { "getClientRects", static_cast<int>(DOMElement::GetClientRects), KJS::DontDelete|KJS::Function, 0, nullptr }/* 494514587 */ ,
   { "getBoundingClientRect", static_cast<int>(DOMElement::GetBoundingClientRect), KJS::DontDelete|KJS::Function, 0, nullptr }/* 2493916528 */ 
};

const struct KJS::HashTable DOMElementProtoTable = { 2, 27, DOMElementProtoTableEntries, 17 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMElementTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "style", static_cast<int>(DOMElement::Style), KJS::DontDelete|KJS::ReadOnly, 0, &DOMElementTableEntries[7] }/* 2024259596 */ ,
   { "firstElementChild", static_cast<int>(DOMElement::FirstElementChild), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1013233329 */ ,
   { "tagName", static_cast<int>(DOMElement::TagName), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 4232806771 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "previousElementSibling", static_cast<int>(DOMElement::PreviousElementSibling), KJS::DontDelete|KJS::ReadOnly, 0, &DOMElementTableEntries[8] }/* 1492753268 */ ,
   { "lastElementChild", static_cast<int>(DOMElement::LastElementChild), KJS::DontDelete|KJS::ReadOnly, 0, &DOMElementTableEntries[9] }/* 214057573 */ ,
   { "nextElementSibling", static_cast<int>(DOMElement::NextElementSibling), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 256449899 */ ,
   { "childElementCount", static_cast<int>(DOMElement::ChildElementCount), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 220658041 */ 
};

const struct KJS::HashTable DOMElementTable = { 2, 10, DOMElementTableEntries, 7 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMDOMImplementationProtoTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "createCSSStyleSheet", static_cast<int>(DOMDOMImplementation::CreateCSSStyleSheet), KJS::DontDelete|KJS::Function, 2, &DOMDOMImplementationProtoTableEntries[5] }/* 1293798746 */ ,
   { "hasFeature", static_cast<int>(DOMDOMImplementation::HasFeature), KJS::DontDelete|KJS::Function, 2, &DOMDOMImplementationProtoTableEntries[6] }/* 4266807307 */ ,
   { "createDocument", static_cast<int>(DOMDOMImplementation::CreateDocument), KJS::DontDelete|KJS::Function, 3, nullptr }/* 1895503478 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "createDocumentType", static_cast<int>(DOMDOMImplementation::CreateDocumentType), KJS::DontDelete|KJS::Function, 3, nullptr }/* 2992792986 */ ,
   { "createHTMLDocument", static_cast<int>(DOMDOMImplementation::CreateHTMLDocument), KJS::DontDelete|KJS::Function, 1, nullptr }/* 2068514127 */ 
};

const struct KJS::HashTable DOMDOMImplementationProtoTable = { 2, 7, DOMDOMImplementationProtoTableEntries, 5 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMDocumentTypeTableEntries[] = {
   { "publicId", static_cast<int>(DOMDocumentType::PublicId), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1256114118 */ ,
   { "name", static_cast<int>(DOMDocumentType::Name), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 4135969945 */ ,
   { "entities", static_cast<int>(DOMDocumentType::Entities), KJS::DontDelete|KJS::ReadOnly, 0, &DOMDocumentTypeTableEntries[6] }/* 3775827836 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "systemId", static_cast<int>(DOMDocumentType::SystemId), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1028168734 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "notations", static_cast<int>(DOMDocumentType::Notations), KJS::DontDelete|KJS::ReadOnly, 0, &DOMDocumentTypeTableEntries[7] }/* 717915800 */ ,
   { "internalSubset", static_cast<int>(DOMDocumentType::InternalSubset), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2256563174 */ 
};

const struct KJS::HashTable DOMDocumentTypeTable = { 2, 8, DOMDocumentTypeTableEntries, 6 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMNamedNodeMapProtoTableEntries[] = {
   { "getNamedItem", static_cast<int>(DOMNamedNodeMap::GetNamedItem), KJS::DontDelete|KJS::Function, 1, &DOMNamedNodeMapProtoTableEntries[8] }/* 1139796742 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "setNamedItem", static_cast<int>(DOMNamedNodeMap::SetNamedItem), KJS::DontDelete|KJS::Function, 1, &DOMNamedNodeMapProtoTableEntries[7] }/* 86106078 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "getNamedItemNS", static_cast<int>(DOMNamedNodeMap::GetNamedItemNS), KJS::DontDelete|KJS::Function, 2, nullptr }/* 3683503641 */ ,
   { "removeNamedItem", static_cast<int>(DOMNamedNodeMap::RemoveNamedItem), KJS::DontDelete|KJS::Function, 1, nullptr }/* 2617429271 */ ,
   { "item", static_cast<int>(DOMNamedNodeMap::Item), KJS::DontDelete|KJS::Function, 1, &DOMNamedNodeMapProtoTableEntries[9] }/* 1031584463 */ ,
   { "setNamedItemNS", static_cast<int>(DOMNamedNodeMap::SetNamedItemNS), KJS::DontDelete|KJS::Function, 1, &DOMNamedNodeMapProtoTableEntries[10] }/* 1528512524 */ ,
   { "removeNamedItemNS", static_cast<int>(DOMNamedNodeMap::RemoveNamedItemNS), KJS::DontDelete|KJS::Function, 2, nullptr }/* 469491652 */ 
};

const struct KJS::HashTable DOMNamedNodeMapProtoTable = { 2, 11, DOMNamedNodeMapProtoTableEntries, 7 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMNamedNodeMapTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "length", static_cast<int>(DOMNamedNodeMap::Length), KJS::DontDelete|KJS::Function, 1, nullptr }/* 2484182065 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr }
};

const struct KJS::HashTable DOMNamedNodeMapTable = { 2, 7, DOMNamedNodeMapTableEntries, 7 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMProcessingInstructionTableEntries[] = {
   { "data", static_cast<int>(DOMProcessingInstruction::Data), KJS::DontDelete, 0, nullptr }/* 3260053779 */ ,
   { "target", static_cast<int>(DOMProcessingInstruction::Target), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 421183222 */ ,
   { "sheet", static_cast<int>(DOMProcessingInstruction::Sheet), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3633021695 */ 
};

const struct KJS::HashTable DOMProcessingInstructionTable = { 2, 3, DOMProcessingInstructionTableEntries, 3 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMNotationTableEntries[] = {
   { "publicId", static_cast<int>(DOMNotation::PublicId), KJS::DontDelete|KJS::ReadOnly, 0, &DOMNotationTableEntries[2] }/* 1256114118 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "systemId", static_cast<int>(DOMNotation::SystemId), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1028168734 */ 
};

const struct KJS::HashTable DOMNotationTable = { 2, 3, DOMNotationTableEntries, 2 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMEntityTableEntries[] = {
   { "publicId", static_cast<int>(DOMEntity::PublicId), KJS::DontDelete|KJS::ReadOnly, 0, &DOMEntityTableEntries[2] }/* 1256114118 */ ,
   { "notationName", static_cast<int>(DOMEntity::NotationName), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1643225153 */ ,
   { "systemId", static_cast<int>(DOMEntity::SystemId), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1028168734 */ 
};

const struct KJS::HashTable DOMEntityTable = { 2, 3, DOMEntityTableEntries, 2 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMExceptionProtoTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "VALIDATION_ERR", static_cast<int>(DOM::DOMException::VALIDATION_ERR), KJS::DontDelete|KJS::ReadOnly, 0, &DOMExceptionProtoTableEntries[34] }/* 1465359648 */ ,
   { "NAMESPACE_ERR", static_cast<int>(DOM::DOMException::NAMESPACE_ERR), KJS::DontDelete|KJS::ReadOnly, 0, &DOMExceptionProtoTableEntries[36] }/* 4022936697 */ ,
   { "TYPE_MISMATCH_ERR", static_cast<int>(DOM::DOMException::TYPE_MISMATCH_ERR), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2211337844 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "DATA_CLONE_ERR", static_cast<int>(DOM::DOMException::DATA_CLONE_ERR), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2651821398 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "NOT_FOUND_ERR", static_cast<int>(DOM::DOMException::NOT_FOUND_ERR), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2288147684 */ ,
   { "SYNTAX_ERR", static_cast<int>(DOM::DOMException::SYNTAX_ERR), KJS::DontDelete|KJS::ReadOnly, 0, &DOMExceptionProtoTableEntries[35] }/* 2221410681 */ ,
   { "INDEX_SIZE_ERR", static_cast<int>(DOM::DOMException::INDEX_SIZE_ERR), KJS::DontDelete|KJS::ReadOnly, 0, &DOMExceptionProtoTableEntries[29] }/* 1417504698 */ ,
   { "ABORT_ERR", static_cast<int>(DOM::DOMException::ABORT_ERR), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3554685190 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "INUSE_ATTRIBUTE_ERR", static_cast<int>(DOM::DOMException::INUSE_ATTRIBUTE_ERR), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2621924871 */ ,
   { "HIERARCHY_REQUEST_ERR", static_cast<int>(DOM::DOMException::HIERARCHY_REQUEST_ERR), KJS::DontDelete|KJS::ReadOnly, 0, &DOMExceptionProtoTableEntries[31] }/* 2778857241 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "NO_DATA_ALLOWED_ERR", static_cast<int>(DOM::DOMException::NO_DATA_ALLOWED_ERR), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1417263222 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "INVALID_MODIFICATION_ERR", static_cast<int>(DOM::DOMException::INVALID_MODIFICATION_ERR), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2800337084 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "NOT_SUPPORTED_ERR", static_cast<int>(DOM::DOMException::NOT_SUPPORTED_ERR), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3588300262 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "SECURITY_ERR", static_cast<int>(DOM::DOMException::SECURITY_ERR), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2862935300 */ ,
   { "DOMSTRING_SIZE_ERR", static_cast<int>(DOM::DOMException::DOMSTRING_SIZE_ERR), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3884990508 */ ,
   { "INVALID_CHARACTER_ERR", static_cast<int>(DOM::DOMException::INVALID_CHARACTER_ERR), KJS::DontDelete|KJS::ReadOnly, 0, &DOMExceptionProtoTableEntries[30] }/* 3799638782 */ ,
   { "WRONG_DOCUMENT_ERR", static_cast<int>(DOM::DOMException::WRONG_DOCUMENT_ERR), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1571237961 */ ,
   { "NO_MODIFICATION_ALLOWED_ERR", static_cast<int>(DOM::DOMException::NO_MODIFICATION_ALLOWED_ERR), KJS::DontDelete|KJS::ReadOnly, 0, &DOMExceptionProtoTableEntries[32] }/* 707015069 */ ,
   { "INVALID_STATE_ERR", static_cast<int>(DOM::DOMException::INVALID_STATE_ERR), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2592522874 */ ,
   { "INVALID_ACCESS_ERR", static_cast<int>(DOM::DOMException::INVALID_ACCESS_ERR), KJS::DontDelete|KJS::ReadOnly, 0, &DOMExceptionProtoTableEntries[33] }/* 2077701548 */ ,
   { "NETWORK_ERR", static_cast<int>(DOM::DOMException::NETWORK_ERR), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2966227879 */ ,
   { "URL_MISMATCH_ERR", static_cast<int>(DOM::DOMException::URL_MISMATCH_ERR), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2730271585 */ ,
   { "QUOTA_EXCEEDED_ERR", static_cast<int>(DOM::DOMException::QUOTA_EXCEEDED_ERR), KJS::DontDelete|KJS::ReadOnly, 0, &DOMExceptionProtoTableEntries[37] }/* 1015914524 */ ,
   { "TIMEOUT_ERR", static_cast<int>(DOM::DOMException::TIMEOUT_ERR), KJS::DontDelete|KJS::ReadOnly, 0, &DOMExceptionProtoTableEntries[38] }/* 2087574920 */ ,
   { "NOT_READABLE_ERR", static_cast<int>(DOM::DOMException::NOT_READABLE_ERR), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 4209940507 */ ,
   { "ENCODING_ERR", static_cast<int>(DOM::DOMException::ENCODING_ERR), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1604112266 */ 
};

const struct KJS::HashTable DOMExceptionProtoTable = { 2, 39, DOMExceptionProtoTableEntries, 29 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMNamedNodesCollectionTableEntries[] = {
   { "length", static_cast<int>(KJS::DOMNamedNodesCollection::Length), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2484182065 */ 
};

const struct KJS::HashTable DOMNamedNodesCollectionTable = { 2, 1, DOMNamedNodesCollectionTableEntries, 1 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMCharacterDataTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "data", static_cast<int>(DOMCharacterData::Data), KJS::DontDelete, 0, &DOMCharacterDataTableEntries[2] }/* 3260053779 */ ,
   { "length", static_cast<int>(DOMCharacterData::Length), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2484182065 */ 
};

const struct KJS::HashTable DOMCharacterDataTable = { 2, 3, DOMCharacterDataTableEntries, 2 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMCharacterDataProtoTableEntries[] = {
   { "appendData", static_cast<int>(DOMCharacterData::AppendData), KJS::DontDelete|KJS::Function, 1, &DOMCharacterDataProtoTableEntries[7] }/* 3473378055 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "substringData", static_cast<int>(DOMCharacterData::SubstringData), KJS::DontDelete|KJS::Function, 2, nullptr }/* 1356799733 */ ,
   { "deleteData", static_cast<int>(DOMCharacterData::DeleteData), KJS::DontDelete|KJS::Function, 2, nullptr }/* 3014169784 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "insertData", static_cast<int>(DOMCharacterData::InsertData), KJS::DontDelete|KJS::Function, 2, nullptr }/* 299916811 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "replaceData", static_cast<int>(DOMCharacterData::ReplaceData), KJS::DontDelete|KJS::Function, 2, nullptr }/* 1456114275 */ 
};

const struct KJS::HashTable DOMCharacterDataProtoTable = { 2, 8, DOMCharacterDataProtoTableEntries, 7 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMTextTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "wholeText", static_cast<int>(DOMText::WholeText), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3190849017 */ 
};

const struct KJS::HashTable DOMTextTable = { 2, 2, DOMTextTableEntries, 2 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMTextProtoTableEntries[] = {
   { "splitText", static_cast<int>(DOMText::SplitText), KJS::DontDelete|KJS::Function, 1, nullptr }/* 3932827060 */ ,
   { "replaceWholeText", static_cast<int>(DOMText::ReplaceWholeText), KJS::DontDelete|KJS::Function, 1, nullptr }/* 994627149 */ 
};

const struct KJS::HashTable DOMTextProtoTable = { 2, 2, DOMTextProtoTableEntries, 2 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMCommentProtoTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr }
};

const struct KJS::HashTable DOMCommentProtoTable = { 2, 1, DOMCommentProtoTableEntries, 1 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMDocumentFragmentProtoTableEntries[] = {
   { "querySelector", static_cast<int>(DOMDocumentFragment::QuerySelector), KJS::DontDelete|KJS::Function, 1, nullptr }/* 2206159170 */ ,
   { "querySelectorAll", static_cast<int>(DOMDocumentFragment::QuerySelectorAll), KJS::DontDelete|KJS::Function, 1, nullptr }/* 2663264535 */ 
};

const struct KJS::HashTable DOMDocumentFragmentProtoTable = { 2, 2, DOMDocumentFragmentProtoTableEntries, 2 };

} // namespace

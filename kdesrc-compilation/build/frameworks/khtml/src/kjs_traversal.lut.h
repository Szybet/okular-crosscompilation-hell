/* Automatically generated from /home/szybet/kdesrc/frameworks/khtml/src/ecma/kjs_traversal.cpp using /mnt/HDD/Project/Public/okulartry/okular-things/share/kf5/kjs/create_hash_table. DO NOT EDIT ! */

namespace KJS {

static const struct KJS::HashEntry DOMNodeIteratorTableEntries[] = {
   { "filter", static_cast<int>(DOMNodeIterator::Filter), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1342131950 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "root", static_cast<int>(DOMNodeIterator::Root), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2943923982 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "whatToShow", static_cast<int>(DOMNodeIterator::WhatToShow), KJS::DontDelete|KJS::ReadOnly, 0, &DOMNodeIteratorTableEntries[5] }/* 2397099944 */ ,
   { "expandEntityReferences", static_cast<int>(DOMNodeIterator::ExpandEntityReferences), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 4037630574 */ 
};

const struct KJS::HashTable DOMNodeIteratorTable = { 2, 6, DOMNodeIteratorTableEntries, 5 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMNodeIteratorProtoTableEntries[] = {
   { "nextNode", static_cast<int>(DOMNodeIterator::NextNode), KJS::DontDelete|KJS::Function, 0, &DOMNodeIteratorProtoTableEntries[3] }/* 3926846592 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "previousNode", static_cast<int>(DOMNodeIterator::PreviousNode), KJS::DontDelete|KJS::Function, 0, nullptr }/* 2598286970 */ ,
   { "detach", static_cast<int>(DOMNodeIterator::Detach), KJS::DontDelete|KJS::Function, 0, nullptr }/* 1153175997 */ 
};

const struct KJS::HashTable DOMNodeIteratorProtoTable = { 2, 4, DOMNodeIteratorProtoTableEntries, 3 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry NodeFilterConstructorTableEntries[] = {
   { "FILTER_SKIP", static_cast<int>(DOM::NodeFilter::FILTER_SKIP), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2266269677 */ ,
   { "SHOW_ATTRIBUTE", static_cast<int>(DOM::NodeFilter::SHOW_ATTRIBUTE), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 615313012 */ ,
   { "FILTER_REJECT", static_cast<int>(DOM::NodeFilter::FILTER_REJECT), KJS::DontDelete|KJS::ReadOnly, 0, &NodeFilterConstructorTableEntries[18] }/* 4293879620 */ ,
   { "SHOW_PROCESSING_INSTRUCTION", static_cast<int>(DOM::NodeFilter::SHOW_PROCESSING_INSTRUCTION), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2900938058 */ ,
   { "SHOW_DOCUMENT_FRAGMENT", static_cast<int>(DOM::NodeFilter::SHOW_DOCUMENT_FRAGMENT), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3364666439 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "SHOW_DOCUMENT", static_cast<int>(DOM::NodeFilter::SHOW_DOCUMENT), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 4066941388 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "SHOW_COMMENT", static_cast<int>(DOM::NodeFilter::SHOW_COMMENT), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1400305206 */ ,
   { "SHOW_ENTITY_REFERENCE", static_cast<int>(DOM::NodeFilter::SHOW_ENTITY_REFERENCE), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2612756104 */ ,
   { "FILTER_ACCEPT", static_cast<int>(DOM::NodeFilter::FILTER_ACCEPT), KJS::DontDelete|KJS::ReadOnly, 0, &NodeFilterConstructorTableEntries[17] }/* 3585062129 */ ,
   { "SHOW_ENTITY", static_cast<int>(DOM::NodeFilter::SHOW_ENTITY), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1269181744 */ ,
   { "SHOW_CDATA_SECTION", static_cast<int>(DOM::NodeFilter::SHOW_CDATA_SECTION), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 4114350960 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "SHOW_ALL", static_cast<int>(DOM::NodeFilter::SHOW_ALL), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2866768631 */ ,
   { "SHOW_DOCUMENT_TYPE", static_cast<int>(DOM::NodeFilter::SHOW_DOCUMENT_TYPE), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2165878165 */ ,
   { "SHOW_ELEMENT", static_cast<int>(DOM::NodeFilter::SHOW_ELEMENT), KJS::DontDelete|KJS::ReadOnly, 0, &NodeFilterConstructorTableEntries[19] }/* 2837101076 */ ,
   { "SHOW_TEXT", static_cast<int>(DOM::NodeFilter::SHOW_TEXT), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1605147397 */ ,
   { "SHOW_NOTATION", static_cast<int>(DOM::NodeFilter::SHOW_NOTATION), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3472582921 */ 
};

const struct KJS::HashTable NodeFilterConstructorTable = { 2, 20, NodeFilterConstructorTableEntries, 17 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMTreeWalkerTableEntries[] = {
   { "filter", static_cast<int>(DOMTreeWalker::Filter), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1342131950 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "root", static_cast<int>(DOMTreeWalker::Root), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2943923982 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "whatToShow", static_cast<int>(DOMTreeWalker::WhatToShow), KJS::DontDelete|KJS::ReadOnly, 0, &DOMTreeWalkerTableEntries[5] }/* 2397099944 */ ,
   { "expandEntityReferences", static_cast<int>(DOMTreeWalker::ExpandEntityReferences), KJS::DontDelete|KJS::ReadOnly, 0, &DOMTreeWalkerTableEntries[6] }/* 4037630574 */ ,
   { "currentNode", static_cast<int>(DOMTreeWalker::CurrentNode), KJS::DontDelete, 0, nullptr }/* 4253162199 */ 
};

const struct KJS::HashTable DOMTreeWalkerTable = { 2, 7, DOMTreeWalkerTableEntries, 5 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMTreeWalkerProtoTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "nextSibling", static_cast<int>(DOMTreeWalker::NextSibling), KJS::DontDelete|KJS::Function, 0, nullptr }/* 4268664444 */ ,
   { "parentNode", static_cast<int>(DOMTreeWalker::ParentNode), KJS::DontDelete|KJS::Function, 0, &DOMTreeWalkerProtoTableEntries[7] }/* 3796390601 */ ,
   { "nextNode", static_cast<int>(DOMTreeWalker::NextNode), KJS::DontDelete|KJS::Function, 0, nullptr }/* 3926846592 */ ,
   { "lastChild", static_cast<int>(DOMTreeWalker::LastChild), KJS::DontDelete|KJS::Function, 0, &DOMTreeWalkerProtoTableEntries[8] }/* 4207761045 */ ,
   { "previousNode", static_cast<int>(DOMTreeWalker::PreviousNode), KJS::DontDelete|KJS::Function, 0, nullptr }/* 2598286970 */ ,
   { "firstChild", static_cast<int>(DOMTreeWalker::FirstChild), KJS::DontDelete|KJS::Function, 0, nullptr }/* 1669569499 */ ,
   { "previousSibling", static_cast<int>(DOMTreeWalker::PreviousSibling), KJS::DontDelete|KJS::Function, 0, nullptr }/* 3892386692 */ 
};

const struct KJS::HashTable DOMTreeWalkerProtoTable = { 2, 9, DOMTreeWalkerProtoTableEntries, 7 };

} // namespace

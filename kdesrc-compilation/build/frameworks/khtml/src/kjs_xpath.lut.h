/* Automatically generated from /home/szybet/kdesrc/frameworks/khtml/src/ecma/kjs_xpath.cpp using /mnt/HDD/Project/Public/okulartry/okular-things/share/kf5/kjs/create_hash_table. DO NOT EDIT ! */

namespace KJS {

static const struct KJS::HashEntry XPathResultConstantsTableEntries[] = {
   { "ORDERED_NODE_ITERATOR_TYPE", static_cast<int>(DOM::XPath::ORDERED_NODE_ITERATOR_TYPE), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1450971405 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "FIRST_ORDERED_NODE_TYPE", static_cast<int>(DOM::XPath::FIRST_ORDERED_NODE_TYPE), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 811254524 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "STRING_TYPE", static_cast<int>(DOM::XPath::STRING_TYPE), KJS::DontDelete|KJS::ReadOnly, 0, &XPathResultConstantsTableEntries[15] }/* 1593721579 */ ,
   { "ANY_TYPE", static_cast<int>(DOM::XPath::ANY_TYPE), KJS::DontDelete|KJS::ReadOnly, 0, &XPathResultConstantsTableEntries[13] }/* 1749596780 */ ,
   { "BOOLEAN_TYPE", static_cast<int>(DOM::XPath::BOOLEAN_TYPE), KJS::DontDelete|KJS::ReadOnly, 0, &XPathResultConstantsTableEntries[16] }/* 1532999465 */ ,
   { "UNORDERED_NODE_ITERATOR_TYPE", static_cast<int>(DOM::XPath::UNORDERED_NODE_ITERATOR_TYPE), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1800891519 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "NUMBER_TYPE", static_cast<int>(DOM::XPath::NUMBER_TYPE), KJS::DontDelete|KJS::ReadOnly, 0, &XPathResultConstantsTableEntries[14] }/* 3954218602 */ ,
   { "UNORDERED_NODE_SNAPSHOT_TYPE", static_cast<int>(DOM::XPath::UNORDERED_NODE_SNAPSHOT_TYPE), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3213331572 */ ,
   { "ORDERED_NODE_SNAPSHOT_TYPE", static_cast<int>(DOM::XPath::ORDERED_NODE_SNAPSHOT_TYPE), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1164949183 */ ,
   { "ANY_UNORDERED_NODE_TYPE", static_cast<int>(DOM::XPath::ANY_UNORDERED_NODE_TYPE), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1668332910 */ 
};

const struct KJS::HashTable XPathResultConstantsTable = { 2, 17, XPathResultConstantsTableEntries, 13 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry XPathResultProtoTableEntries[] = {
   { "iterateNext", static_cast<int>(XPathResult::IterateNext), KJS::DontDelete|KJS::Function, 0, nullptr }/* 2012909937 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "snapshotItem", static_cast<int>(XPathResult::SnapshotItem), KJS::DontDelete|KJS::Function, 1, nullptr }/* 1223903666 */ 
};

const struct KJS::HashTable XPathResultProtoTable = { 2, 3, XPathResultProtoTableEntries, 3 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry XPathResultTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "invalidIteratorState", static_cast<int>(XPathResult::InvalidIteratorState), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3038679667 */ ,
   { "resultType", static_cast<int>(XPathResult::ResultType), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1185182209 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "singleNodeValue", static_cast<int>(XPathResult::SingleNodeValue), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1035659850 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "stringValue", static_cast<int>(XPathResult::StringValue), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 353005539 */ ,
   { "numberValue", static_cast<int>(XPathResult::NumberValue), KJS::DontDelete|KJS::ReadOnly, 0, &XPathResultTableEntries[11] }/* 2955016358 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "booleanValue", static_cast<int>(XPathResult::BooleanValue), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1766053189 */ ,
   { "snapshotLength", static_cast<int>(XPathResult::SnapshotLength), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1557217923 */ 
};

const struct KJS::HashTable XPathResultTable = { 2, 12, XPathResultTableEntries, 11 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry XPathExpressionProtoTableEntries[] = {
   { "evaluate", static_cast<int>(XPathExpression::Evaluate), KJS::DontDelete|KJS::Function, 2, nullptr }/* 2616313347 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr }
};

const struct KJS::HashTable XPathExpressionProtoTable = { 2, 3, XPathExpressionProtoTableEntries, 3 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry XPathNSResolverProtoTableEntries[] = {
   { "lookupNamespaceURI", static_cast<int>(XPathNSResolver::LookupNamespaceURI), KJS::DontDelete|KJS::Function, 1, nullptr }/* 670132671 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr }
};

const struct KJS::HashTable XPathNSResolverProtoTable = { 2, 3, XPathNSResolverProtoTableEntries, 3 };

} // namespace

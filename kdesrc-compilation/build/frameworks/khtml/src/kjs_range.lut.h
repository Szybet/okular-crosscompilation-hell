/* Automatically generated from /home/szybet/kdesrc/frameworks/khtml/src/ecma/kjs_range.cpp using /mnt/HDD/Project/Public/okulartry/okular-things/share/kf5/kjs/create_hash_table. DO NOT EDIT ! */

namespace KJS {

static const struct KJS::HashEntry DOMRangeTableEntries[] = {
   { "endOffset", static_cast<int>(DOMRange::EndOffset), KJS::DontDelete|KJS::ReadOnly, 0, &DOMRangeTableEntries[7] }/* 1388103654 */ ,
   { "startOffset", static_cast<int>(DOMRange::StartOffset), KJS::DontDelete|KJS::ReadOnly, 0, &DOMRangeTableEntries[8] }/* 2482457734 */ ,
   { "endContainer", static_cast<int>(DOMRange::EndContainer), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1447674041 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "startContainer", static_cast<int>(DOMRange::StartContainer), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1132186487 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "collapsed", static_cast<int>(DOMRange::Collapsed), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 426327265 */ ,
   { "commonAncestorContainer", static_cast<int>(DOMRange::CommonAncestorContainer), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1151756733 */ 
};

const struct KJS::HashTable DOMRangeTable = { 2, 9, DOMRangeTableEntries, 7 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMRangeProtoTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "extractContents", static_cast<int>(DOMRange::ExtractContents), KJS::DontDelete|KJS::Function, 0, nullptr }/* 3038256797 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "selectNodeContents", static_cast<int>(DOMRange::SelectNodeContents), KJS::DontDelete|KJS::Function, 1, &DOMRangeProtoTableEntries[23] }/* 4167038031 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "setStart", static_cast<int>(DOMRange::SetStart), KJS::DontDelete|KJS::Function, 2, &DOMRangeProtoTableEntries[17] }/* 112147917 */ ,
   { "surroundContents", static_cast<int>(DOMRange::SurroundContents), KJS::DontDelete|KJS::Function, 1, nullptr }/* 2281406075 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "setStartBefore", static_cast<int>(DOMRange::SetStartBefore), KJS::DontDelete|KJS::Function, 1, nullptr }/* 3058162631 */ ,
   { "setEnd", static_cast<int>(DOMRange::SetEnd), KJS::DontDelete|KJS::Function, 2, &DOMRangeProtoTableEntries[18] }/* 2216433506 */ ,
   { "deleteContents", static_cast<int>(DOMRange::DeleteContents), KJS::DontDelete|KJS::Function, 0, nullptr }/* 2213333370 */ ,
   { "setEndAfter", static_cast<int>(DOMRange::SetEndAfter), KJS::DontDelete|KJS::Function, 1, &DOMRangeProtoTableEntries[24] }/* 1129987920 */ ,
   { "setStartAfter", static_cast<int>(DOMRange::SetStartAfter), KJS::DontDelete|KJS::Function, 1, &DOMRangeProtoTableEntries[21] }/* 1438824796 */ ,
   { "selectNode", static_cast<int>(DOMRange::SelectNode), KJS::DontDelete|KJS::Function, 1, &DOMRangeProtoTableEntries[19] }/* 3872394483 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "cloneRange", static_cast<int>(DOMRange::CloneRange), KJS::DontDelete|KJS::Function, 0, nullptr }/* 1120068085 */ ,
   { "setEndBefore", static_cast<int>(DOMRange::SetEndBefore), KJS::DontDelete|KJS::Function, 1, nullptr }/* 3548211088 */ ,
   { "collapse", static_cast<int>(DOMRange::Collapse), KJS::DontDelete|KJS::Function, 1, &DOMRangeProtoTableEntries[20] }/* 3862687105 */ ,
   { "compareBoundaryPoints", static_cast<int>(DOMRange::CompareBoundaryPoints), KJS::DontDelete|KJS::Function, 2, &DOMRangeProtoTableEntries[22] }/* 414542038 */ ,
   { "cloneContents", static_cast<int>(DOMRange::CloneContents), KJS::DontDelete|KJS::Function, 0, nullptr }/* 2019395805 */ ,
   { "insertNode", static_cast<int>(DOMRange::InsertNode), KJS::DontDelete|KJS::Function, 1, nullptr }/* 3336649393 */ ,
   { "toString", static_cast<int>(DOMRange::ToString), KJS::DontDelete|KJS::Function, 0, nullptr }/* 150235932 */ ,
   { "detach", static_cast<int>(DOMRange::Detach), KJS::DontDelete|KJS::Function, 0, nullptr }/* 1153175997 */ ,
   { "createContextualFragment", static_cast<int>(DOMRange::CreateContextualFragment), KJS::DontDelete|KJS::Function, 1, nullptr }/* 313514555 */ 
};

const struct KJS::HashTable DOMRangeProtoTable = { 2, 25, DOMRangeProtoTableEntries, 17 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry RangeConstructorTableEntries[] = {
   { nullptr, 0, 0, 0, nullptr },
   { "START_TO_START", static_cast<int>(DOM::Range::START_TO_START), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2222699256 */ ,
   { "END_TO_START", static_cast<int>(DOM::Range::END_TO_START), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3738632607 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "START_TO_END", static_cast<int>(DOM::Range::START_TO_END), KJS::DontDelete|KJS::ReadOnly, 0, &RangeConstructorTableEntries[5] }/* 2943423654 */ ,
   { "END_TO_END", static_cast<int>(DOM::Range::END_TO_END), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3435826919 */ 
};

const struct KJS::HashTable RangeConstructorTable = { 2, 6, RangeConstructorTableEntries, 5 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry RangeExceptionProtoTableEntries[] = {
   { "BAD_BOUNDARYPOINTS_ERR", static_cast<int>(DOM::RangeException::BAD_BOUNDARYPOINTS_ERR), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 3628794490 */ ,
   { "INVALID_NODE_TYPE_ERR", static_cast<int>(DOM::RangeException::INVALID_NODE_TYPE_ERR), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 4055534247 */ 
};

const struct KJS::HashTable RangeExceptionProtoTable = { 2, 2, RangeExceptionProtoTableEntries, 2 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMSelectionTableEntries[] = {
   { "anchorNode", static_cast<int>(DOMSelection::AnchorNode), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 2416998031 */ ,
   { "isCollapsed", static_cast<int>(DOMSelection::IsCollapsed), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 224530937 */ ,
   { "anchorOffset", static_cast<int>(DOMSelection::AnchorOffset), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 666553078 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { nullptr, 0, 0, 0, nullptr },
   { "focusNode", static_cast<int>(DOMSelection::FocusNode), KJS::DontDelete|KJS::ReadOnly, 0, &DOMSelectionTableEntries[7] }/* 3161304956 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "focusOffset", static_cast<int>(DOMSelection::FocusOffset), KJS::DontDelete|KJS::ReadOnly, 0, &DOMSelectionTableEntries[8] }/* 3241328550 */ ,
   { "rangeCount", static_cast<int>(DOMSelection::RangeCount), KJS::DontDelete|KJS::ReadOnly, 0, nullptr }/* 1549638998 */ 
};

const struct KJS::HashTable DOMSelectionTable = { 2, 9, DOMSelectionTableEntries, 7 };

} // namespace

namespace KJS {

static const struct KJS::HashEntry DOMSelectionProtoTableEntries[] = {
   { "collapsed", static_cast<int>(DOMSelection::Collapsed), KJS::DontDelete|KJS::Function, 2, nullptr }/* 426327265 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "deleteFromDocument", static_cast<int>(DOMSelection::DeleteFromDocument), KJS::DontDelete|KJS::Function, 0, &DOMSelectionProtoTableEntries[14] }/* 3334186520 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "collapseToStart", static_cast<int>(DOMSelection::CollapseToStart), KJS::DontDelete|KJS::Function, 0, nullptr }/* 4170020989 */ ,
   { "removeRange", static_cast<int>(DOMSelection::RemoveRange), KJS::DontDelete|KJS::Function, 1, nullptr }/* 3515609063 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "collapseToEnd", static_cast<int>(DOMSelection::CollapseToEnd), KJS::DontDelete|KJS::Function, 0, &DOMSelectionProtoTableEntries[13] }/* 2904402456 */ ,
   { "addRange", static_cast<int>(DOMSelection::AddRange), KJS::DontDelete|KJS::Function, 1, nullptr }/* 4239117943 */ ,
   { "getRangeAt", static_cast<int>(DOMSelection::GetRangeAt), KJS::DontDelete|KJS::Function, 1, nullptr }/* 1305113234 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "removeAllRanges", static_cast<int>(DOMSelection::RemoveAllRanges), KJS::DontDelete|KJS::Function, 0, nullptr }/* 4080351026 */ ,
   { nullptr, 0, 0, 0, nullptr },
   { "selectAllChildren", static_cast<int>(DOMSelection::SelectAllChildren), KJS::DontDelete|KJS::Function, 1, nullptr }/* 2594002886 */ ,
   { "toString", static_cast<int>(DOMSelection::ToString), KJS::DontDelete|KJS::Function, 0, nullptr }/* 150235932 */ 
};

const struct KJS::HashTable DOMSelectionProtoTable = { 2, 15, DOMSelectionProtoTableEntries, 13 };

} // namespace

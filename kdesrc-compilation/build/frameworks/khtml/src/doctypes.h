/* C++ code produced by gperf version 3.1 */
/* Command-line: /sbin/gperf --key-positions='*' --output-file=/home/szybet/kdesrc/build/frameworks/khtml/src/doctypes.h /home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf  */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
#endif

#line 7 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"

/* //krazy:skip */
#line 10 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
struct PubIDInfo {
    enum eMode {
        eQuirks,        /* always quirks mode, unless there's an internal subset */
        eQuirks3,       /* ditto, but but pre-HTML4 (no tbody) */
        eAlmostStandards,
        eFullStandards
    };

    const char* name;
    eMode mode_if_no_sysid;
    eMode mode_if_sysid;
};
/* maximum key range = 727, duplicates = 0 */

class Perfect_Hash
{
private:
  static inline unsigned int hash (const char *str, size_t len);
public:
  static const struct PubIDInfo *findDoctypeEntry (const char *str, size_t len);
};

inline unsigned int
Perfect_Hash::hash (const char *str, size_t len)
{
  static const unsigned short asso_values[] =
    {
      731, 731, 731, 731, 731, 731, 731, 731, 731, 731,
      731, 731, 731, 731, 731, 731, 731, 731, 731, 731,
      731, 731, 731, 731, 731, 731, 731, 731, 731, 731,
      731, 731,   0, 731, 731, 731, 731, 731, 731,   0,
      731, 731, 731,   0, 731,   0,  15,   0,  10,  25,
        5,   0,   5,  15,   5,   5, 731,   5,   0, 731,
      731, 731, 731, 731, 731, 731, 731, 731, 731, 731,
      731, 731, 731, 731, 731, 731, 731, 731, 731, 731,
      731, 731, 731, 731, 731, 731, 731, 731, 731, 731,
      731, 731, 731, 731, 731, 731, 731,  10,   5,   0,
       40,   0,  20,  10,   0,   0,   0, 731,   0,   0,
       10,  45,   0,   0,   0,   0,   0,   0,   0,   0,
       10,   0,   5, 731, 731, 731, 731, 731, 731, 731,
      731, 731, 731, 731, 731, 731, 731, 731, 731, 731,
      731, 731, 731, 731, 731, 731, 731, 731, 731, 731,
      731, 731, 731, 731, 731, 731, 731, 731, 731, 731,
      731, 731, 731, 731, 731, 731, 731, 731, 731, 731,
      731, 731, 731, 731, 731, 731, 731, 731, 731, 731,
      731, 731, 731, 731, 731, 731, 731, 731, 731, 731,
      731, 731, 731, 731, 731, 731, 731, 731, 731, 731,
      731, 731, 731, 731, 731, 731, 731, 731, 731, 731,
      731, 731, 731, 731, 731, 731, 731, 731, 731, 731,
      731, 731, 731, 731, 731, 731, 731, 731, 731, 731,
      731, 731, 731, 731, 731, 731, 731, 731, 731, 731,
      731, 731, 731, 731, 731, 731, 731, 731, 731, 731,
      731, 731, 731, 731, 731, 731
    };
  unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[static_cast<unsigned char>(str[79])];
      /*FALLTHROUGH*/
      case 79:
        hval += asso_values[static_cast<unsigned char>(str[78])];
      /*FALLTHROUGH*/
      case 78:
        hval += asso_values[static_cast<unsigned char>(str[77])];
      /*FALLTHROUGH*/
      case 77:
        hval += asso_values[static_cast<unsigned char>(str[76])];
      /*FALLTHROUGH*/
      case 76:
        hval += asso_values[static_cast<unsigned char>(str[75])];
      /*FALLTHROUGH*/
      case 75:
        hval += asso_values[static_cast<unsigned char>(str[74])];
      /*FALLTHROUGH*/
      case 74:
        hval += asso_values[static_cast<unsigned char>(str[73])];
      /*FALLTHROUGH*/
      case 73:
        hval += asso_values[static_cast<unsigned char>(str[72])];
      /*FALLTHROUGH*/
      case 72:
        hval += asso_values[static_cast<unsigned char>(str[71])];
      /*FALLTHROUGH*/
      case 71:
        hval += asso_values[static_cast<unsigned char>(str[70])];
      /*FALLTHROUGH*/
      case 70:
        hval += asso_values[static_cast<unsigned char>(str[69])];
      /*FALLTHROUGH*/
      case 69:
        hval += asso_values[static_cast<unsigned char>(str[68])];
      /*FALLTHROUGH*/
      case 68:
        hval += asso_values[static_cast<unsigned char>(str[67])];
      /*FALLTHROUGH*/
      case 67:
        hval += asso_values[static_cast<unsigned char>(str[66])];
      /*FALLTHROUGH*/
      case 66:
        hval += asso_values[static_cast<unsigned char>(str[65])];
      /*FALLTHROUGH*/
      case 65:
        hval += asso_values[static_cast<unsigned char>(str[64])];
      /*FALLTHROUGH*/
      case 64:
        hval += asso_values[static_cast<unsigned char>(str[63])];
      /*FALLTHROUGH*/
      case 63:
        hval += asso_values[static_cast<unsigned char>(str[62])];
      /*FALLTHROUGH*/
      case 62:
        hval += asso_values[static_cast<unsigned char>(str[61])];
      /*FALLTHROUGH*/
      case 61:
        hval += asso_values[static_cast<unsigned char>(str[60])];
      /*FALLTHROUGH*/
      case 60:
        hval += asso_values[static_cast<unsigned char>(str[59])];
      /*FALLTHROUGH*/
      case 59:
        hval += asso_values[static_cast<unsigned char>(str[58])];
      /*FALLTHROUGH*/
      case 58:
        hval += asso_values[static_cast<unsigned char>(str[57])];
      /*FALLTHROUGH*/
      case 57:
        hval += asso_values[static_cast<unsigned char>(str[56])];
      /*FALLTHROUGH*/
      case 56:
        hval += asso_values[static_cast<unsigned char>(str[55])];
      /*FALLTHROUGH*/
      case 55:
        hval += asso_values[static_cast<unsigned char>(str[54])];
      /*FALLTHROUGH*/
      case 54:
        hval += asso_values[static_cast<unsigned char>(str[53])];
      /*FALLTHROUGH*/
      case 53:
        hval += asso_values[static_cast<unsigned char>(str[52])];
      /*FALLTHROUGH*/
      case 52:
        hval += asso_values[static_cast<unsigned char>(str[51])];
      /*FALLTHROUGH*/
      case 51:
        hval += asso_values[static_cast<unsigned char>(str[50])];
      /*FALLTHROUGH*/
      case 50:
        hval += asso_values[static_cast<unsigned char>(str[49])];
      /*FALLTHROUGH*/
      case 49:
        hval += asso_values[static_cast<unsigned char>(str[48])];
      /*FALLTHROUGH*/
      case 48:
        hval += asso_values[static_cast<unsigned char>(str[47])];
      /*FALLTHROUGH*/
      case 47:
        hval += asso_values[static_cast<unsigned char>(str[46])];
      /*FALLTHROUGH*/
      case 46:
        hval += asso_values[static_cast<unsigned char>(str[45])];
      /*FALLTHROUGH*/
      case 45:
        hval += asso_values[static_cast<unsigned char>(str[44])];
      /*FALLTHROUGH*/
      case 44:
        hval += asso_values[static_cast<unsigned char>(str[43])];
      /*FALLTHROUGH*/
      case 43:
        hval += asso_values[static_cast<unsigned char>(str[42])];
      /*FALLTHROUGH*/
      case 42:
        hval += asso_values[static_cast<unsigned char>(str[41])];
      /*FALLTHROUGH*/
      case 41:
        hval += asso_values[static_cast<unsigned char>(str[40])];
      /*FALLTHROUGH*/
      case 40:
        hval += asso_values[static_cast<unsigned char>(str[39])];
      /*FALLTHROUGH*/
      case 39:
        hval += asso_values[static_cast<unsigned char>(str[38])];
      /*FALLTHROUGH*/
      case 38:
        hval += asso_values[static_cast<unsigned char>(str[37])];
      /*FALLTHROUGH*/
      case 37:
        hval += asso_values[static_cast<unsigned char>(str[36])];
      /*FALLTHROUGH*/
      case 36:
        hval += asso_values[static_cast<unsigned char>(str[35])];
      /*FALLTHROUGH*/
      case 35:
        hval += asso_values[static_cast<unsigned char>(str[34])];
      /*FALLTHROUGH*/
      case 34:
        hval += asso_values[static_cast<unsigned char>(str[33])];
      /*FALLTHROUGH*/
      case 33:
        hval += asso_values[static_cast<unsigned char>(str[32])];
      /*FALLTHROUGH*/
      case 32:
        hval += asso_values[static_cast<unsigned char>(str[31])];
      /*FALLTHROUGH*/
      case 31:
        hval += asso_values[static_cast<unsigned char>(str[30])];
      /*FALLTHROUGH*/
      case 30:
        hval += asso_values[static_cast<unsigned char>(str[29])];
      /*FALLTHROUGH*/
      case 29:
        hval += asso_values[static_cast<unsigned char>(str[28])];
      /*FALLTHROUGH*/
      case 28:
        hval += asso_values[static_cast<unsigned char>(str[27])];
      /*FALLTHROUGH*/
      case 27:
        hval += asso_values[static_cast<unsigned char>(str[26])];
      /*FALLTHROUGH*/
      case 26:
        hval += asso_values[static_cast<unsigned char>(str[25])];
      /*FALLTHROUGH*/
      case 25:
        hval += asso_values[static_cast<unsigned char>(str[24])];
      /*FALLTHROUGH*/
      case 24:
        hval += asso_values[static_cast<unsigned char>(str[23])];
      /*FALLTHROUGH*/
      case 23:
        hval += asso_values[static_cast<unsigned char>(str[22])];
      /*FALLTHROUGH*/
      case 22:
        hval += asso_values[static_cast<unsigned char>(str[21])];
      /*FALLTHROUGH*/
      case 21:
        hval += asso_values[static_cast<unsigned char>(str[20])];
      /*FALLTHROUGH*/
      case 20:
        hval += asso_values[static_cast<unsigned char>(str[19])];
      /*FALLTHROUGH*/
      case 19:
        hval += asso_values[static_cast<unsigned char>(str[18])];
      /*FALLTHROUGH*/
      case 18:
        hval += asso_values[static_cast<unsigned char>(str[17])];
      /*FALLTHROUGH*/
      case 17:
        hval += asso_values[static_cast<unsigned char>(str[16])];
      /*FALLTHROUGH*/
      case 16:
        hval += asso_values[static_cast<unsigned char>(str[15])];
      /*FALLTHROUGH*/
      case 15:
        hval += asso_values[static_cast<unsigned char>(str[14])];
      /*FALLTHROUGH*/
      case 14:
        hval += asso_values[static_cast<unsigned char>(str[13])];
      /*FALLTHROUGH*/
      case 13:
        hval += asso_values[static_cast<unsigned char>(str[12])];
      /*FALLTHROUGH*/
      case 12:
        hval += asso_values[static_cast<unsigned char>(str[11])];
      /*FALLTHROUGH*/
      case 11:
        hval += asso_values[static_cast<unsigned char>(str[10])];
      /*FALLTHROUGH*/
      case 10:
        hval += asso_values[static_cast<unsigned char>(str[9])];
      /*FALLTHROUGH*/
      case 9:
        hval += asso_values[static_cast<unsigned char>(str[8])];
      /*FALLTHROUGH*/
      case 8:
        hval += asso_values[static_cast<unsigned char>(str[7])];
      /*FALLTHROUGH*/
      case 7:
        hval += asso_values[static_cast<unsigned char>(str[6])];
      /*FALLTHROUGH*/
      case 6:
        hval += asso_values[static_cast<unsigned char>(str[5])];
      /*FALLTHROUGH*/
      case 5:
        hval += asso_values[static_cast<unsigned char>(str[4])];
      /*FALLTHROUGH*/
      case 4:
        hval += asso_values[static_cast<unsigned char>(str[3])];
      /*FALLTHROUGH*/
      case 3:
        hval += asso_values[static_cast<unsigned char>(str[2])];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[static_cast<unsigned char>(str[1])];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[static_cast<unsigned char>(str[0])];
        break;
    }
  return hval;
}

const struct PubIDInfo *
Perfect_Hash::findDoctypeEntry (const char *str, size_t len)
{
  enum
    {
      TOTAL_KEYWORDS = 78,
      MIN_WORD_LENGTH = 4,
      MAX_WORD_LENGTH = 80,
      MIN_HASH_VALUE = 4,
      MAX_HASH_VALUE = 730
    };

  static const struct PubIDInfo wordlist[] =
    {
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 100 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"html", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 90 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//w3c//dtd w3 html//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 57 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//ietf//dtd html//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 37 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//ietf//dtd html 3//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
#line 82 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//w3c//dtd html 3.2//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 54 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//ietf//dtd html strict//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
#line 44 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//ietf//dtd html level 3//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 42 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//ietf//dtd html level 2//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 52 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//ietf//dtd html strict level 3//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 38 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//ietf//dtd html level 0//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 50 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//ietf//dtd html strict level 2//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 36 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//ietf//dtd html 3.2//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
#line 46 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//ietf//dtd html strict level 0//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
#line 78 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//w30//dtd w3 html 2.0//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 33 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//ietf//dtd html 3.0//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
#line 59 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//ietf//dtd html//en//3.0", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
#line 34 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//ietf//dtd html 3.0//en//", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 40 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//ietf//dtd html level 1//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
#line 31 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//ietf//dtd html 2.0//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
#line 58 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//ietf//dtd html//en//2.0", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 56 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//ietf//dtd html strict//en//3.0", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
#line 45 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//ietf//dtd html level 3//en//3.0", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 48 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//ietf//dtd html strict level 1//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
#line 30 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//ietf//dtd html 2.0 strict//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
#line 55 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//ietf//dtd html strict//en//2.0", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 53 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//ietf//dtd html strict level 3//en//3.0", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 27 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//ietf//dtd html 2.0 level 2//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
#line 43 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//ietf//dtd html level 2//en//2.0", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
#line 81 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//w3c//dtd html 3.2 final//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
#line 32 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//ietf//dtd html 2.1e//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 84 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//w3c//dtd html 4.0 frameset//en", PubIDInfo::eQuirks, PubIDInfo::eQuirks},
#line 39 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//ietf//dtd html level 0//en//2.0", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
#line 29 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//ietf//dtd html 2.0 strict level 2//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
#line 51 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//ietf//dtd html strict level 2//en//2.0", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
#line 94 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//w3o//dtd w3 html 3.0//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
#line 98 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//webtechs//dtd mozilla html//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
#line 95 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//w3o//dtd w3 html 3.0//en//", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
#line 93 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//w3c//dtd xhtml 1.1//en", PubIDInfo::eAlmostStandards, PubIDInfo::eAlmostStandards},
#line 47 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//ietf//dtd html strict level 0//en//2.0", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 79 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//w3c//dtd html 3 1995-03-24//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 96 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//w3o//dtd w3 html strict 3.0//en//", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 26 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//ietf//dtd html 2.0 level 1//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
#line 41 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//ietf//dtd html level 1//en//2.0", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 35 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//ietf//dtd html 3.2 final//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 28 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//ietf//dtd html 2.0 strict level 1//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
#line 49 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//ietf//dtd html strict level 1//en//2.0", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 86 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//w3c//dtd html 4.01 frameset//en", PubIDInfo::eQuirks, PubIDInfo::eAlmostStandards},
#line 80 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//w3c//dtd html 3.2 draft//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
#line 83 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//w3c//dtd html 3.2s draft//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 91 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//w3c//dtd xhtml 1.0 frameset//en", PubIDInfo::eAlmostStandards, PubIDInfo::eAlmostStandards},
#line 89 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//w3c//dtd html experimental 970421//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 60 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//metrius//dtd metrius presentational//en", PubIDInfo::eQuirks, PubIDInfo::eQuirks},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 97 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//webtechs//dtd mozilla html 2.0//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 99 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-/w3c/dtd html 4.0 transitional/en", PubIDInfo::eQuirks, PubIDInfo::eQuirks},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 85 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//w3c//dtd html 4.0 transitional//en", PubIDInfo::eQuirks, PubIDInfo::eQuirks},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 88 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//w3c//dtd html experimental 19960712//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 67 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//netscape comm. corp.//dtd html//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
#line 87 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//w3c//dtd html 4.01 transitional//en", PubIDInfo::eQuirks, PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 92 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//w3c//dtd xhtml 1.0 transitional//en", PubIDInfo::eAlmostStandards, PubIDInfo::eAlmostStandards},
#line 68 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//netscape comm. corp.//dtd strict html//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 74 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//spyglass//dtd html 2.0 extended//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 25 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//as//dtd html 3.0 aswedit + extensions//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
#line 75 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//sq//dtd html 2.0 hotmetal + extensions//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 76 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//sun microsystems corp.//dtd hotjava html//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 77 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//sun microsystems corp.//dtd hotjava strict html//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 69 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//o'reilly and associates//dtd html 2.0//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 65 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//microsoft//dtd internet explorer 3.0 html//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 62 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//microsoft//dtd internet explorer 2.0 html//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 64 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//microsoft//dtd internet explorer 3.0 html strict//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 23 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"+//silmaril//dtd html pro v0r11 19970101//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
#line 61 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//microsoft//dtd internet explorer 2.0 html strict//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 66 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//microsoft//dtd internet explorer 3.0 tables//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 63 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//microsoft//dtd internet explorer 2.0 tables//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 24 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//advasoft ltd//dtd html 3.0 aswedit + extensions//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 70 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//o'reilly and associates//dtd html extended 1.0//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 71 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//o'reilly and associates//dtd html extended relaxed 1.0//en", PubIDInfo::eQuirks3, PubIDInfo::eQuirks3},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 73 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//softquad//dtd hotmetal pro 4.0::19971010::extensions to html 4.0//en", PubIDInfo::eQuirks, PubIDInfo::eQuirks},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
      {"",PubIDInfo::eAlmostStandards,PubIDInfo::eAlmostStandards},
#line 72 "/home/szybet/kdesrc/frameworks/khtml/src/html/doctypes.gperf"
      {"-//softquad software//dtd hotmetal pro 6.0::19990601::extensions to html 4.0//en", PubIDInfo::eQuirks, PubIDInfo::eQuirks}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}

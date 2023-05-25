/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_KIOTRADER_HOME_SZYBET_KDESRC_BUILD_FRAMEWORKS_KSERVICE_SRC_YACC_H_INCLUDED
# define YY_KIOTRADER_HOME_SZYBET_KDESRC_BUILD_FRAMEWORKS_KSERVICE_SRC_YACC_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int kiotraderdebug;
#endif
/* "%code requires" blocks.  */
#line 18 "/home/szybet/kdesrc/frameworks/kservice/src/services/yacc.y"

#ifndef YY_TYPEDEF_YY_SCANNER_T
#define YY_TYPEDEF_YY_SCANNER_T
typedef void *yyscan_t;
#endif

#line 56 "/home/szybet/kdesrc/build/frameworks/kservice/src/yacc.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NOT = 258,                     /* NOT  */
    EQ = 259,                      /* EQ  */
    EQI = 260,                     /* EQI  */
    NEQ = 261,                     /* NEQ  */
    NEQI = 262,                    /* NEQI  */
    LEQ = 263,                     /* LEQ  */
    GEQ = 264,                     /* GEQ  */
    LE = 265,                      /* LE  */
    GR = 266,                      /* GR  */
    OR = 267,                      /* OR  */
    AND = 268,                     /* AND  */
    TOKEN_IN = 269,                /* TOKEN_IN  */
    TOKEN_IN_SUBSTRING = 270,      /* TOKEN_IN_SUBSTRING  */
    MATCH_INSENSITIVE = 271,       /* MATCH_INSENSITIVE  */
    MATCH_SUBSEQUENCE = 272,       /* MATCH_SUBSEQUENCE  */
    MATCH_SUBSEQUENCE_INSENSITIVE = 273, /* MATCH_SUBSEQUENCE_INSENSITIVE  */
    TOKEN_IN_INSENSITIVE = 274,    /* TOKEN_IN_INSENSITIVE  */
    TOKEN_IN_SUBSTRING_INSENSITIVE = 275, /* TOKEN_IN_SUBSTRING_INSENSITIVE  */
    EXIST = 276,                   /* EXIST  */
    MAX = 277,                     /* MAX  */
    MIN = 278,                     /* MIN  */
    VAL_BOOL = 279,                /* VAL_BOOL  */
    VAL_STRING = 280,              /* VAL_STRING  */
    VAL_ID = 281,                  /* VAL_ID  */
    VAL_NUM = 282,                 /* VAL_NUM  */
    VAL_FLOAT = 283                /* VAL_FLOAT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 26 "/home/szybet/kdesrc/frameworks/kservice/src/services/yacc.y"

     char valb;
     int vali;
     double vald;
     char *name;
     void *ptr;

#line 109 "/home/szybet/kdesrc/build/frameworks/kservice/src/yacc.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif




int kiotraderparse (yyscan_t scanner);


#endif /* !YY_KIOTRADER_HOME_SZYBET_KDESRC_BUILD_FRAMEWORKS_KSERVICE_SRC_YACC_H_INCLUDED  */

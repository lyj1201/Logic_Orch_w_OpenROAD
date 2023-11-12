/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_SPEFPARSE_MNT_RAID10_YINGJIE_OPENROAD_BUILD_SRC_STA_SPEFPARSE_HH_INCLUDED
# define YY_SPEFPARSE_MNT_RAID10_YINGJIE_OPENROAD_BUILD_SRC_STA_SPEFPARSE_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int SpefParse_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SPEF = 258,
    DESIGN = 259,
    DATE = 260,
    VENDOR = 261,
    PROGRAM = 262,
    DESIGN_FLOW = 263,
    PVERSION = 264,
    DIVIDER = 265,
    DELIMITER = 266,
    BUS_DELIMITER = 267,
    T_UNIT = 268,
    C_UNIT = 269,
    R_UNIT = 270,
    L_UNIT = 271,
    NAME_MAP = 272,
    POWER_NETS = 273,
    GROUND_NETS = 274,
    KW_C = 275,
    KW_L = 276,
    KW_S = 277,
    KW_D = 278,
    KW_V = 279,
    PORTS = 280,
    PHYSICAL_PORTS = 281,
    DEFINE = 282,
    PDEFINE = 283,
    D_NET = 284,
    D_PNET = 285,
    R_NET = 286,
    R_PNET = 287,
    END = 288,
    CONN = 289,
    CAP = 290,
    RES = 291,
    INDUC = 292,
    KW_P = 293,
    KW_I = 294,
    KW_N = 295,
    DRIVER = 296,
    CELL = 297,
    C2_R1_C1 = 298,
    LOADS = 299,
    RC = 300,
    KW_Q = 301,
    KW_K = 302,
    INTEGER = 303,
    FLOAT = 304,
    QSTRING = 305,
    INDEX = 306,
    IDENT = 307,
    NAME = 308
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 32 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1909  */

  char ch;
  char *string;
  int integer;
  float number;
  sta::StringSeq *string_seq;
  sta::PortDirection *port_dir;
  sta::SpefRspfPi *pi;
  sta::SpefTriple *triple;
  sta::Pin *pin;
  sta::Net *net;

#line 121 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.hh" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE SpefParse_lval;

int SpefParse_parse (void);

#endif /* !YY_SPEFPARSE_MNT_RAID10_YINGJIE_OPENROAD_BUILD_SRC_STA_SPEFPARSE_HH_INCLUDED  */

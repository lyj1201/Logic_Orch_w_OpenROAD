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

#ifndef YY_VERILOGPARSE_MNT_RAID10_YINGJIE_OPENROAD_BUILD_SRC_STA_VERILOGPARSE_HH_INCLUDED
# define YY_VERILOGPARSE_MNT_RAID10_YINGJIE_OPENROAD_BUILD_SRC_STA_VERILOGPARSE_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int VerilogParse_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    CONSTANT = 259,
    ID = 260,
    STRING = 261,
    MODULE = 262,
    ENDMODULE = 263,
    ASSIGN = 264,
    PARAMETER = 265,
    DEFPARAM = 266,
    WIRE = 267,
    WAND = 268,
    WOR = 269,
    TRI = 270,
    INPUT = 271,
    OUTPUT = 272,
    INOUT = 273,
    SUPPLY1 = 274,
    SUPPLY0 = 275,
    REG = 276,
    NEG = 277
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 32 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1909  */

  int ival;
  const char *string;
  const char *constant;
  sta::VerilogModule *module;
  sta::VerilogStmt *stmt;
  sta::VerilogStmtSeq *stmt_seq;
  sta::PortDirection *port_type;
  sta::VerilogDclArgSeq *dcl_arg_seq;
  sta::VerilogDclArg *dcl_arg;
  sta::VerilogAssign *assign;
  sta::VerilogInst *inst;
  sta::VerilogNet *net;
  sta::VerilogNetBitSelect *net_bit;
  sta::VerilogNetSeq *nets;

#line 94 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.hh" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE VerilogParse_lval;

int VerilogParse_parse (void);

#endif /* !YY_VERILOGPARSE_MNT_RAID10_YINGJIE_OPENROAD_BUILD_SRC_STA_VERILOGPARSE_HH_INCLUDED  */

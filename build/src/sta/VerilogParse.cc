/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         VerilogParse_parse
#define yylex           VerilogParse_lex
#define yyerror         VerilogParse_error
#define yydebug         VerilogParse_debug
#define yynerrs         VerilogParse_nerrs

#define yylval          VerilogParse_lval
#define yychar          VerilogParse_char

/* Copy the first part of user declarations.  */
#line 1 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:339  */


// OpenSTA, Static Timing Analyzer
// Copyright (c) 2022, Parallax Software, Inc.
// 
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program. If not, see <https://www.gnu.org/licenses/>.

#include <stdlib.h>

#include "PortDirection.hh"
#include "verilog/VerilogReaderPvt.hh"
#include "VerilogReader.hh"

int VerilogLex_lex();
#define VerilogParse_lex VerilogLex_lex
// Use yacc generated parser errors.
#define YYERROR_VERBOSE


#line 105 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "VerilogParse.hh".  */
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
#line 32 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:355  */

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

#line 185 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE VerilogParse_lval;

int VerilogParse_parse (void);

#endif /* !YY_VERILOGPARSE_MNT_RAID10_YINGJIE_OPENROAD_BUILD_SRC_STA_VERILOGPARSE_HH_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 75 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:358  */


#line 204 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   332

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  132
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  244

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   277

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    39,     2,     2,     2,     2,
      28,    29,    24,    23,    30,    22,    31,    25,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    35,    27,
       2,    37,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    34,     2,    36,     2,     2,    38,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    32,     2,    33,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    26
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    81,    81,    84,    86,    90,    90,    95,    97,    99,
     101,   106,   110,   115,   116,   118,   123,   124,   128,   132,
     137,   138,   139,   143,   147,   151,   160,   160,   162,   162,
     168,   169,   170,   171,   172,   173,   174,   175,   180,   181,
     183,   193,   194,   195,   196,   197,   202,   207,   209,   214,
     216,   221,   225,   233,   237,   241,   245,   246,   248,   250,
     252,   254,   256,   261,   266,   268,   273,   277,   285,   285,
     287,   287,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   305,   309,   316,   318,   323,   328,   332,   337,   337,
     342,   343,   347,   347,   349,   349,   355,   359,   360,   362,
     367,   368,   369,   374,   378,   384,   388,   396,   398,   400,
     402,   405,   407,   410,   412,   417,   418,   419,   423,   424,
     425,   429,   434,   439,   444,   449,   454,   458,   463,   464,
     465,   466,   467
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "CONSTANT", "ID", "STRING",
  "MODULE", "ENDMODULE", "ASSIGN", "PARAMETER", "DEFPARAM", "WIRE", "WAND",
  "WOR", "TRI", "INPUT", "OUTPUT", "INOUT", "SUPPLY1", "SUPPLY0", "REG",
  "'-'", "'+'", "'*'", "'/'", "NEG", "';'", "'('", "')'", "','", "'.'",
  "'{'", "'}'", "'['", "':'", "']'", "'='", "'`'", "'#'", "$accept",
  "file", "modules", "module_begin", "@1", "module", "port_list", "port",
  "port_expr", "port_refs", "port_ref", "port_dcls", "port_dcl", "@2",
  "@3", "port_dcl_type", "stmts", "stmt", "stmt_seq", "parameter",
  "parameter_dcls", "parameter_dcl", "parameter_expr", "defparam",
  "param_values", "param_value", "declaration", "@4", "@5", "dcl_type",
  "dcl_args", "dcl_arg", "continuous_assign", "net_assignments",
  "net_assignment", "@6", "net_assign_lhs", "instance", "@7", "@8",
  "parameter_values", "parameter_exprs", "inst_pins", "inst_ordered_pins",
  "inst_named_pins", "inst_named_pin", "named_pin_net_expr", "net_named",
  "net_scalar", "net_bit_select", "net_part_select", "net_constant",
  "net_expr_concat", "net_exprs", "net_expr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,    45,    43,    42,    47,   277,    59,    40,    41,
      44,    46,   123,   125,    91,    58,    93,    61,    96,    35
};
# endif

#define YYPACT_NINF -82

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-82)))

#define YYTABLE_NINF -122

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -82,    11,    28,   -82,   -82,    45,   -82,   -82,    87,   -82,
     140,   187,    34,    61,    39,    84,    51,    49,    86,    73,
     -82,   -82,   -82,   184,   -82,    55,   -82,   -82,   -82,    68,
      58,   -82,    15,     4,   105,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,    82,
     -82,   -82,   121,   -82,   -82,   -82,   -82,   -82,   -82,   107,
      79,   -82,   113,     2,   128,   143,    32,   108,   -82,   157,
     125,    17,   114,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     129,   188,   119,   -82,   148,   124,   -82,    32,   196,   214,
     227,    40,    86,   -82,   -82,   -82,   -82,   136,   -82,   -82,
     -82,   -82,   215,   198,   206,   219,   -82,   -82,   -82,   -82,
     -82,   -82,   156,   -82,   -82,    15,   251,    20,   216,   -82,
     266,    24,   -82,   105,   163,   -82,   286,   287,   -82,   -82,
     -82,   262,   -82,   247,   267,   257,    12,    89,   265,    17,
     -82,   -82,    17,   -82,   -82,   -82,   -82,   115,   115,   289,
     186,   292,   -82,   -82,   186,   -82,   -82,    32,   261,   263,
     -82,   -82,   -82,   294,   293,   271,   272,   273,   -82,   -82,
      89,   186,   192,    12,   -82,   -82,   -82,   154,   -82,   115,
     115,   115,   115,   268,   -82,   298,   -82,   269,    42,   279,
      17,   276,   182,   -82,   115,   280,   -82,   229,   229,   -82,
     -82,   266,   274,    32,    27,   305,   -82,   -82,   -82,   -82,
     186,   284,   189,    32,   -82,   -16,   -82,   283,   -82,   -82,
     -82,   234,   -82,   -82,   190,   -82,   310,   -82,   311,   288,
     -82,   238,   281,    75,   290,   295,   -82,   291,   -82,   118,
     -82,   -82,   296,   -82
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     2,     1,     5,     0,     4,     6,     0,    38,
       0,     0,   121,    30,    35,    32,     0,     0,     0,     0,
      11,    13,    16,     0,    23,    26,    20,    21,    22,     0,
      92,     7,     0,     0,     0,    79,    78,    80,    77,    72,
      74,    73,    76,    75,    39,    40,    41,    42,    43,    68,
      46,    44,     0,    31,    36,    37,    34,    33,    38,     0,
       0,    18,     0,     0,     0,     0,     0,     0,    45,     0,
       0,     0,     0,    86,    88,    90,   118,   119,   120,    91,
       0,     0,     0,    49,     0,     0,    64,     0,     0,     0,
       0,     0,     0,    17,    38,    12,    38,    83,    24,    25,
      84,    27,     0,     0,     0,     0,   124,   128,   129,   130,
     131,   132,     0,   126,    85,     0,     0,     0,     0,    47,
       0,     0,    63,     0,     0,    81,     0,     0,   122,     8,
      14,     0,    19,     0,     0,     0,   100,     0,     0,     0,
     125,    87,     0,    56,    55,    53,    52,     0,     0,     0,
      51,     0,    50,    67,    66,    65,    69,     0,     0,     0,
      15,     9,    10,     0,     0,     0,   101,   102,   105,   103,
       0,    97,     0,   100,   127,    89,    57,     0,    54,     0,
       0,     0,     0,     0,    82,     0,   123,     0,     0,     0,
       0,     0,     0,    96,     0,     0,    62,    59,    58,    60,
      61,     0,     0,     0,     0,     0,    93,   104,   106,    98,
      99,     0,     0,     0,    29,     0,   107,     0,   115,   116,
     117,     0,    95,    48,     0,   108,     0,   110,     0,     0,
      71,     0,     0,     0,     0,     0,   111,     0,   109,     0,
     112,   113,     0,   114
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   252,   230,   -82,
     -17,   -82,   253,   -82,   -82,   -82,   -55,   -82,   -82,   -82,
     123,   202,   -81,   -82,   -82,   203,   -82,   -82,   -82,   -82,
     116,   -51,   -82,   -82,   -27,   -82,   -82,   -82,   -82,   -82,
     -82,   158,   159,   -82,   -82,   139,   -82,   -82,    -8,    -6,
     -10,   127,   -65,   -82,   -52
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     5,     7,     6,    19,    20,    21,    60,
      22,    23,    24,    66,    67,    25,    11,    44,    45,    46,
      82,    83,   171,    47,    85,    86,    48,    87,    88,    49,
     124,   125,    50,    72,   100,   116,    74,    51,    69,    70,
     105,   172,   165,   166,   167,   168,   217,    75,    76,    77,
      78,   110,    79,   112,   169
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      28,    61,    26,    90,    27,    73,   111,    12,    28,    80,
      26,     3,    27,   225,    99,   101,   106,    12,   226,   113,
      12,   106,    12,   143,   144,   145,   146,   143,   144,   145,
     153,   106,   215,    17,    18,     4,   150,    97,    81,   133,
     154,   134,   147,   164,    71,    12,   147,    71,   148,    71,
       8,    54,   148,    28,    59,    26,   216,    27,   149,    71,
      55,   109,   149,   107,    71,   108,   176,   177,    52,   130,
     204,   111,    18,    53,   111,   132,   205,   111,    58,   106,
      12,    28,    28,    26,    26,    27,    27,   174,   141,   -28,
     175,    12,   143,   144,   145,    68,    56,   -94,   197,   198,
     199,   200,    62,    63,   236,    57,   184,    71,   111,    92,
      84,   147,    93,   210,     9,    10,   -70,   148,   143,   144,
     145,   170,   106,    12,    89,   111,   109,   149,   107,   109,
     108,   107,   109,   108,   107,    91,   108,   147,   207,   220,
      94,   114,   102,   148,   115,    12,   119,   241,    97,   120,
      71,   122,   214,   149,   123,    96,    13,    14,    15,    13,
      14,    15,   103,   109,   104,   107,   117,   108,   111,    16,
      52,    17,    18,  -121,   111,    71,   179,   180,   181,   182,
     109,   237,   107,   196,   108,   121,   139,   242,    29,   140,
     156,   118,    30,   157,   218,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,   179,   180,
     181,   182,   194,    64,    65,   209,   223,   230,   135,   120,
     157,   193,   194,   109,   138,   107,   136,   108,    29,   109,
     126,   107,    30,   108,   137,   129,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    29,   127,
     128,   151,    30,   181,   182,   161,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    29,   228,
     229,    80,    30,   127,   234,   162,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,   142,   158,
     159,   160,   163,   173,   178,   183,   185,   187,   188,   186,
     189,   202,   190,   191,   201,   203,   206,   164,   221,   211,
     213,   222,   227,   231,   232,    95,   233,   235,    98,   238,
     240,   131,   152,   239,   212,   243,   155,     0,   192,   224,
     208,   219,   195
};

static const yytype_int16 yycheck[] =
{
      10,    18,    10,    58,    10,    32,    71,     5,    18,     5,
      18,     0,    18,    29,    65,    66,     4,     5,    34,    71,
       5,     4,     5,     3,     4,     5,     6,     3,     4,     5,
       6,     4,     5,    31,    32,     7,   117,     5,    34,    94,
     121,    96,    22,    31,    32,     5,    22,    32,    28,    32,
       5,    12,    28,    63,     5,    63,    29,    63,    38,    32,
      21,    71,    38,    71,    32,    71,   147,   148,    34,    29,
      28,   136,    32,    12,   139,    92,    34,   142,    27,     4,
       5,    91,    92,    91,    92,    91,    92,   139,   115,    34,
     142,     5,     3,     4,     5,    27,    12,    39,   179,   180,
     181,   182,    29,    30,    29,    21,   157,    32,   173,    30,
       5,    22,    33,   194,    27,    28,    34,    28,     3,     4,
       5,    32,     4,     5,     3,   190,   136,    38,   136,   139,
     136,   139,   142,   139,   142,    28,   142,    22,   190,   204,
      27,    27,    34,    28,    30,     5,    27,    29,     5,    30,
      32,    27,   203,    38,    30,    27,    16,    17,    18,    16,
      17,    18,     5,   173,    39,   173,    37,   173,   233,    29,
      34,    31,    32,    37,   239,    32,    22,    23,    24,    25,
     190,   233,   190,    29,   190,    37,    30,   239,     1,    33,
      27,     3,     5,    30,   204,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    22,    23,
      24,    25,    30,    29,    30,    33,    27,    27,     3,    30,
      30,    29,    30,   233,     5,   233,    28,   233,     1,   239,
      34,   239,     5,   239,    28,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     1,    35,
      36,    35,     5,    24,    25,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     1,    35,
      36,     5,     5,    35,    36,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    37,     3,
       3,    29,    35,    28,     5,     3,    35,     3,     5,    36,
      29,     3,    30,    30,    36,    36,    27,    31,     3,    29,
      36,    27,    29,     3,     3,    63,    28,    36,    65,    29,
      29,    91,   120,    28,   201,    29,   123,    -1,   170,   213,
     191,   204,   173
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    41,    42,     0,     7,    43,    45,    44,     5,    27,
      28,    56,     5,    16,    17,    18,    29,    31,    32,    46,
      47,    48,    50,    51,    52,    55,    88,    89,    90,     1,
       5,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    57,    58,    59,    63,    66,    69,
      72,    77,    34,    12,    12,    21,    12,    21,    27,     5,
      49,    50,    29,    30,    29,    30,    53,    54,    27,    78,
      79,    32,    73,    74,    76,    87,    88,    89,    90,    92,
       5,    34,    60,    61,     5,    64,    65,    67,    68,     3,
      56,    28,    30,    33,    27,    47,    27,     5,    52,    71,
      74,    71,    34,     5,    39,    80,     4,    88,    89,    90,
      91,    92,    93,    94,    27,    30,    75,    37,     3,    27,
      30,    37,    27,    30,    70,    71,    34,    35,    36,     8,
      29,    48,    50,    56,    56,     3,    28,    28,     5,    30,
      33,    74,    37,     3,     4,     5,     6,    22,    28,    38,
      62,    35,    61,     6,    62,    65,    27,    30,     3,     3,
      29,     8,     8,    35,    31,    82,    83,    84,    85,    94,
      32,    62,    81,    28,    94,    94,    62,    62,     5,    22,
      23,    24,    25,     3,    71,    35,    36,     3,     5,    29,
      30,    30,    81,    29,    30,    82,    29,    62,    62,    62,
      62,    36,     3,    36,    28,    34,    27,    94,    85,    33,
      62,    29,    60,    36,    71,     5,    29,    86,    90,    91,
      92,     3,    27,    27,    70,    29,    34,    29,    35,    36,
      27,     3,     3,    28,    36,    36,    29,    94,    29,    28,
      29,    29,    94,    29
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    40,    41,    42,    42,    44,    43,    45,    45,    45,
      45,    46,    46,    47,    47,    47,    48,    48,    49,    49,
      50,    50,    50,    51,    51,    51,    53,    52,    54,    52,
      55,    55,    55,    55,    55,    55,    55,    55,    56,    56,
      56,    57,    57,    57,    57,    57,    58,    59,    59,    60,
      60,    61,    61,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    63,    64,    64,    65,    65,    67,    66,
      68,    66,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    70,    70,    71,    71,    72,    73,    73,    75,    74,
      76,    76,    78,    77,    79,    77,    80,    81,    81,    81,
      82,    82,    82,    83,    83,    84,    84,    85,    85,    85,
      85,    85,    85,    85,    85,    86,    86,    86,    87,    87,
      87,    88,    89,    90,    91,    92,    93,    93,    94,    94,
      94,    94,    94
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     0,     2,     5,     7,     8,
       8,     1,     3,     1,     4,     5,     1,     3,     1,     3,
       1,     1,     1,     1,     3,     3,     0,     3,     0,     8,
       1,     2,     1,     2,     2,     1,     2,     2,     0,     2,
       2,     1,     1,     1,     1,     2,     1,     3,     8,     1,
       3,     3,     3,     1,     2,     1,     1,     2,     3,     3,
       3,     3,     3,     3,     1,     3,     3,     3,     0,     4,
       0,     9,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     3,     1,     3,     0,     4,
       1,     1,     0,     7,     0,     8,     4,     1,     3,     3,
       0,     1,     1,     1,     3,     1,     3,     4,     5,     8,
       5,     7,     8,     9,    10,     1,     1,     1,     1,     1,
       1,     1,     4,     6,     1,     3,     1,     3,     1,     1,
       1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 5:
#line 90 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.ival) = sta::verilog_reader->line(); }
#line 1475 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 6:
#line 91 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.ival) = (yyvsp[0].ival); }
#line 1481 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 7:
#line 96 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { sta::verilog_reader->makeModule((yyvsp[-3].string), new sta::VerilogNetSeq,(yyvsp[-1].stmt_seq),(yyvsp[-4].ival));}
#line 1487 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 8:
#line 98 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { sta::verilog_reader->makeModule((yyvsp[-5].string), new sta::VerilogNetSeq,(yyvsp[-1].stmt_seq),(yyvsp[-6].ival));}
#line 1493 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 9:
#line 100 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { sta::verilog_reader->makeModule((yyvsp[-6].string), (yyvsp[-4].nets), (yyvsp[-1].stmt_seq), (yyvsp[-7].ival)); }
#line 1499 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 10:
#line 102 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { sta::verilog_reader->makeModule((yyvsp[-6].string), (yyvsp[-4].stmt_seq), (yyvsp[-1].stmt_seq), (yyvsp[-7].ival)); }
#line 1505 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 11:
#line 107 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.nets) = new sta::VerilogNetSeq;
	  (yyval.nets)->push_back((yyvsp[0].net));
	}
#line 1513 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 12:
#line 111 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyvsp[-2].nets)->push_back((yyvsp[0].net)); }
#line 1519 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 14:
#line 117 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.net)=sta::verilog_reader->makeNetNamedPortRefScalar((yyvsp[-2].string), NULL);}
#line 1525 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 15:
#line 119 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.net)=sta::verilog_reader->makeNetNamedPortRefScalar((yyvsp[-3].string), (yyvsp[-1].net));}
#line 1531 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 17:
#line 125 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.net) = sta::verilog_reader->makeNetConcat((yyvsp[-1].nets)); }
#line 1537 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 18:
#line 129 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.nets) = new sta::VerilogNetSeq;
	  (yyval.nets)->push_back((yyvsp[0].net));
	}
#line 1545 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 19:
#line 133 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyvsp[-2].nets)->push_back((yyvsp[0].net)); }
#line 1551 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 23:
#line 144 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.stmt_seq) = new sta::VerilogStmtSeq;
	  (yyval.stmt_seq)->push_back((yyvsp[0].stmt));
	}
#line 1559 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 24:
#line 148 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.stmt_seq) = (yyvsp[-2].stmt_seq);
	  (yyvsp[-2].stmt_seq)->push_back((yyvsp[0].stmt));
	}
#line 1567 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 25:
#line 152 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    {
	  sta::VerilogDcl *dcl = dynamic_cast<sta::VerilogDcl*>((yyvsp[-2].stmt_seq)->back());
	  dcl->appendArg((yyvsp[0].dcl_arg));
	  (yyval.stmt_seq) = (yyvsp[-2].stmt_seq);
	}
#line 1577 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 26:
#line 160 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.ival) = sta::verilog_reader->line(); }
#line 1583 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 27:
#line 161 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.stmt) = sta::verilog_reader->makeDcl((yyvsp[-2].port_type), (yyvsp[0].dcl_arg), (yyvsp[-1].ival)); }
#line 1589 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 28:
#line 162 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.ival) = sta::verilog_reader->line(); }
#line 1595 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 29:
#line 164 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.stmt) = sta::verilog_reader->makeDclBus((yyvsp[-7].port_type), (yyvsp[-4].ival), (yyvsp[-2].ival), (yyvsp[0].dcl_arg), (yyvsp[-6].ival)); }
#line 1601 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 30:
#line 168 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.port_type) = sta::PortDirection::input(); }
#line 1607 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 31:
#line 169 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.port_type) = sta::PortDirection::input(); }
#line 1613 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 32:
#line 170 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.port_type) = sta::PortDirection::bidirect(); }
#line 1619 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 33:
#line 171 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.port_type) = sta::PortDirection::bidirect(); }
#line 1625 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 34:
#line 172 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.port_type) = sta::PortDirection::bidirect(); }
#line 1631 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 35:
#line 173 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.port_type) = sta::PortDirection::output(); }
#line 1637 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 36:
#line 174 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.port_type) = sta::PortDirection::output(); }
#line 1643 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 37:
#line 175 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.port_type) = sta::PortDirection::output(); }
#line 1649 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 38:
#line 180 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.stmt_seq) = new sta::VerilogStmtSeq; }
#line 1655 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 39:
#line 182 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { if ((yyvsp[0].stmt)) (yyvsp[-1].stmt_seq)->push_back((yyvsp[0].stmt)); }
#line 1661 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 40:
#line 185 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { sta::VerilogStmtSeq::Iterator iter((yyvsp[0].stmt_seq));
	  while (iter.hasNext())
	    (yyvsp[-1].stmt_seq)->push_back(iter.next());
	  delete (yyvsp[0].stmt_seq);
	}
#line 1671 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 45:
#line 198 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { yyerrok; (yyval.stmt) = NULL; }
#line 1677 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 47:
#line 208 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.stmt) = NULL; }
#line 1683 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 48:
#line 210 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.stmt) = NULL; }
#line 1689 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 49:
#line 215 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.stmt) = NULL; }
#line 1695 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 50:
#line 217 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.stmt) = NULL; }
#line 1701 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 51:
#line 222 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { sta::stringDelete((yyvsp[-2].string));
	  (yyval.stmt) = NULL;
	}
#line 1709 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 52:
#line 226 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { sta::stringDelete((yyvsp[-2].string));
	  sta::stringDelete((yyvsp[0].string));
	  (yyval.stmt) = NULL;
	}
#line 1718 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 53:
#line 234 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { sta::stringDelete((yyvsp[0].string));
	  (yyval.ival) = 0;
	}
#line 1726 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 54:
#line 238 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { sta::stringDelete((yyvsp[0].string));
	  (yyval.ival) = 0;
	}
#line 1734 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 55:
#line 242 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { sta::stringDelete((yyvsp[0].constant));
	  (yyval.ival) = 0;
	}
#line 1742 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 57:
#line 247 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.ival) = - (yyvsp[0].ival); }
#line 1748 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 58:
#line 249 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.ival) = (yyvsp[-2].ival) + (yyvsp[0].ival); }
#line 1754 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 59:
#line 251 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.ival) = (yyvsp[-2].ival) - (yyvsp[0].ival); }
#line 1760 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 60:
#line 253 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.ival) = (yyvsp[-2].ival) * (yyvsp[0].ival); }
#line 1766 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 61:
#line 255 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.ival) = (yyvsp[-2].ival) / (yyvsp[0].ival); }
#line 1772 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 62:
#line 257 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.ival) = (yyvsp[-1].ival); }
#line 1778 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 63:
#line 262 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.stmt) = NULL; }
#line 1784 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 64:
#line 267 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.stmt) = NULL; }
#line 1790 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 65:
#line 269 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.stmt) = NULL; }
#line 1796 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 66:
#line 274 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { sta::stringDelete((yyvsp[-2].string));
	  (yyval.stmt) = NULL;
	}
#line 1804 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 67:
#line 278 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { sta::stringDelete((yyvsp[-2].string));
	  sta::stringDelete((yyvsp[0].string));
	  (yyval.stmt) = NULL;
	}
#line 1813 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 68:
#line 285 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.ival) = sta::verilog_reader->line(); }
#line 1819 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 69:
#line 286 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.stmt) = sta::verilog_reader->makeDcl((yyvsp[-3].port_type), (yyvsp[-1].dcl_arg_seq), (yyvsp[-2].ival)); }
#line 1825 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 70:
#line 287 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.ival) = sta::verilog_reader->line(); }
#line 1831 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 71:
#line 289 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.stmt) = sta::verilog_reader->makeDclBus((yyvsp[-8].port_type), (yyvsp[-5].ival), (yyvsp[-3].ival), (yyvsp[-1].dcl_arg_seq), (yyvsp[-7].ival)); }
#line 1837 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 72:
#line 293 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.port_type) = sta::PortDirection::input(); }
#line 1843 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 73:
#line 294 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.port_type) = sta::PortDirection::bidirect(); }
#line 1849 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 74:
#line 295 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.port_type) = sta::PortDirection::output(); }
#line 1855 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 75:
#line 296 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.port_type) = sta::PortDirection::ground(); }
#line 1861 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 76:
#line 297 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.port_type) = sta::PortDirection::power(); }
#line 1867 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 77:
#line 298 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.port_type) = sta::PortDirection::tristate(); }
#line 1873 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 78:
#line 299 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.port_type) = sta::PortDirection::internal(); }
#line 1879 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 79:
#line 300 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.port_type) = sta::PortDirection::internal(); }
#line 1885 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 80:
#line 301 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.port_type) = sta::PortDirection::internal(); }
#line 1891 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 81:
#line 306 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.dcl_arg_seq) = new sta::VerilogDclArgSeq;
	  (yyval.dcl_arg_seq)->push_back((yyvsp[0].dcl_arg));
	}
#line 1899 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 82:
#line 310 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyvsp[-2].dcl_arg_seq)->push_back((yyvsp[0].dcl_arg));
	  (yyval.dcl_arg_seq) = (yyvsp[-2].dcl_arg_seq);
	}
#line 1907 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 83:
#line 317 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.dcl_arg) = sta::verilog_reader->makeDclArg((yyvsp[0].string)); }
#line 1913 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 84:
#line 319 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.dcl_arg) = sta::verilog_reader->makeDclArg((yyvsp[0].assign)); }
#line 1919 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 85:
#line 324 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.stmt_seq) = (yyvsp[-1].stmt_seq); }
#line 1925 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 86:
#line 329 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.stmt_seq) = new sta::VerilogStmtSeq();
	  (yyval.stmt_seq)->push_back((yyvsp[0].assign));
	}
#line 1933 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 87:
#line 333 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyvsp[-2].stmt_seq)->push_back((yyvsp[0].assign)); }
#line 1939 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 88:
#line 337 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.ival) = sta::verilog_reader->line(); }
#line 1945 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 89:
#line 338 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.assign) = sta::verilog_reader->makeAssign((yyvsp[-3].net), (yyvsp[0].net), (yyvsp[-2].ival)); }
#line 1951 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 92:
#line 347 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.ival) = sta::verilog_reader->line(); }
#line 1957 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 93:
#line 348 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.stmt) = sta::verilog_reader->makeModuleInst((yyvsp[-6].string), (yyvsp[-4].string), (yyvsp[-2].nets), (yyvsp[-5].ival)); }
#line 1963 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 94:
#line 349 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.ival) = sta::verilog_reader->line(); }
#line 1969 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 95:
#line 351 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.stmt) = sta::verilog_reader->makeModuleInst((yyvsp[-7].string), (yyvsp[-4].string), (yyvsp[-2].nets), (yyvsp[-6].ival)); }
#line 1975 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 98:
#line 361 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.ival) = (yyvsp[-1].ival); }
#line 1981 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 100:
#line 367 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.nets) = NULL; }
#line 1987 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 103:
#line 375 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.nets) = new sta::VerilogNetSeq;
	  (yyval.nets)->push_back((yyvsp[0].net));
	}
#line 1995 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 104:
#line 379 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyvsp[-2].nets)->push_back((yyvsp[0].net)); }
#line 2001 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 105:
#line 385 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.nets) = new sta::VerilogNetSeq;
	  (yyval.nets)->push_back((yyvsp[0].net));
	}
#line 2009 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 106:
#line 389 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyvsp[-2].nets)->push_back((yyvsp[0].net)); }
#line 2015 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 107:
#line 397 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.net) = sta::verilog_reader->makeNetNamedPortRefScalarNet((yyvsp[-2].string), NULL); }
#line 2021 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 108:
#line 399 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.net) = sta::verilog_reader->makeNetNamedPortRefScalarNet((yyvsp[-3].string), (yyvsp[-1].string)); }
#line 2027 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 109:
#line 401 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.net) = sta::verilog_reader->makeNetNamedPortRefBitSelect((yyvsp[-6].string), (yyvsp[-4].string), (yyvsp[-2].ival)); }
#line 2033 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 110:
#line 403 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.net) = sta::verilog_reader->makeNetNamedPortRefScalar((yyvsp[-3].string), (yyvsp[-1].net)); }
#line 2039 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 111:
#line 406 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.net) = sta::verilog_reader->makeNetNamedPortRefBit((yyvsp[-5].string), (yyvsp[-3].ival), NULL); }
#line 2045 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 112:
#line 408 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.net) = sta::verilog_reader->makeNetNamedPortRefBit((yyvsp[-6].string), (yyvsp[-4].ival), (yyvsp[-1].net)); }
#line 2051 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 113:
#line 411 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.net) = sta::verilog_reader->makeNetNamedPortRefPart((yyvsp[-7].string), (yyvsp[-5].ival), (yyvsp[-3].ival), NULL); }
#line 2057 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 114:
#line 413 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.net) = sta::verilog_reader->makeNetNamedPortRefPart((yyvsp[-8].string), (yyvsp[-6].ival), (yyvsp[-4].ival), (yyvsp[-1].net)); }
#line 2063 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 121:
#line 430 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.net) = sta::verilog_reader->makeNetScalar((yyvsp[0].string)); }
#line 2069 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 122:
#line 435 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.net) = sta::verilog_reader->makeNetBitSelect((yyvsp[-3].string), (yyvsp[-1].ival)); }
#line 2075 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 123:
#line 440 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.net) = sta::verilog_reader->makeNetPartSelect((yyvsp[-5].string), (yyvsp[-3].ival), (yyvsp[-1].ival)); }
#line 2081 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 124:
#line 445 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.net) = sta::verilog_reader->makeNetConstant((yyvsp[0].constant)); }
#line 2087 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 125:
#line 450 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.net) = sta::verilog_reader->makeNetConcat((yyvsp[-1].nets)); }
#line 2093 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 126:
#line 455 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.nets) = new sta::VerilogNetSeq;
	  (yyval.nets)->push_back((yyvsp[0].net));
	}
#line 2101 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;

  case 127:
#line 459 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1646  */
    { (yyval.nets)->push_back((yyvsp[0].net)); }
#line 2107 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
    break;


#line 2111 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/VerilogParse.cc" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 470 "/mnt/raid10/yingjie/OpenROAD/src/sta/verilog/VerilogParse.yy" /* yacc.c:1906  */


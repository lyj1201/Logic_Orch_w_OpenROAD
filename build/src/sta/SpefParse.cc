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
#define yyparse         SpefParse_parse
#define yylex           SpefParse_lex
#define yyerror         SpefParse_error
#define yydebug         SpefParse_debug
#define yynerrs         SpefParse_nerrs

#define yylval          SpefParse_lval
#define yychar          SpefParse_char

/* Copy the first part of user declarations.  */
#line 1 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:339  */


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

#include <string.h>

#include "StringUtil.hh"
#include "StringSeq.hh"
#include "parasitics/SpefReaderPvt.hh"

int SpefLex_lex();
#define SpefParse_lex SpefLex_lex
// use yacc generated parser errors
#define YYERROR_VERBOSE


#line 105 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:339  */

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
   by #include "SpefParse.hh".  */
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
#line 32 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:355  */

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

#line 212 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE SpefParse_lval;

int SpefParse_parse (void);

#endif /* !YY_SPEFPARSE_MNT_RAID10_YINGJIE_OPENROAD_BUILD_SRC_STA_SPEFPARSE_HH_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 93 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:358  */


#line 231 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:358  */

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   253

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  124
/* YYNRULES -- Number of rules.  */
#define YYNRULES  193
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  335

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      56,    60,     2,     2,     2,     2,    62,    63,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    65,     2,
      57,     2,    61,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    54,     2,    58,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    55,    64,    59,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    99,    99,   110,   112,   114,   116,   121,   123,   125,
     127,   132,   134,   136,   138,   145,   159,   164,   169,   174,
     179,   184,   189,   194,   198,   203,   208,   213,   215,   222,
     229,   234,   239,   244,   250,   252,   256,   257,   261,   268,
     269,   270,   275,   277,   278,   279,   283,   287,   291,   292,
     296,   302,   304,   305,   306,   310,   314,   315,   319,   324,
     331,   335,   339,   343,   344,   348,   352,   354,   361,   365,
     370,   372,   376,   377,   378,   379,   383,   387,   392,   394,
     399,   403,   410,   411,   415,   420,   421,   426,   428,   432,
     436,   441,   448,   454,   455,   459,   460,   461,   462,   469,
     468,   475,   482,   485,   487,   491,   496,   498,   502,   503,
     507,   508,   512,   514,   521,   525,   531,   533,   537,   541,
     547,   549,   554,   555,   559,   561,   566,   570,   575,   577,
     582,   583,   587,   592,   597,   599,   604,   605,   609,   614,
     621,   620,   626,   628,   633,   632,   641,   646,   651,   658,
     662,   663,   667,   669,   674,   678,   682,   683,   687,   691,
     692,   693,   694,   698,   703,   707,   711,   715,   716,   720,
     726,   732,   736,   740,   741,   745,   746,   750,   753,   755,
     759,   763,   771,   772,   773,   779,   781,   786,   790,   796,
     798,   802,   811,   817
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SPEF", "DESIGN", "DATE", "VENDOR",
  "PROGRAM", "DESIGN_FLOW", "PVERSION", "DIVIDER", "DELIMITER",
  "BUS_DELIMITER", "T_UNIT", "C_UNIT", "R_UNIT", "L_UNIT", "NAME_MAP",
  "POWER_NETS", "GROUND_NETS", "KW_C", "KW_L", "KW_S", "KW_D", "KW_V",
  "PORTS", "PHYSICAL_PORTS", "DEFINE", "PDEFINE", "D_NET", "D_PNET",
  "R_NET", "R_PNET", "END", "CONN", "CAP", "RES", "INDUC", "KW_P", "KW_I",
  "KW_N", "DRIVER", "CELL", "C2_R1_C1", "LOADS", "RC", "KW_Q", "KW_K",
  "INTEGER", "FLOAT", "QSTRING", "INDEX", "IDENT", "NAME", "'['", "'{'",
  "'('", "'<'", "']'", "'}'", "')'", "'>'", "'.'", "'/'", "'|'", "':'",
  "$accept", "file", "prefix_bus_delim", "suffix_bus_delim", "hchar",
  "header_def", "spef_version", "design_name", "date", "program_name",
  "program_version", "vendor", "design_flow", "qstrings",
  "hierarchy_div_def", "pin_delim_def", "bus_delim_def", "unit_def",
  "time_scale", "cap_scale", "res_scale", "induc_scale", "name_map",
  "name_map_entries", "name_map_entry", "mapped_item", "power_def",
  "power_net_def", "ground_net_def", "net_names", "net_name",
  "external_def", "port_def", "port_entries", "port_entry", "direction",
  "port_name", "inst_name", "physical_port_def", "pport_entries",
  "pport_entry", "pport_name", "pport", "physical_inst", "conn_attrs",
  "conn_attr", "coordinates", "cap_load", "par_value", "slews",
  "threshold", "driving_cell", "cell_type", "define_def", "define_entry",
  "entity", "internal_def", "nets", "d_net", "$@1", "net", "total_cap",
  "routing_conf", "conf", "conn_sec", "conn_defs", "conn_def",
  "external_connection", "internal_connection", "pin_name",
  "internal_node_coords", "internal_node_coord", "internal_parasitic_node",
  "cap_sec", "cap_elems", "cap_elem", "cap_id", "parasitic_node",
  "res_sec", "res_elems", "res_elem", "res_id", "induc_sec", "induc_elems",
  "induc_elem", "induc_id", "r_net", "$@2", "driver_reducs",
  "driver_reduc", "$@3", "driver_pair", "driver_cell", "pi_model",
  "load_desc", "rc_descs", "rc_desc", "pole_residue_desc", "pole_desc",
  "poles", "pole", "complex_par_value", "cnumber", "real_component",
  "imaginary_component", "residue_desc", "residues", "residue", "d_pnet",
  "pnet_ref", "pconn_sec", "pconn_defs", "pconn_def",
  "pexternal_connection", "internal_pnode_coords", "internal_pnode_coord",
  "internal_pdspf_node", "name_or_index", "r_pnet", "pdriver_reduc",
  "pdriver_pair", "number", "pos_integer", "pos_number", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,    91,   123,    40,    60,    93,   125,
      41,    62,    46,    47,   124,    58
};
# endif

#define YYPACT_NINF -307

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-307)))

#define YYTABLE_NINF -113

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      44,   -12,    66,    56,    80,  -307,  -307,    63,   105,    70,
     124,    65,    63,  -307,    45,    45,    35,   120,  -307,  -307,
      90,   136,  -307,  -307,  -307,  -307,  -307,  -307,  -307,  -307,
      45,  -307,  -307,    45,    45,    45,  -307,   117,  -307,  -307,
    -307,    94,   138,  -307,    45,  -307,    96,  -307,    45,  -307,
      98,    82,    84,    49,  -307,  -307,   101,   143,  -307,  -307,
    -307,  -307,  -307,    45,    45,    45,    45,    45,    45,    45,
    -307,    12,  -307,  -307,  -307,  -307,  -307,  -307,   103,   148,
      68,    68,  -307,  -307,    42,  -307,   107,  -307,    77,  -307,
      77,  -307,    77,    77,  -307,  -307,   108,   149,    77,    77,
      77,    76,  -307,  -307,  -307,  -307,  -307,  -307,   107,  -307,
    -307,  -307,  -307,  -307,  -307,   100,   137,  -307,   137,  -307,
     110,    38,   151,    77,  -307,    77,  -307,  -307,  -307,  -307,
     137,    77,   115,   132,   137,   -23,  -307,  -307,  -307,  -307,
    -307,  -307,    38,   155,  -307,    83,   134,   104,  -307,  -307,
    -307,    95,   135,  -307,  -307,    45,   140,   129,  -307,    50,
     161,  -307,  -307,    83,   111,    97,   135,    77,    45,    45,
      95,  -307,  -307,   139,    26,  -307,  -307,  -307,  -307,    76,
     141,  -307,  -307,  -307,  -307,    51,    83,  -307,   165,  -307,
      83,    45,    45,    97,  -307,   139,  -307,  -307,    96,    96,
    -307,   142,   115,  -307,   144,  -307,    45,  -307,   129,  -307,
      77,   150,  -307,  -307,  -307,  -307,  -307,   128,    83,   168,
     121,   122,    96,   133,    96,  -307,   153,   144,    68,    68,
      45,  -307,  -307,    45,  -307,   115,  -307,   162,  -307,   141,
      77,   152,  -307,  -307,   146,    83,   172,    83,    45,  -307,
    -307,    45,  -307,   166,  -307,  -307,   180,  -307,    34,  -307,
    -307,    45,  -307,   115,  -307,  -307,    77,    45,   152,  -307,
    -307,   154,    83,  -307,  -307,  -307,    68,    68,   180,  -307,
    -307,  -307,  -307,    77,    45,  -307,    45,  -307,   150,  -307,
      77,  -307,  -307,   157,  -307,  -307,    77,    45,  -307,   158,
    -307,  -307,    77,   115,  -307,   156,  -307,     9,   115,  -307,
      77,     9,  -307,  -307,   145,   147,     9,    77,  -307,  -307,
     163,    77,  -307,     9,  -307,   164,  -307,   167,   170,  -307,
    -307,   163,    77,  -307,  -307
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    34,     0,    16,     1,     0,    42,     0,
       0,     0,    35,    36,     0,     0,    51,    43,    44,    17,
       0,     0,    41,    39,    40,    38,    37,   184,   182,   183,
      46,    48,    50,    47,     0,     0,    87,    52,    53,    45,
      18,     0,     0,    49,    55,    56,     0,    60,    62,    63,
       0,     0,    66,     0,    54,    21,     0,     0,    57,    59,
      70,    64,    70,     0,     0,     0,     0,     0,     0,     0,
      88,     2,    93,    95,    96,    97,    98,    19,     0,     0,
      58,    65,    67,    68,     0,    61,     0,    69,     0,   101,
       0,   171,     0,     0,    94,    20,     0,     0,     0,     0,
       0,     0,    71,    72,    73,    74,    75,    92,     0,    89,
      91,   189,   190,   102,    99,    78,   103,   140,   103,    23,
      22,     0,     0,     0,    77,     0,    86,    85,    84,    90,
     103,     0,     0,     0,   103,     0,    24,    11,    12,    13,
      14,    25,     0,     0,    76,    80,   106,     0,   191,   104,
     105,     0,   120,   142,   185,     0,     0,     0,    26,     0,
       0,   192,   193,     0,    82,     0,   120,     0,     0,     0,
     178,   173,   122,   128,     0,   188,   114,   115,   186,     0,
       0,     3,     4,     5,     6,    27,     0,    15,     0,    81,
       0,     0,     0,   116,   108,   128,    79,   177,     0,     0,
     174,   172,   121,   130,   134,   141,     0,   143,     0,   147,
       0,     0,     7,     8,     9,    10,    28,     0,     0,     0,
       0,     0,     0,    69,     0,   109,   107,   134,     0,     0,
       0,   179,   123,     0,   126,   129,   136,     0,   146,     0,
       0,     0,   187,    30,     0,     0,     0,     0,     0,    70,
      70,     0,   117,     0,   175,   176,     0,   181,     0,   127,
     131,     0,   133,   135,   170,   144,     0,     0,   149,   150,
      31,     0,     0,    29,    83,   113,   110,   111,     0,   119,
     100,   180,   124,     0,     0,   137,     0,   139,     0,   148,
       0,   151,    32,     0,   118,   125,     0,     0,   145,   152,
      33,   132,     0,     0,   153,     0,   138,     0,     0,   154,
       0,   155,   156,   158,   159,   160,     0,     0,   164,   157,
       0,     0,   169,   166,   167,     0,   165,     0,     0,   168,
     163,     0,     0,   161,   162
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -307,  -307,  -307,  -307,    59,  -307,  -307,  -307,  -307,  -307,
    -307,  -307,  -307,  -307,  -307,  -307,  -307,  -307,  -307,  -307,
    -307,  -307,  -307,  -307,   193,  -307,  -307,  -307,   190,   198,
      -4,  -307,  -307,  -307,   173,  -176,  -307,   159,   181,  -307,
     174,    55,   -22,   -61,   -59,   -91,  -245,  -307,   -94,  -307,
      67,  -307,    52,  -307,  -307,   -71,  -307,   169,  -307,  -307,
     160,    29,  -106,  -307,  -307,  -307,    36,  -307,  -160,  -198,
    -307,  -307,  -307,    72,  -307,  -307,  -307,  -222,    46,  -307,
    -307,  -307,     6,  -307,  -307,  -307,  -307,  -307,  -307,  -307,
    -307,  -307,    31,     3,   -44,  -307,   -21,  -307,  -307,  -307,
     -66,  -260,  -306,  -307,  -307,  -307,  -307,   -77,  -307,   179,
    -307,  -307,    79,  -307,  -307,  -307,  -307,   -14,  -307,  -307,
    -307,   -96,  -195,  -173
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,   185,   216,   141,     3,     4,    10,    21,    57,
      79,    42,    97,   120,   122,   143,   160,   187,   188,   219,
     246,   273,     8,    12,    13,    25,    16,    17,    18,    30,
      31,    36,    37,    44,    45,    60,    46,    84,    38,    48,
      49,    50,    82,    51,    80,   102,   103,   104,   113,   105,
     163,   106,   128,    53,    70,   109,    71,    72,    73,   130,
      88,   114,   133,   149,   166,   193,   194,   222,   175,   176,
     226,   252,   278,   173,   202,   232,   233,   258,   204,   235,
     260,   261,   237,   263,   285,   286,    74,   134,   174,   207,
     288,   208,   180,   211,   242,   268,   269,   304,   305,   311,
     312,   313,   314,   317,   325,   309,   323,   324,    75,    90,
     152,   170,   171,   198,   201,   231,   256,   259,    76,   156,
     157,   115,   150,   164
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      32,    32,   123,    81,    86,   124,   125,   234,   238,   199,
     154,   281,   135,   217,   327,   110,    32,   220,   155,    32,
      47,    52,   228,   229,   146,   333,    43,   144,   153,    43,
      47,   145,   224,   294,    52,   147,   283,   129,     5,   284,
     262,    66,    67,    68,    69,   244,   249,     1,   250,    83,
      85,    87,    89,    91,    89,    91,   322,   111,   112,   205,
      34,    35,   296,   322,   297,   310,     6,   206,   287,   290,
      85,   196,   271,     7,   274,   302,    64,    65,    66,    67,
      68,    69,   111,   112,     9,    27,    28,    29,    98,    99,
     100,   101,   107,    27,    28,    29,    27,    28,    29,   293,
     137,   138,   139,   140,   181,   182,   183,   184,   307,   212,
     213,   214,   215,   316,    11,    22,   240,    23,    24,   116,
      19,   117,   118,    14,    15,   111,   112,   126,   127,    20,
     221,   161,   162,   168,   169,   191,   192,   254,   255,    15,
      40,   177,    41,    35,    55,    56,   266,    63,    59,   -69,
      62,    77,    78,    95,    52,   177,    96,   107,   119,   121,
     136,   132,   142,   148,   282,   131,   151,   159,   165,   167,
     172,   179,   289,   178,   186,   203,   190,   223,   177,   218,
     243,   236,   230,   245,   210,  -112,   247,   248,   272,   295,
     276,   277,   177,   251,   241,   264,   299,   267,   270,   280,
      98,   158,   301,   308,   303,    26,   292,    39,   306,   300,
     320,   315,   321,    33,   318,   315,   257,    58,    54,   310,
     315,   326,    61,   197,   330,   328,   275,   315,    92,   225,
     189,   209,   331,   253,    83,   332,   334,   279,   195,   239,
      94,   227,   265,   108,   298,   319,   329,   291,    93,   200,
       0,     0,     0,   177
};

static const yytype_int16 yycheck[] =
{
      14,    15,    98,    62,    65,    99,   100,   202,   206,   169,
      33,   256,   118,   186,   320,    86,    30,   190,    41,    33,
      34,    35,   198,   199,   130,   331,    30,   123,   134,    33,
      44,   125,   192,   278,    48,   131,   258,   108,    50,   261,
     235,    29,    30,    31,    32,   218,   222,     3,   224,    63,
      64,    65,    66,    67,    68,    69,   316,    48,    49,    33,
      25,    26,   284,   323,   286,    56,     0,    41,   263,   267,
      84,   167,   245,    17,   247,   297,    27,    28,    29,    30,
      31,    32,    48,    49,     4,    51,    52,    53,    20,    21,
      22,    23,    50,    51,    52,    53,    51,    52,    53,   272,
      62,    63,    64,    65,    54,    55,    56,    57,   303,    58,
      59,    60,    61,   308,    51,    50,   210,    52,    53,    90,
      50,    92,    93,    18,    19,    48,    49,    51,    52,     5,
     191,    48,    49,    38,    39,    38,    39,   228,   229,    19,
      50,   155,     6,    26,    50,     7,   240,    65,    52,    65,
      52,    50,     9,    50,   168,   169,     8,    50,    50,    10,
      50,    24,    11,    48,   258,    65,    34,    12,    34,    65,
      35,    42,   266,    33,    13,    36,    65,   191,   192,    14,
      52,    37,    40,    15,    43,    52,    65,    65,    16,   283,
     249,   250,   206,    40,    44,    33,   290,    45,    52,    33,
      20,   142,   296,    47,    46,    12,    52,    17,   302,    52,
      65,   307,    65,    15,   310,   311,   230,    44,    37,    56,
     316,   317,    48,   168,    60,   321,   248,   323,    68,   193,
     163,   179,    65,   227,   248,    65,   332,   251,   166,   208,
      71,   195,   239,    84,   288,   311,   323,   268,    69,   170,
      -1,    -1,    -1,   267
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    67,    71,    72,    50,     0,    17,    88,     4,
      73,    51,    89,    90,    18,    19,    92,    93,    94,    50,
       5,    74,    50,    52,    53,    91,    90,    51,    52,    53,
      95,    96,   183,    95,    25,    26,    97,    98,   104,    94,
      50,     6,    77,    96,    99,   100,   102,   183,   105,   106,
     107,   109,   183,   119,   104,    50,     7,    75,   100,    52,
     101,   106,    52,    65,    27,    28,    29,    30,    31,    32,
     120,   122,   123,   124,   152,   174,   184,    50,     9,    76,
     110,   110,   108,   183,   103,   183,   109,   183,   126,   183,
     175,   183,   126,   175,   123,    50,     8,    78,    20,    21,
      22,    23,   111,   112,   113,   115,   117,    50,   103,   121,
     121,    48,    49,   114,   127,   187,   127,   127,   127,    50,
      79,    10,    80,   187,   114,   114,    51,    52,   118,   121,
     125,    65,    24,   128,   153,   128,    50,    62,    63,    64,
      65,    70,    11,    81,   187,   114,   128,   187,    48,   129,
     188,    34,   176,   128,    33,    41,   185,   186,    70,    12,
      82,    48,    49,   116,   189,    34,   130,    65,    38,    39,
     177,   178,    35,   139,   154,   134,   135,   183,    33,    42,
     158,    54,    55,    56,    57,    68,    13,    83,    84,   116,
      65,    38,    39,   131,   132,   139,   187,   107,   179,   134,
     178,   180,   140,    36,   144,    33,    41,   155,   157,   118,
      43,   159,    58,    59,    60,    61,    69,   189,    14,    85,
     189,   109,   133,   183,   134,   132,   136,   144,   101,   101,
      40,   181,   141,   142,   188,   145,    37,   148,   135,   158,
     114,    44,   160,    52,   189,    15,    86,    65,    65,   101,
     101,    40,   137,   148,   111,   111,   182,   183,   143,   183,
     146,   147,   188,   149,    33,   159,   114,    45,   161,   162,
      52,   189,    16,    87,   189,   108,   110,   110,   138,   183,
      33,   112,   114,   143,   143,   150,   151,   188,   156,   114,
     135,   162,    52,   189,   112,   114,   143,   143,   160,   114,
      52,   114,   143,    46,   163,   164,   114,   188,    47,   171,
      56,   165,   166,   167,   168,   187,   188,   169,   187,   166,
      65,    65,   167,   172,   173,   170,   187,   168,   187,   173,
      60,    65,    65,   168,   187
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    67,    68,    68,    68,    68,    69,    69,    69,
      69,    70,    70,    70,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    79,    80,    81,    82,    82,    83,
      84,    85,    86,    87,    88,    88,    89,    89,    90,    91,
      91,    91,    92,    92,    92,    92,    93,    94,    95,    95,
      96,    97,    97,    97,    97,    98,    99,    99,   100,   101,
     102,   103,   104,   105,   105,   106,   107,   107,   108,   109,
     110,   110,   111,   111,   111,   111,   112,   113,   114,   114,
     115,   115,   116,   116,   117,   118,   118,   119,   119,   120,
     120,   120,   121,   122,   122,   123,   123,   123,   123,   125,
     124,   126,   127,   128,   128,   129,   130,   130,   131,   131,
     132,   132,   133,   133,   134,   135,   136,   136,   137,   138,
     139,   139,   140,   140,   141,   141,   142,   143,   144,   144,
     145,   145,   146,   147,   148,   148,   149,   149,   150,   151,
     153,   152,   154,   154,   156,   155,   157,   158,   159,   160,
     161,   161,   162,   162,   163,   164,   165,   165,   166,   167,
     167,   167,   167,   168,   169,   170,   171,   172,   172,   173,
     174,   175,   176,   177,   177,   178,   178,   179,   180,   180,
     181,   182,   183,   183,   183,   184,   184,   185,   186,   187,
     187,   188,   189,   189
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,    11,     2,     2,     2,     2,
       2,     2,     2,     1,     2,     2,     2,     2,     3,     4,
       3,     3,     3,     3,     0,     2,     1,     2,     2,     1,
       1,     1,     0,     1,     1,     2,     2,     2,     1,     2,
       1,     0,     1,     1,     2,     2,     1,     2,     3,     1,
       1,     1,     2,     1,     2,     3,     1,     3,     1,     1,
       0,     2,     1,     1,     1,     1,     3,     2,     1,     5,
       3,     5,     1,     5,     2,     1,     1,     0,     2,     3,
       4,     3,     1,     1,     2,     1,     1,     1,     1,     0,
      10,     1,     1,     0,     2,     1,     0,     3,     1,     2,
       4,     4,     1,     3,     1,     1,     0,     2,     3,     1,
       0,     2,     0,     2,     3,     4,     1,     1,     0,     2,
       0,     2,     4,     1,     0,     2,     0,     2,     4,     1,
       0,     7,     0,     2,     0,     5,     2,     2,     4,     2,
       1,     2,     3,     4,     2,     3,     1,     2,     1,     1,
       1,     5,     5,     4,     1,     1,     3,     1,     2,     1,
       9,     1,     3,     1,     2,     4,     4,     1,     0,     2,
       3,     1,     1,     1,     1,     5,     6,     4,     2,     1,
       1,     1,     1,     1
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
        case 3:
#line 111 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { (yyval.ch) = '['; }
#line 1571 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 4:
#line 113 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { (yyval.ch) = '}'; }
#line 1577 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 5:
#line 115 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { (yyval.ch) = ')'; }
#line 1583 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 6:
#line 117 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { (yyval.ch) = '<'; }
#line 1589 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 7:
#line 122 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { (yyval.ch) = ']'; }
#line 1595 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 8:
#line 124 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { (yyval.ch) = '}'; }
#line 1601 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 9:
#line 126 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { (yyval.ch) = ')'; }
#line 1607 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 10:
#line 128 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { (yyval.ch) = '>'; }
#line 1613 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 11:
#line 133 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { (yyval.ch) = '.'; }
#line 1619 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 12:
#line 135 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { (yyval.ch) = '/'; }
#line 1625 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 13:
#line 137 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { (yyval.ch) = '|'; }
#line 1631 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 14:
#line 139 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { (yyval.ch) = ':'; }
#line 1637 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 16:
#line 160 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::stringDelete((yyvsp[0].string)); }
#line 1643 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 17:
#line 165 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::stringDelete((yyvsp[0].string)); }
#line 1649 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 18:
#line 170 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::stringDelete((yyvsp[0].string)); }
#line 1655 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 19:
#line 175 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::stringDelete((yyvsp[0].string)); }
#line 1661 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 20:
#line 180 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::stringDelete((yyvsp[0].string)); }
#line 1667 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 21:
#line 185 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::stringDelete((yyvsp[0].string)); }
#line 1673 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 22:
#line 190 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::spef_reader->setDesignFlow((yyvsp[0].string_seq)); }
#line 1679 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 23:
#line 195 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { (yyval.string_seq) = new sta::StringSeq;
	  (yyval.string_seq)->push_back((yyvsp[0].string));
	}
#line 1687 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 24:
#line 199 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { (yyval.string_seq)->push_back((yyvsp[0].string)); }
#line 1693 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 25:
#line 204 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::spef_reader->setDivider((yyvsp[0].ch)); }
#line 1699 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 26:
#line 209 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::spef_reader->setDelimiter((yyvsp[0].ch)); }
#line 1705 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 27:
#line 214 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::spef_reader->setBusBrackets((yyvsp[0].ch), '\0'); }
#line 1711 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 28:
#line 216 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::spef_reader->setBusBrackets((yyvsp[-1].ch), (yyvsp[0].ch)); }
#line 1717 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 30:
#line 230 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::spef_reader->setTimeScale((yyvsp[-1].number), (yyvsp[0].string)); }
#line 1723 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 31:
#line 235 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::spef_reader->setCapScale((yyvsp[-1].number), (yyvsp[0].string)); }
#line 1729 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 32:
#line 240 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::spef_reader->setResScale((yyvsp[-1].number), (yyvsp[0].string)); }
#line 1735 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 33:
#line 245 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::spef_reader->setInductScale((yyvsp[-1].number), (yyvsp[0].string)); }
#line 1741 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 38:
#line 262 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::spef_reader->makeNameMapEntry((yyvsp[-1].string), (yyvsp[0].string));
	  sta::stringDelete((yyvsp[-1].string));
	}
#line 1749 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 50:
#line 297 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::stringDelete((yyvsp[0].string)); }
#line 1755 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 58:
#line 320 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::stringDelete((yyvsp[-2].string)); }
#line 1761 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 59:
#line 325 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { (yyval.port_dir) = sta::spef_reader->portDirection((yyvsp[0].string));
          sta::stringDelete((yyvsp[0].string));
	}
#line 1769 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 66:
#line 353 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::stringDelete((yyvsp[0].string)); }
#line 1775 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 67:
#line 355 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::stringDelete((yyvsp[-2].string));
	  sta::stringDelete((yyvsp[0].string));
	}
#line 1783 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 77:
#line 388 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { delete (yyvsp[0].triple); }
#line 1789 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 78:
#line 393 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { (yyval.triple) = new sta::SpefTriple((yyvsp[0].number)); }
#line 1795 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 79:
#line 395 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { (yyval.triple) = new sta::SpefTriple((yyvsp[-4].number), (yyvsp[-2].number), (yyvsp[0].number)); }
#line 1801 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 80:
#line 400 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { delete (yyvsp[-1].triple);
	  delete (yyvsp[0].triple);
	}
#line 1809 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 81:
#line 404 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { delete (yyvsp[-3].triple);
	  delete (yyvsp[-2].triple);
	}
#line 1817 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 84:
#line 416 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::stringDelete((yyvsp[0].string)); }
#line 1823 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 89:
#line 433 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::stringDelete((yyvsp[-1].string));
	  sta::stringDelete((yyvsp[0].string));
	}
#line 1831 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 90:
#line 437 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::stringDelete((yyvsp[-2].string));
	  sta::stringDelete((yyvsp[-1].string));
	  sta::stringDelete((yyvsp[0].string));
	}
#line 1840 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 91:
#line 442 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::stringDelete((yyvsp[-1].string));
	  sta::stringDelete((yyvsp[0].string));
	}
#line 1848 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 99:
#line 469 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::spef_reader->dspfBegin((yyvsp[-1].net), (yyvsp[0].triple)); }
#line 1854 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 100:
#line 471 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::spef_reader->dspfFinish(); }
#line 1860 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 101:
#line 476 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { (yyval.net) = sta::spef_reader->findNet((yyvsp[0].string));
	  sta::stringDelete((yyvsp[0].string));
	}
#line 1868 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 112:
#line 513 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::stringDelete((yyvsp[0].string)); }
#line 1874 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 113:
#line 515 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::stringDelete((yyvsp[-2].string));
	  sta::stringDelete((yyvsp[0].string));
	}
#line 1882 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 115:
#line 526 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { (yyval.pin) = sta::spef_reader->findPin((yyvsp[0].string));
	  sta::stringDelete((yyvsp[0].string));
	}
#line 1890 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 119:
#line 542 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::stringDelete((yyvsp[0].string)); }
#line 1896 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 122:
#line 554 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { (yyval.integer) = 0; }
#line 1902 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 124:
#line 560 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::spef_reader->makeCapacitor((yyvsp[-2].integer), (yyvsp[-1].string), (yyvsp[0].triple)); }
#line 1908 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 125:
#line 562 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::spef_reader->makeCapacitor((yyvsp[-3].integer), (yyvsp[-2].string), (yyvsp[-1].string), (yyvsp[0].triple)); }
#line 1914 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 130:
#line 582 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { (yyval.integer) = 0; }
#line 1920 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 132:
#line 588 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::spef_reader->makeResistor((yyvsp[-3].integer), (yyvsp[-2].string), (yyvsp[-1].string), (yyvsp[0].triple)); }
#line 1926 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 136:
#line 604 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { (yyval.integer) = 0; }
#line 1932 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 138:
#line 610 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { delete (yyvsp[0].triple); }
#line 1938 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 140:
#line 621 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::spef_reader->rspfBegin((yyvsp[-1].net), (yyvsp[0].triple)); }
#line 1944 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 141:
#line 623 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::spef_reader->rspfFinish(); }
#line 1950 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 144:
#line 633 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::spef_reader->rspfDrvrBegin((yyvsp[-2].pin), (yyvsp[0].pi));
	  sta::stringDelete((yyvsp[-1].string));
	}
#line 1958 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 145:
#line 637 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::spef_reader->rspfDrvrFinish(); }
#line 1964 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 146:
#line 642 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { (yyval.pin) = (yyvsp[0].pin); }
#line 1970 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 147:
#line 647 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 1976 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 148:
#line 652 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { (yyval.pi) = new sta::SpefRspfPi((yyvsp[-2].triple), (yyvsp[-1].triple), (yyvsp[0].triple)); }
#line 1982 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 152:
#line 668 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::spef_reader->rspfLoad((yyvsp[-1].pin), (yyvsp[0].triple)); }
#line 1988 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 153:
#line 670 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::spef_reader->rspfLoad((yyvsp[-2].pin), (yyvsp[-1].triple)); }
#line 1994 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 163:
#line 699 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number); }
#line 2000 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 170:
#line 728 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::stringDelete((yyvsp[-7].string)); }
#line 2006 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 181:
#line 764 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    {
	  sta::stringDelete((yyvsp[0].string));
	  (yyval.string) = 0;
	}
#line 2015 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 185:
#line 780 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::stringDelete((yyvsp[-3].string)); }
#line 2021 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 186:
#line 782 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { sta::stringDelete((yyvsp[-4].string)); }
#line 2027 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 189:
#line 797 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { (yyval.number) = static_cast<float>((yyvsp[0].integer)); }
#line 2033 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 191:
#line 803 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { int value = (yyvsp[0].integer);
	  if (value < 0)
	    sta::spef_reader->warn(21, "%d is not positive.", value);
	  (yyval.integer) = value;
	}
#line 2043 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 192:
#line 812 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { float value = static_cast<float>((yyvsp[0].integer));
	  if (value < 0)
	    sta::spef_reader->warn(22, "%.4f is not positive.", value);
	  (yyval.number) = value;
	}
#line 2053 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;

  case 193:
#line 818 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1646  */
    { float value = static_cast<float>((yyvsp[0].number));
	  if (value < 0)
	    sta::spef_reader->warn(23, "%.4f is not positive.", value);
	  (yyval.number) = value;
	}
#line 2063 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
    break;


#line 2067 "/mnt/raid10/yingjie/OpenROAD/build/src/sta/SpefParse.cc" /* yacc.c:1646  */
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
#line 825 "/mnt/raid10/yingjie/OpenROAD/src/sta/parasitics/SpefParse.yy" /* yacc.c:1906  */


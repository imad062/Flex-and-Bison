/* A Bison parser, made by GNU Bison 3.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "imadScript.y" /* yacc.c:339  */

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    //sym holds the variables, so basically maximum variable declaration is set to 1000 for now
    char sym[1000][1000];
    //values hold the corresponding values of variables according to index
    //for example values[0] hold the values for the variable contained in sym[0][]
    double values[1000];

    float ifOpValues[1000];

    int currentIfOp = 0;

    int current = 0;

    char dump;

    char input[1000];
    int inval;

    int choice;

    int matchedStringValue = 0;

    double switchValue = 0;
    int printedCaseBefore = 0;

    int wasItDeclaredBefore(char string[1000]);
    int matchStrings(char string1[1000], char string2[1000]);
    int getIndexNumber(char string[1000]);
    void pushIfOpValues(float );
    void resetIfOpValues();
    void printIfOpValues();

    extern void yyerror(const char *);
    extern int yylex();

#line 106 "imadScript.tab.c" /* yacc.c:339  */

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
   by #include "imadScript.tab.h".  */
#ifndef YY_YY_IMADSCRIPT_TAB_H_INCLUDED
# define YY_YY_IMADSCRIPT_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ADD = 258,
    SUB = 259,
    MUL = 260,
    DIV = 261,
    GRE = 262,
    LES = 263,
    GEQ = 264,
    LEQ = 265,
    END = 266,
    VAL = 267,
    LFB = 268,
    RFB = 269,
    PRINT = 270,
    EQUAL = 271,
    DEC = 272,
    COM = 273,
    ALL = 274,
    IIF = 275,
    STMT = 276,
    EIF = 277,
    NDF = 278,
    LTB = 279,
    RTB = 280,
    DFLT = 281,
    MAT = 282,
    CAS = 283,
    LOOP = 284,
    LEND = 285,
    IN = 286,
    TO = 287,
    NCAS = 288,
    NMAT = 289,
    COL = 290,
    VAR = 291
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 41 "imadScript.y" /* yacc.c:355  */

    int int_val;
    double double_val;
    char input_var_string[1000];

#line 189 "imadScript.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_IMADSCRIPT_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 206 "imadScript.tab.c" /* yacc.c:358  */

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
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
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
#  define YYSIZE_T unsigned
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

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYFINAL  30
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   352

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  11
/* YYNRULES -- Number of rules.  */
#define YYNRULES  38
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  144

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    54,    54,    55,    58,    59,    60,    61,    62,    65,
      66,    67,    68,    69,    70,    71,    79,    80,    81,    82,
     104,   124,   140,   149,   152,   155,   156,   182,   192,   207,
     232,   257,   291,   307,   310,   313,   356,   376,   384
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ADD", "SUB", "MUL", "DIV", "GRE", "LES",
  "GEQ", "LEQ", "END", "VAL", "LFB", "RFB", "PRINT", "EQUAL", "DEC", "COM",
  "ALL", "IIF", "STMT", "EIF", "NDF", "LTB", "RTB", "DFLT", "MAT", "CAS",
  "LOOP", "LEND", "IN", "TO", "NCAS", "NMAT", "COL", "VAR", "$accept",
  "program", "root_node", "expression", "statement", "declaration", "vari",
  "ifelse", "forloop", "switch", "cases", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291
};
# endif

#define YYPACT_NINF -22

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-22)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -7,   -22,     6,   -12,   -21,    -3,     6,   -22,   -19,     4,
      32,    26,   -22,   198,    39,   -22,   -22,   -22,   -22,   -22,
     183,   -22,   -22,   -22,    38,     6,   207,    33,    30,     6,
     -22,   -22,     6,     6,     6,     6,     6,     6,     6,     6,
     -22,   -22,   -22,   -21,    93,    31,   -17,    72,   342,   342,
     342,   342,   342,   342,   342,   342,   342,    38,    37,   -22,
      52,    79,    58,    40,    71,     6,   -22,    84,    73,   -22,
      81,     6,   216,     6,    85,    89,   121,    44,   225,     6,
       6,    60,    87,   -18,    80,   234,   243,     6,     6,    88,
       6,   -22,    82,    86,   252,   144,     6,   261,   -17,   -22,
      53,    98,   152,    91,   -22,    24,     6,   100,   -22,     6,
     270,     6,   279,   106,   288,     2,   112,   109,    69,     6,
     115,   113,     6,   297,     6,     6,   306,   116,   315,   175,
     117,   -22,   118,   122,   -22,   -22,     6,   324,   119,   123,
       6,   333,   140,   -22
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    18,     0,     0,     0,     0,     0,    34,     0,     0,
      19,     0,     3,     0,     0,    23,     6,     7,     8,    19,
       0,    22,    21,    26,    24,     0,     0,     0,     0,     0,
       1,     2,     0,     0,     0,     0,     0,     0,     0,     0,
       4,     5,    17,     0,     0,     0,     0,     0,    20,    13,
      14,    16,    15,     9,    10,    11,    12,    25,     0,    33,
       0,     0,     0,     0,     0,     0,    27,     0,     0,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,     0,    35,
       0,     0,     0,     0,    37,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,     0,     0,    29,    30,     0,     0,     0,     0,
       0,     0,     0,    31
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -22,   -22,   131,    -2,   -22,   -22,   124,     1,   -22,   -22,
      66
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    15,    24,    59,    17,    18,
      62
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      20,    16,    89,    90,    26,     1,     2,    21,     3,    60,
       4,    61,    16,     5,     6,    23,     7,    27,     1,     2,
       8,    25,     9,    44,    22,   108,    30,    48,   118,    10,
      49,    50,    51,    52,    53,    54,    55,    56,     1,     2,
      28,     3,    19,     4,    89,   109,     5,     6,    29,     7,
      41,     5,     6,     8,     7,     9,    43,    64,    65,    66,
       7,    47,    10,    72,     5,     6,    82,     7,    46,    76,
      83,    78,    70,     5,     6,    82,     7,    85,    86,   105,
      64,    87,    66,     7,    63,    94,    95,    67,    97,   121,
     122,    68,    69,    75,   102,    71,    32,    33,    34,    35,
      36,    37,    38,    39,   110,    73,    79,   112,    74,   114,
      80,    88,    96,    91,   108,    98,    99,   123,    58,   106,
     126,   111,   128,   129,    32,    33,    34,    35,    36,    37,
      38,    39,   116,   119,   137,   120,   124,   125,   141,   131,
     134,   135,    31,   136,   140,   139,    81,    32,    33,    34,
      35,    36,    37,    38,    39,    32,    33,    34,    35,    36,
      37,    38,    39,   143,   104,     0,     0,    57,     0,   101,
       0,     0,     0,     0,     0,     0,     0,   107,    32,    33,
      34,    35,    36,    37,    38,    39,    32,    33,    34,    35,
      36,    37,    38,    39,     0,     0,     0,    42,     0,     0,
     133,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      32,    33,    34,    35,    36,    37,    38,    39,    45,    32,
      33,    34,    35,    36,    37,    38,    39,    77,    32,    33,
      34,    35,    36,    37,    38,    39,    84,    32,    33,    34,
      35,    36,    37,    38,    39,    92,    32,    33,    34,    35,
      36,    37,    38,    39,    93,    32,    33,    34,    35,    36,
      37,    38,    39,   100,    32,    33,    34,    35,    36,    37,
      38,    39,   103,    32,    33,    34,    35,    36,    37,    38,
      39,   113,    32,    33,    34,    35,    36,    37,    38,    39,
     115,    32,    33,    34,    35,    36,    37,    38,    39,   117,
      32,    33,    34,    35,    36,    37,    38,    39,   127,    32,
      33,    34,    35,    36,    37,    38,    39,   130,    32,    33,
      34,    35,    36,    37,    38,    39,   132,    32,    33,    34,
      35,    36,    37,    38,    39,   138,    32,    33,    34,    35,
      36,    37,    38,    39,   142,    32,    33,    34,    35,    36,
      37,    38,    39
};

static const yytype_int16 yycheck[] =
{
       2,     0,    20,    21,     6,    12,    13,    19,    15,    26,
      17,    28,    11,    20,    21,    36,    23,    36,    12,    13,
      27,    24,    29,    25,    36,    23,     0,    29,    26,    36,
      32,    33,    34,    35,    36,    37,    38,    39,    12,    13,
      36,    15,    36,    17,    20,    21,    20,    21,    16,    23,
      11,    20,    21,    27,    23,    29,    18,    20,    21,    58,
      23,    31,    36,    65,    20,    21,    22,    23,    35,    71,
      26,    73,    32,    20,    21,    22,    23,    79,    80,    26,
      20,    21,    81,    23,    12,    87,    88,    35,    90,    20,
      21,    12,    34,    12,    96,    24,     3,     4,     5,     6,
       7,     8,     9,    10,   106,    21,    21,   109,    35,   111,
      21,    24,    24,    33,    23,    33,    30,   119,    25,    21,
     122,    21,   124,   125,     3,     4,     5,     6,     7,     8,
       9,    10,    26,    21,   136,    26,    21,    24,   140,    23,
      23,    23,    11,    21,    21,    26,    25,     3,     4,     5,
       6,     7,     8,     9,    10,     3,     4,     5,     6,     7,
       8,     9,    10,    23,    98,    -1,    -1,    43,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,     3,     4,
       5,     6,     7,     8,     9,    10,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      25,     3,     4,     5,     6,     7,     8,     9,    10,    11,
       3,     4,     5,     6,     7,     8,     9,    10,    11,     3,
       4,     5,     6,     7,     8,     9,    10,    11,     3,     4,
       5,     6,     7,     8,     9,    10,    11,     3,     4,     5,
       6,     7,     8,     9,    10,    11,     3,     4,     5,     6,
       7,     8,     9,    10,    11,     3,     4,     5,     6,     7,
       8,     9,    10,    11,     3,     4,     5,     6,     7,     8,
       9,    10,    11,     3,     4,     5,     6,     7,     8,     9,
      10,    11,     3,     4,     5,     6,     7,     8,     9,    10,
      11,     3,     4,     5,     6,     7,     8,     9,    10,    11,
       3,     4,     5,     6,     7,     8,     9,    10,    11,     3,
       4,     5,     6,     7,     8,     9,    10,    11,     3,     4,
       5,     6,     7,     8,     9,    10,    11,     3,     4,     5,
       6,     7,     8,     9,    10,    11,     3,     4,     5,     6,
       7,     8,     9,    10,    11,     3,     4,     5,     6,     7,
       8,     9,    10
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    12,    13,    15,    17,    20,    21,    23,    27,    29,
      36,    38,    39,    40,    41,    42,    44,    45,    46,    36,
      40,    19,    36,    36,    43,    24,    40,    36,    36,    16,
       0,    39,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    11,    14,    18,    40,    11,    35,    31,    40,    40,
      40,    40,    40,    40,    40,    40,    40,    43,    25,    44,
      26,    28,    47,    12,    20,    21,    44,    35,    12,    34,
      32,    24,    40,    21,    35,    12,    40,    11,    40,    21,
      21,    25,    22,    26,    11,    40,    40,    21,    24,    20,
      21,    33,    11,    11,    40,    40,    24,    40,    33,    30,
      11,    25,    40,    11,    47,    26,    21,    25,    23,    21,
      40,    21,    40,    11,    40,    11,    26,    11,    26,    21,
      26,    20,    21,    40,    21,    24,    40,    11,    40,    40,
      11,    23,    11,    25,    23,    23,    21,    40,    11,    26,
      21,    40,    11,    23
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    37,    38,    38,    39,    39,    39,    39,    39,    40,
      40,    40,    40,    40,    40,    40,    40,    40,    40,    40,
      41,    41,    41,    41,    42,    43,    43,    44,    44,    44,
      44,    44,    44,    44,    44,    45,    46,    47,    47
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     2,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       3,     2,     2,     1,     2,     3,     1,     5,    12,    20,
      20,    28,    19,     4,     1,    10,     5,     8,     6
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
  unsigned long yylno = yyrline[yyrule];
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
    default: /* Avoid compiler warnings. */
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
                  (unsigned long) yystacksize));

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
        case 4:
#line 58 "imadScript.y" /* yacc.c:1666  */
    { printf("Expression: %f\n", (yyvsp[-1].double_val)); }
#line 1406 "imadScript.tab.c" /* yacc.c:1666  */
    break;

  case 5:
#line 59 "imadScript.y" /* yacc.c:1666  */
    { ; }
#line 1412 "imadScript.tab.c" /* yacc.c:1666  */
    break;

  case 9:
#line 65 "imadScript.y" /* yacc.c:1666  */
    { (yyval.double_val) = (yyvsp[-2].double_val) > (yyvsp[0].double_val); }
#line 1418 "imadScript.tab.c" /* yacc.c:1666  */
    break;

  case 10:
#line 66 "imadScript.y" /* yacc.c:1666  */
    { (yyval.double_val) = (yyvsp[-2].double_val) < (yyvsp[0].double_val); }
#line 1424 "imadScript.tab.c" /* yacc.c:1666  */
    break;

  case 11:
#line 67 "imadScript.y" /* yacc.c:1666  */
    { (yyval.double_val) = (yyvsp[-2].double_val) >= (yyvsp[0].double_val); }
#line 1430 "imadScript.tab.c" /* yacc.c:1666  */
    break;

  case 12:
#line 68 "imadScript.y" /* yacc.c:1666  */
    { (yyval.double_val) = (yyvsp[-2].double_val) <= (yyvsp[0].double_val); }
#line 1436 "imadScript.tab.c" /* yacc.c:1666  */
    break;

  case 13:
#line 69 "imadScript.y" /* yacc.c:1666  */
    { (yyval.double_val) = (yyvsp[-2].double_val) + (yyvsp[0].double_val); }
#line 1442 "imadScript.tab.c" /* yacc.c:1666  */
    break;

  case 14:
#line 70 "imadScript.y" /* yacc.c:1666  */
    { (yyval.double_val) = (yyvsp[-2].double_val) - (yyvsp[0].double_val); }
#line 1448 "imadScript.tab.c" /* yacc.c:1666  */
    break;

  case 15:
#line 71 "imadScript.y" /* yacc.c:1666  */
    { 
                                                                  if((yyvsp[0].double_val) == 0)
                                                                  {
                                                                      printf("ERROR: Divide By Zero Error\n");
                                                                      exit(0);
                                                                  } 
                                                                  (yyval.double_val) = (yyvsp[-2].double_val) / (yyvsp[0].double_val);
                                                                }
#line 1461 "imadScript.tab.c" /* yacc.c:1666  */
    break;

  case 16:
#line 79 "imadScript.y" /* yacc.c:1666  */
    { (yyval.double_val) = (yyvsp[-2].double_val) * (yyvsp[0].double_val); }
#line 1467 "imadScript.tab.c" /* yacc.c:1666  */
    break;

  case 17:
#line 80 "imadScript.y" /* yacc.c:1666  */
    { (yyval.double_val) = (yyvsp[-1].double_val); }
#line 1473 "imadScript.tab.c" /* yacc.c:1666  */
    break;

  case 18:
#line 81 "imadScript.y" /* yacc.c:1666  */
    { (yyval.double_val) = (yyvsp[0].double_val); }
#line 1479 "imadScript.tab.c" /* yacc.c:1666  */
    break;

  case 19:
#line 82 "imadScript.y" /* yacc.c:1666  */
    {
                                                                    int result;
                                                                    result = wasItDeclaredBefore((yyvsp[0].input_var_string));
                                                                    int indexOfVar;
                                                                    int valueOfVar = 0;
                                                                    if(result == 0)
                                                                    {
                                                                        printf("ERROR: Wasn't declared before\n");
                                                                        exit(0);
                                                                    }
                                                                    else
                                                                    {
                                                                        printf("Declared Before\n");

                                                                        indexOfVar = getIndexNumber((yyvsp[0].input_var_string));
                                                                        valueOfVar = values[indexOfVar];
                                                                    }
                                                                    
                                                                    (yyval.double_val) = valueOfVar;
                                                                }
#line 1504 "imadScript.tab.c" /* yacc.c:1666  */
    break;

  case 20:
#line 104 "imadScript.y" /* yacc.c:1666  */
    {
                                                                    
                                                                    int result;
                                                                    result = wasItDeclaredBefore((yyvsp[-2].input_var_string));

                                                                    if(result == 0)
                                                                    {
                                                                        printf("ERROR: Wasn't declared before\n");
                                                                        exit(0);
                                                                    }
                                                                    else{
                                                                        printf("declared before\n");

                                                                        int indexOfVar = getIndexNumber((yyvsp[-2].input_var_string));
                                                                        values[indexOfVar] = (yyvsp[0].double_val);

                                                                    }    

                                                                    
                                                                }
#line 1529 "imadScript.tab.c" /* yacc.c:1666  */
    break;

  case 21:
#line 124 "imadScript.y" /* yacc.c:1666  */
    {
                                                                    
                                                                    int result1;
                                                                    result1 = wasItDeclaredBefore((yyvsp[0].input_var_string));

                                                                    if(result1 == 0)
                                                                    {
                                                                        printf("Wasn't declared before\n");
                                                                    }
                                                                    else{
                                                                        //this works because wasItDeclaredBefore automatically sets 
                                                                        //the matchedStringValue to the value if the variable already
                                                                        //exists
                                                                        printf("Var value: %d\n", matchedStringValue);
                                                                    }    
                                                                }
#line 1550 "imadScript.tab.c" /* yacc.c:1666  */
    break;

  case 22:
#line 140 "imadScript.y" /* yacc.c:1666  */
    {
                                                                    printf("Printing symbol and value table:\n\n");
                                                                    int i;
                                                                    for(i = 0; i < current; i++)
                                                                    {
                                                                        printf("Variable: %s    Value: %f \n",sym[i], values[i]);
                                                                    }
                                                                    printf("\n\n");
                                                                }
#line 1564 "imadScript.tab.c" /* yacc.c:1666  */
    break;

  case 25:
#line 155 "imadScript.y" /* yacc.c:1666  */
    {printf("Multiple declaration\n");}
#line 1570 "imadScript.tab.c" /* yacc.c:1666  */
    break;

  case 26:
#line 156 "imadScript.y" /* yacc.c:1666  */
    {
                                                                    int result;
                                                                    result = wasItDeclaredBefore((yyvsp[0].input_var_string));
                                                                    
                                                                    printf("VarName: %s\n",(yyvsp[0].input_var_string));
                                                                    
                                                                    if(result == 0)
                                                                    {
                                                                        printf("Wasn't declared before\n");
                                                                        //store the values as input
                                                                        for(int i = 0; i < strlen((yyvsp[0].input_var_string)) ; i++)
                                                                        {
                                                                            sym[current][i] = (yyvsp[0].input_var_string)[i];
                                                                        }
                                                                        values[current] = 0;

                                                                        //increase current 
                                                                        current++;
                                                                    }
                                                                    else{
                                                                        printf("declared before\n");
                                                                        
                                                                    } 
                                                                }
#line 1599 "imadScript.tab.c" /* yacc.c:1666  */
    break;

  case 27:
#line 182 "imadScript.y" /* yacc.c:1666  */
    {
                                                                    //single if structure
                                                                    printf("Value of Argument: %f\n",(yyvsp[-2].double_val));
                                                                    if((yyvsp[-2].double_val))
                                                                    {
                                                                        printf("Value of expressions: \n");
                                                                        printIfOpValues();
                                                                    }
                                                                    resetIfOpValues();
                                                                }
#line 1614 "imadScript.tab.c" /* yacc.c:1666  */
    break;

  case 28:
#line 192 "imadScript.y" /* yacc.c:1666  */
    {

                                                                    //if-else structure
                                                                    if((yyvsp[-9].double_val))
                                                                    {
                                                                        printf("Inside if Structure\n");
                                                                        printf("Value of Argument: %f\n", (yyvsp[-9].double_val));
                                                                        printf("Value of expression: %f\n",(yyvsp[-6].double_val));
                                                                    }
                                                                    else
                                                                    {
                                                                        printf("Inside if -> default structure\n");
                                                                        printf("Value of expression: %f\n", (yyvsp[-2].double_val));
                                                                    }
                                                                }
#line 1634 "imadScript.tab.c" /* yacc.c:1666  */
    break;

  case 29:
#line 207 "imadScript.y" /* yacc.c:1666  */
    {
                                                                    //if (nested if-else) - else structure
                                                                    if((yyvsp[-17].double_val))
                                                                    {
                                                                        printf("Inside if structure\n");
                                                                        printf("Value of Argument: %f\n", (yyvsp[-17].double_val));
                                                                        if((yyvsp[-12].double_val))
                                                                        {
                                                                            printf("Inside if->if structure\n");
                                                                            printf("Value of Argument: %f\n", (yyvsp[-13].double_val));
                                                                            printf("Value of Expression: %f\n", (yyvsp[-10].double_val));
                                                                        }
                                                                        else
                                                                        {
                                                                            printf("Inside if -> (if -> else) structure\n");
                                                                            printf("Value of expression: %f", (yyvsp[-6].double_val));
                                                                            
                                                                        }
                                                                    }
                                                                    else
                                                                    {
                                                                        printf("Inside if -> (if -> else) -> else structure\n");
                                                                        printf("Value of expression: %f", (yyvsp[-2].double_val));
                                                                    }
                                                                }
#line 1664 "imadScript.tab.c" /* yacc.c:1666  */
    break;

  case 30:
#line 232 "imadScript.y" /* yacc.c:1666  */
    {
                                                                    //if - else ( nested if-else ) structure
                                                                    if((yyvsp[-17].double_val))
                                                                    {
                                                                        printf("Inside if structure\n");
                                                                        printf("Value of Argument: %f\n", (yyvsp[-17].double_val));
                                                                        printf("Value of expression: %f\n", (yyvsp[-14].double_val));
                                                                    }
                                                                    else
                                                                    {
                                                                        
                                                                        if((yyvsp[-9].double_val))
                                                                        {
                                                                            printf("Inside if -> else -> if structure\n");
                                                                            printf("Value of Argument: %f\n", (yyvsp[-9].double_val));
                                                                            printf("Value of Expression: %f\n", (yyvsp[-6].double_val));
                                                                        }
                                                                        else
                                                                        {
                                                                            printf("Inside if -> else -> (if -> else) structure\n");
                                                                            printf("Value of expression: %f", (yyvsp[-2].double_val));
                                                                            
                                                                        }
                                                                    }
                                                                }
#line 1694 "imadScript.tab.c" /* yacc.c:1666  */
    break;

  case 31:
#line 257 "imadScript.y" /* yacc.c:1666  */
    {

                                                                    if((yyvsp[-25].double_val))
                                                                    {
                                                                        printf("Inside if structure\n");
                                                                        printf("Value of Argument: %f\n",(yyvsp[-25].double_val));
                                                                        if((yyvsp[-22].double_val))
                                                                        {
                                                                            printf("Inside if -> if structure\n");
                                                                            printf("Value of expression: %f\n",(yyvsp[-19].double_val));
                                                                        }
                                                                        else
                                                                        {
                                                                            printf("Inside if -> if -> else structure\n");
                                                                            printf("Value of expression: %f\n",(yyvsp[-15].double_val));
                                                                        }
                                                                    }
                                                                    else 
                                                                    {
                                                                        if((yyvsp[-10].double_val))
                                                                        {
                                                                            printf("Inside if -> if -> else -> if structure\n");
                                                                            printf("Value of argument: %f\n", (yyvsp[-10].double_val));
                                                                            printf("Value of expression: %f\n",(yyvsp[-7].double_val));
                                                                        }
                                                                        else
                                                                        {
                                                                            printf("Inside if -> if -> else -> else -> if ->  else structure\n");
                                                                            printf("Value of expression: %f\n",(yyvsp[-3].double_val));
                                                                        }
                                                                    }


                                                                }
#line 1733 "imadScript.tab.c" /* yacc.c:1666  */
    break;

  case 32:
#line 291 "imadScript.y" /* yacc.c:1666  */
    {

                                                                    if((yyvsp[-16].double_val))
                                                                    {
                                                                        printf("IF \nCondition Result: %f\nExpression Result: %f\n", (yyvsp[-16].double_val), (yyvsp[-13].double_val));
                                                                    }
                                                                    else if((yyvsp[-9].double_val))
                                                                    {
                                                                        printf("ELSE IF \nCondition Result: %f\nExpression Result: %f\n", (yyvsp[-9].double_val), (yyvsp[-6].double_val));
                                                                    }
                                                                    else
                                                                    {
                                                                        printf("DEFAULT \nExpression Result: %f\n", (yyvsp[-2].double_val));
                                                                    }

                                                                }
#line 1754 "imadScript.tab.c" /* yacc.c:1666  */
    break;

  case 33:
#line 307 "imadScript.y" /* yacc.c:1666  */
    {
                                                                    pushIfOpValues((yyvsp[-2].double_val));
                                                                }
#line 1762 "imadScript.tab.c" /* yacc.c:1666  */
    break;

  case 35:
#line 313 "imadScript.y" /* yacc.c:1666  */
    {
                                                                    int result = wasItDeclaredBefore((yyvsp[-8].input_var_string));
                                                                    if(result)
                                                                    {
                                                                        int index = getIndexNumber((yyvsp[-8].input_var_string));
                                                                        float expressionResult = (yyvsp[-2].double_val);
                                                                        int i;
                                                                        
                                                                        //printf("Exp: %f\n",$8);
                                                                        
                                                                        if((yyvsp[-6].double_val) < (yyvsp[-4].double_val))
                                                                        {
                                                                            for(i = (yyvsp[-6].double_val); i <= (yyvsp[-4].double_val); i++)
                                                                            {
                                                                                printf("Expression Result: %f\n",expressionResult);
                                                                                printf("Variable Value: %d\n", i);
                                                                                values[index] = i;
                                                                            }
                                                                        }
                                                                        else if((yyvsp[-6].double_val) > (yyvsp[-4].double_val))
                                                                        {
                                                                            for(i = (yyvsp[-4].double_val); i >= (yyvsp[-6].double_val); i--)
                                                                            {
                                                                                printf("Expression Result: %f\n",expressionResult);
                                                                                printf("Variable Value: %d\n", i);
                                                                                values[index] = i;
                                                                            }
                                                                        }
                                                                        else
                                                                        {
                                                                            printf("Expression Result: %f\n",expressionResult);
                                                                            printf("Variable Value: %f\n", (yyvsp[-6].double_val));
                                                                            values[index] = (yyvsp[-6].double_val);
                                                                        }
                                                                    }
                                                                    else
                                                                    {
                                                                        printf("Variable in loop not declared before\n");
                                                                        
                                                                    }
                                                                }
#line 1808 "imadScript.tab.c" /* yacc.c:1666  */
    break;

  case 36:
#line 356 "imadScript.y" /* yacc.c:1666  */
    {
                                                                    int result;
                                                                    result = wasItDeclaredBefore((yyvsp[-3].input_var_string));

                                                                    if(result == 0)
                                                                    {
                                                                        printf("ERROR: wasn't declared before\n");
                                                                        exit(0);
                                                                    }
                                                                    else
                                                                    {
                                                                        int indexOfVar;
                                                                        printf("Was declared before\n");
                                                                        indexOfVar = getIndexNumber((yyvsp[-3].input_var_string));
                                                                        switchValue = values[indexOfVar];
                                                                        printf("Switch Value: %f\n", switchValue);
                                                                    }
                                                                }
#line 1831 "imadScript.tab.c" /* yacc.c:1666  */
    break;

  case 37:
#line 376 "imadScript.y" /* yacc.c:1666  */
    {
                                                                    if((yyvsp[-6].double_val) == switchValue && printedCaseBefore == 0)
                                                                    {
                                                                        printf("Case Matched: %f\n", (yyvsp[-6].double_val));
                                                                        printf("Value of Expression: %f\n", (yyvsp[-3].double_val));
                                                                        printedCaseBefore = 1;
                                                                    }
                                                                }
#line 1844 "imadScript.tab.c" /* yacc.c:1666  */
    break;

  case 38:
#line 384 "imadScript.y" /* yacc.c:1666  */
    {
                                                                    if(printedCaseBefore == 0)
                                                                    {
                                                                        printf("Default case matched\n");
                                                                        printf("Value of expression: %f\n", (yyvsp[-2].double_val));
                                                                    }
                                                                }
#line 1856 "imadScript.tab.c" /* yacc.c:1666  */
    break;


#line 1860 "imadScript.tab.c" /* yacc.c:1666  */
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
#line 393 "imadScript.y" /* yacc.c:1910  */


int wasItDeclaredBefore(char string[1000])
{
    //printf("WIDB: ArgumentString: %s %lu\n", string, strlen(string));

    //returns 0 if not delcared before
    //returns 1 if declared before
    int i;
    for(i = 0; i < current; i++)
    {
        //printf("WIDB: symString: %s symLength: %lu  Value: %f  i: %d   current: %d\n", sym[i], strlen(sym[i]), values[i], i, current);

        if(strlen(string) == strlen(sym[i]))
        {
            int result2;
            result2 = matchStrings(string, sym[i]);
            if(result2 == 1)
            {
                //string matched => return 1
                //set the gloval value variable to the actual value
                matchedStringValue = values[i];
                return 1;
            }
            else
            {
                //string not matched => continue to next string
                continue;
            }
        }
        else
        {
            continue;
        }
    }

    //no string has been matched => return 0
    return 0;
}

int matchStrings(char string1[1000], char string2[1000])
{
    //returns 1 if match
    //returns 0 if not match
    int len;
    len = strlen(string1);

    int i;
    for(i = 0; i < len; i++)
    {
        if(string1[i] == string2[i])
        {
            //if match => continue searching
            continue;
        }
        else
        {
            //if not match => return 0
            return 0;
        }
    }

    //for loop ended => matched the strings
    return 1;
}

int getIndexNumber(char string[1000])
{
    int i;
    for(int i = 0; i < current; i++)
    {
        //printf("GIN: input: %s  symstr: %s\n",string,sym[i]);

        //check if input and sym[i] has same length
        //because, by default matchStrings() takes that its two argument strings have same length
        if(strlen(string) == strlen(sym[i]))
        {
            if(matchStrings(string, sym[i]))
            {
                //printf("GIN: %d\n",i);

                return i;
            }
        }
        
    }
}

void pushIfOpValues(float value)
{
    ifOpValues[currentIfOp] = value;
    currentIfOp++;
}

void printIfOpValues()
{
    int i;
    for( i = currentIfOp-1; i >= 0; i--)
    {
        printf("%f\n",ifOpValues[i]);
    }
}

void resetIfOpValues()
{
    memset(&ifOpValues[0], 0, sizeof(ifOpValues));
    currentIfOp = 0;
}

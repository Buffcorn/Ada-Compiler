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




/* Copy the first part of user declarations.  */
#line 1 "ada.y" /* yacc.c:339  */

int yylex();
int yyerror(char*);
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "SymbolTable.c"
#include "LinkedList.c"
#include "Record.c"
#include "PatchStruct.c"
extern int lineno;
record_global GlobalTrack = {0,1,3,NULL,0,0,NULL,0,0,0,0,0,0,0};
FILE *output;

#line 81 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    IS = 258,
    BEG = 259,
    END = 260,
    PROCEDURE = 261,
    ID = 262,
    NUMBER = 263,
    TYPE = 264,
    ARRAY = 265,
    RAISE = 266,
    OTHERS = 267,
    RECORD = 268,
    IN = 269,
    OUT = 270,
    RANGE = 271,
    CONSTANT = 272,
    ASSIGN = 273,
    EXCEPTION = 274,
    NULLWORD = 275,
    LOOP = 276,
    IF = 277,
    THEN = 278,
    ELSEIF = 279,
    ELSE = 280,
    CASE = 281,
    EXIT = 282,
    WHEN = 283,
    AND = 284,
    OR = 285,
    EQ = 286,
    NEQ = 287,
    LT = 288,
    GT = 289,
    GTE = 290,
    LTE = 291,
    TICK = 292,
    NOT = 293,
    EXP = 294,
    ARROW = 295,
    OF = 296,
    DOTDOT = 297,
    ENDIF = 298,
    ENDREC = 299,
    ENDLOOP = 300,
    ENDCASE = 301,
    EXITWHEN = 302
  };
#endif
/* Tokens.  */
#define IS 258
#define BEG 259
#define END 260
#define PROCEDURE 261
#define ID 262
#define NUMBER 263
#define TYPE 264
#define ARRAY 265
#define RAISE 266
#define OTHERS 267
#define RECORD 268
#define IN 269
#define OUT 270
#define RANGE 271
#define CONSTANT 272
#define ASSIGN 273
#define EXCEPTION 274
#define NULLWORD 275
#define LOOP 276
#define IF 277
#define THEN 278
#define ELSEIF 279
#define ELSE 280
#define CASE 281
#define EXIT 282
#define WHEN 283
#define AND 284
#define OR 285
#define EQ 286
#define NEQ 287
#define LT 288
#define GT 289
#define GTE 290
#define LTE 291
#define TICK 292
#define NOT 293
#define EXP 294
#define ARROW 295
#define OF 296
#define DOTDOT 297
#define ENDIF 298
#define ENDREC 299
#define ENDLOOP 300
#define ENDCASE 301
#define EXITWHEN 302

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 27 "ada.y" /* yacc.c:355  */

    int integer;
    char * var;
    struct LL_node * head;
    struct LLNum_node * headNum;
    struct node * node_p;
    struct record * record_p;
    struct LL_RW * RW;

#line 225 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 242 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   220

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  122
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  232

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

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
      49,    50,    56,    55,    52,    54,     2,    57,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    51,    48,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    53,     2,     2,     2,     2,     2,
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
      45,    46,    47
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    37,    37,    39,    60,    79,   114,   120,   129,   145,
     153,   158,   193,   222,   226,   230,   234,   239,   244,   251,
     254,   258,   262,   266,   271,   272,   274,   286,   288,   314,
     327,   328,   330,   332,   356,   358,   362,   367,   369,   387,
     388,   390,   391,   536,   537,   538,   556,   565,   576,   582,
     583,   585,   617,   649,   655,   668,   676,   680,   685,   695,
     704,   711,   732,   753,   772,   791,   811,   822,   828,   829,
     831,   832,   834,   839,   845,   850,   860,   872,   878,   879,
     881,   893,   895,   906,   908,   913,   921,   925,   952,   956,
    1023,  1027,  1042,  1071,  1075,  1105,  1109,  1150,  1170,  1180,
    1218,  1222,  1248,  1252,  1257,  1261,  1265,  1269,  1273,  1277,
    1282,  1286,  1291,  1295,  1300,  1328,  1340,  1351,  1352,  1354,
    1363,  1364,  1374
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IS", "BEG", "END", "PROCEDURE", "ID",
  "NUMBER", "TYPE", "ARRAY", "RAISE", "OTHERS", "RECORD", "IN", "OUT",
  "RANGE", "CONSTANT", "ASSIGN", "EXCEPTION", "NULLWORD", "LOOP", "IF",
  "THEN", "ELSEIF", "ELSE", "CASE", "EXIT", "WHEN", "AND", "OR", "EQ",
  "NEQ", "LT", "GT", "GTE", "LTE", "TICK", "NOT", "EXP", "ARROW", "OF",
  "DOTDOT", "ENDIF", "ENDREC", "ENDLOOP", "ENDCASE", "EXITWHEN", "';'",
  "'('", "')'", "':'", "','", "'|'", "'-'", "'+'", "'*'", "'/'", "$accept",
  "program", "main_body", "main_specification", "procedure_body", "begin",
  "procedure_body_prime", "procedure_specification",
  "formal_parameter_part", "parameters", "mode", "identifier_list",
  "type_name", "declarative_part", "declarative_part_prime", "types",
  "component_list", "component", "objects", "constant_number",
  "constant_expression", "exceptions", "sequence_of_statements",
  "statement", "case_exp", "caseList", "caseHandler", "case_choice",
  "case_choice_sequence", "op_param", "op_assign", "enum_list",
  "expression_list", "loop_part", "loop_start", "loop_stmt_list",
  "loop_stmt", "exit_cond", "condition", "if_statement", "if_start",
  "if_begin", "else_if", "else_if_start", "else_if_begin", "else",
  "else_begin", "then", "expression", "relation", "simple_expression",
  "term", "factor", "primary", "boolean_operation", "relational_operation",
  "adding_operation", "multiplying_operation", "exception_part",
  "exception_start", "exceptionList", "exceptionHandler",
  "choice_sequence", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,    59,    40,
      41,    58,    44,   124,    45,    43,    42,    47
};
# endif

#define YYPACT_NINF -109

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-109)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      44,    19,    64,  -109,    41,  -109,  -109,   107,    70,    30,
      91,   109,    95,  -109,    68,   144,  -109,   103,   105,   106,
    -109,   145,   152,  -109,   145,   153,   104,  -109,    27,   107,
     107,   107,  -109,    20,    40,   108,   107,  -109,   139,  -109,
    -109,   111,    10,   110,  -109,  -109,     5,   143,    27,  -109,
      73,  -109,   140,     5,  -109,  -109,  -109,   114,   145,   123,
     145,   145,  -109,   125,   144,     5,     5,   147,   118,  -109,
    -109,   119,  -109,    17,     5,    14,   164,   113,   102,    92,
      93,  -109,   131,  -109,   167,   146,  -109,   127,     5,  -109,
      65,  -109,  -109,  -109,   148,   140,     5,   155,   113,   123,
     128,   132,   133,  -109,  -109,  -109,   138,   134,   135,   168,
    -109,   175,    27,  -109,   113,   137,    31,     8,   141,  -109,
       5,  -109,    67,    93,   157,  -109,  -109,     5,  -109,  -109,
    -109,  -109,  -109,  -109,     5,  -109,  -109,    14,  -109,  -109,
      14,    17,   142,    25,   146,  -109,  -109,   149,   150,  -109,
    -109,   151,    27,  -109,   155,  -109,    27,   154,    38,  -109,
     145,   123,  -109,   125,  -109,  -109,   143,  -109,     5,   -14,
    -109,   113,  -109,    74,  -109,     2,   -17,  -109,   102,    92,
      93,  -109,  -109,  -109,  -109,  -109,   -22,  -109,  -109,  -109,
     156,  -109,    27,  -109,   123,  -109,  -109,   175,   183,  -109,
     184,  -109,  -109,   159,  -109,    49,   158,  -109,    27,   185,
    -109,  -109,   160,  -109,   161,   162,    27,     2,  -109,  -109,
    -109,   166,  -109,     8,  -109,  -109,   175,   163,    78,  -109,
    -109,  -109
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     0,     4,     1,    25,     0,    18,
       0,    25,    10,     7,     0,     0,    23,     0,     0,     0,
       8,     0,     0,    24,     0,     0,     0,     6,    40,    25,
      25,    25,    17,     0,     0,     0,    25,    19,     0,    38,
      33,    57,     0,     0,    67,    77,     0,   115,    40,    43,
       0,    44,    79,     0,    21,    20,    22,     0,     0,     0,
       0,     0,     9,    16,     0,     0,     0,    60,     0,    46,
      41,    99,    98,     0,     0,     0,     0,    48,    86,    88,
      90,    93,    95,   116,     0,     0,    39,     0,     0,    70,
       0,    68,    71,    81,    83,    79,     0,     0,    74,     0,
       0,     0,     0,    32,    35,    36,     0,     0,     0,    15,
      14,     0,    40,    34,    37,     0,    65,     0,     0,    45,
       0,    97,     0,    91,     0,   102,   103,     0,   104,   105,
     106,   107,   108,   109,     0,   111,   110,     0,   112,   113,
       0,     0,     0,     0,   114,   118,    72,     0,     0,    69,
      84,     0,    40,    78,     0,    85,    40,     0,     0,    27,
      31,     0,    28,    16,    13,    12,   115,    56,     0,    99,
      59,    58,    42,     0,   100,     0,     0,    50,    87,    89,
      92,    94,    96,     3,   121,   122,     0,   117,    73,    66,
       0,    82,    40,    76,     0,    30,    29,     0,     0,    64,
       0,   101,    55,     0,    52,    54,     0,    49,    40,     0,
      75,    80,     0,    11,     0,    63,    40,     0,    47,   119,
     120,     0,     5,     0,    51,    53,     0,     0,     0,    26,
      62,    61
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -109,  -109,  -109,  -109,  -109,   129,  -109,  -109,  -109,  -109,
      32,   -19,  -108,    96,   189,  -109,    42,  -109,   -54,   -93,
    -109,  -109,   -47,   -23,  -109,  -109,    29,  -109,   -16,  -109,
    -109,   -20,    46,  -109,  -109,  -109,   122,  -109,   -15,  -109,
    -109,  -109,   120,  -109,  -109,  -109,  -109,    54,   -46,    89,
      83,   -67,    79,   -66,  -109,  -109,  -109,  -109,    52,  -109,
    -109,    76,  -109
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    11,    28,    12,    13,    25,    34,
     111,    14,    40,    15,    16,    17,   101,   102,    18,   106,
     113,    19,    47,    48,    76,   176,   177,   203,   204,    67,
     118,   170,   115,    49,    50,    90,    91,    92,    97,    51,
      52,    53,    94,    95,    96,   151,   152,   156,    98,    78,
      79,    80,    81,    82,   127,   134,   137,   140,    84,    85,
     144,   145,   186
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      77,    86,    32,   165,   103,    35,   157,   121,   123,    71,
      72,   175,    71,    72,   202,   169,    72,    68,   208,   114,
     116,    71,    72,   200,    71,    72,     5,    89,   122,   206,
      57,   209,   184,    58,    41,   120,    59,   185,    42,   100,
      73,   107,   108,    73,     7,    37,    73,    43,    44,    45,
       1,    74,    73,    46,    74,    38,    75,    74,    69,    75,
     125,   126,    75,    74,     6,   166,    74,    89,   196,    60,
     180,   171,    41,   147,   173,   182,    42,    20,   125,   126,
      41,   154,    21,   168,    42,    43,    44,    45,    61,   213,
      62,    46,    87,    43,    44,    45,   125,   126,    22,    46,
      87,   212,   217,   125,   126,   191,   103,   125,   126,   193,
     148,    37,    88,     8,     9,     8,    10,   174,   229,    26,
      88,    38,   116,    39,   201,    54,    55,    56,   231,   205,
     104,   105,    64,   128,   129,   130,   131,   132,   133,   109,
     110,   100,   125,   126,    24,   211,   135,   136,    27,   138,
     139,    29,     9,    30,    31,    33,    36,    65,    70,    63,
      66,   219,    83,    99,    93,   117,   119,   124,   120,   224,
     141,   205,   142,   150,   143,   146,   159,   228,   155,   158,
     161,   160,    37,   164,   162,   175,   163,   167,   214,   172,
     183,   215,   220,   112,   190,   197,   194,   188,   189,   216,
      23,   225,   195,   227,   210,   207,   218,   226,   192,   222,
     221,   223,   149,   230,   199,   153,   178,   179,   198,   181,
     187
};

static const yytype_uint8 yycheck[] =
{
      46,    48,    21,   111,    58,    24,    99,    73,    75,     7,
       8,    28,     7,     8,    12,     7,     8,     7,    40,    65,
      66,     7,     8,    37,     7,     8,     7,    50,    74,    46,
      10,    53,     7,    13,     7,    49,    16,    12,    11,    58,
      38,    60,    61,    38,     3,     7,    38,    20,    21,    22,
       6,    49,    38,    26,    49,    17,    54,    49,    48,    54,
      29,    30,    54,    49,     0,   112,    49,    90,   161,    49,
     137,   117,     7,    88,   120,   141,    11,     7,    29,    30,
       7,    96,    52,    52,    11,    20,    21,    22,    48,   197,
      50,    26,    27,    20,    21,    22,    29,    30,     7,    26,
      27,   194,    53,    29,    30,   152,   160,    29,    30,   156,
      45,     7,    47,     6,     7,     6,     9,    50,   226,    51,
      47,    17,   168,    19,    50,    29,    30,    31,    50,   175,
       7,     8,    36,    31,    32,    33,    34,    35,    36,    14,
      15,   160,    29,    30,    49,   192,    54,    55,     4,    56,
      57,    48,     7,    48,    48,     3,     3,    18,    48,    51,
      49,   208,    19,    49,    24,    18,    48,     3,    49,   216,
      39,   217,     5,    25,    28,    48,    44,   223,    23,    51,
      42,    48,     7,    15,    50,    28,    51,    50,     5,    48,
      48,     7,     7,    64,    43,   163,    42,    48,    48,    40,
      11,   217,   160,   223,    48,   176,    48,    41,   154,    48,
      50,    49,    90,    50,   168,    95,   127,   134,   166,   140,
     144
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    59,    60,    61,     7,     0,     3,     6,     7,
       9,    62,    64,    65,    69,    71,    72,    73,    76,    79,
       7,    52,     7,    72,    49,    66,    51,     4,    63,    48,
      48,    48,    69,     3,    67,    69,     3,     7,    17,    19,
      70,     7,    11,    20,    21,    22,    26,    80,    81,    91,
      92,    97,    98,    99,    71,    71,    71,    10,    13,    16,
      49,    48,    50,    51,    71,    18,    49,    87,     7,    48,
      48,     7,     8,    38,    49,    54,    82,   106,   107,   108,
     109,   110,   111,    19,   116,   117,    80,    27,    47,    81,
      93,    94,    95,    24,   100,   101,   102,    96,   106,    49,
      69,    74,    75,    76,     7,     8,    77,    69,    69,    14,
      15,    68,    63,    78,   106,    90,   106,    18,    88,    48,
      49,   111,   106,   109,     3,    29,    30,   112,    31,    32,
      33,    34,    35,    36,   113,    54,    55,   114,    56,    57,
     115,    39,     5,    28,   118,   119,    48,    96,    45,    94,
      25,   103,   104,   100,    96,    23,   105,    77,    51,    44,
      48,    42,    50,    51,    15,    70,    80,    50,    52,     7,
      89,   106,    48,   106,    50,    28,    83,    84,   107,   108,
     109,   110,   111,    48,     7,    12,   120,   119,    48,    48,
      43,    80,   105,    80,    42,    74,    77,    68,   116,    90,
      37,    50,    12,    85,    86,   106,    46,    84,    40,    53,
      48,    80,    77,    70,     5,     7,    40,    53,    48,    80,
       7,    50,    48,    49,    80,    86,    41,    89,   106,    70,
      50,    50
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      66,    67,    67,    68,    68,    68,    68,    69,    69,    70,
      71,    71,    71,    71,    72,    72,    73,    73,    73,    73,
      74,    74,    75,    76,    76,    77,    77,    78,    79,    80,
      80,    81,    81,    81,    81,    81,    81,    81,    82,    83,
      83,    84,    85,    86,    86,    86,    87,    87,    88,    88,
      88,    89,    89,    89,    90,    90,    91,    92,    93,    93,
      94,    94,    95,    95,    96,    97,    98,    99,   100,   100,
     101,   102,   103,   103,   104,   105,   106,   106,   107,   107,
     108,   108,   108,   109,   109,   110,   110,   110,   111,   111,
     111,   111,   112,   112,   113,   113,   113,   113,   113,   113,
     114,   114,   115,   115,   116,   116,   117,   118,   118,   119,
     120,   120,   120
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     8,     2,     9,     1,     1,     2,     3,
       0,     6,     4,     2,     1,     1,     0,     3,     1,     1,
       3,     3,     3,     1,     2,     0,    11,     6,     6,     7,
       3,     2,     1,     3,     5,     1,     1,     1,     3,     2,
       0,     2,     4,     1,     1,     3,     2,     6,     1,     2,
       1,     4,     1,     3,     1,     1,     3,     0,     2,     2,
       0,     6,     6,     3,     3,     1,     4,     1,     1,     2,
       1,     1,     2,     3,     1,     5,     4,     1,     2,     0,
       4,     1,     2,     0,     1,     1,     1,     3,     1,     3,
       1,     2,     3,     1,     3,     1,     3,     2,     1,     1,
       3,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     0,     1,     2,     1,     4,
       3,     1,     1
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
        case 2:
#line 37 "ada.y" /* yacc.c:1646  */
    {printf ("\n*****\nDONE\n*****\n");}
#line 1499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 43 "ada.y" /* yacc.c:1646  */
    {
                          printf("\nPopping scope for %s, so print tree\n", arr[i].Key);
                          printDFS(arr[i].Root);
                          Pop();
                          PopToPatchStack();
                          fprintf(output, "%d     r%d := contents b, 1\n", GlobalTrack.Instruction++, GlobalTrack.register_Num);
                          fprintf(output, "%d     b := contents b, 3\n", GlobalTrack.Instruction++);
                          fprintf(output, "%d     pc := r%d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num++);
                          fprintf(output, "\n***************\n");
                          fprintf(output, "DONE WITH MAIN\n");
                          fprintf(output, "***************\n");
                          AddPatchList(0, GlobalTrack.Instruction);
                          AddPatchList(1, GlobalTrack.Instruction + (yyvsp[-5].integer));
                          bubbleSort(PatchListLL);
                          printPL(PatchListLL);
                        }
#line 1520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 61 "ada.y" /* yacc.c:1646  */
    {
                          PushToPatchStack();
                          Push((yyvsp[0].var));
                          fprintf(output, "%d     b := ?\n", GlobalTrack.Instruction++);
                          fprintf(output, "%d     contents b, 0 := ?\n", GlobalTrack.Instruction++);
                          fprintf(output, "%d     contents b, 1 := 5\n", GlobalTrack.Instruction++);
                          fprintf(output, "%d     r%d := 0\n", GlobalTrack.Instruction++, GlobalTrack.register_Num++);
                          struct patch_list * Temp;
                          Temp = create_new_patch_list(GlobalTrack.Instruction);
                          PatchListLL = Temp;
                          fprintf(output, "%d     pc := ?\n", GlobalTrack.Instruction++);
                          fprintf(output, "%d     halt\n", GlobalTrack.Instruction++);
                          (yyval.integer) = GlobalTrack.Instruction;
                          incrementOffset(4);
                          GlobalTrack.in_exception_part = false;GlobalTrack.raise_list = 0;
                          GlobalTrack.instruction_counter = 0;
                        }
#line 1542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 83 "ada.y" /* yacc.c:1646  */
    {
                          node_t * outcome = Search((yyvsp[-8].var));
                          outcome -> Proc_Beg = (yyvsp[-4].integer);
                          printf("\nPopping scope for %s, so print tree\n", arr[i].Key);
                          printDFS(arr[i].Root);
                          Pop();
                          struct patch_list * temp = ToPatch_Arr[ToPatchCounter];
                          while (temp != NULL) {
                            AddPatchList(temp->location, GlobalTrack.Instruction);
                            temp = temp->next;
                          }
                          PopToPatchStack();
                          outcome -> next = (yyvsp[-7].node_p);
                          node_t * current = (yyvsp[-7].node_p);
                          while (current != NULL) {
                            if (strcmp(current->mode, "out") == 0 || strcmp(current->mode, "in out")==0) {
                              fprintf(output, "%d     r%d := contents b, %d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, current->value+1);
                              fprintf(output, "%d     contents r%d := contents b, %d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, current->value);
                            }
                            current = current -> next;
                          }
                          fprintf(output, "%d     r%d := contents b, 1\n", GlobalTrack.Instruction++, GlobalTrack.register_Num);
                          fprintf(output, "%d     b := contents b, 3\n", GlobalTrack.Instruction++);
                          fprintf(output, "%d     pc := r%d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num++);
                          outcome->Size_of = currentOffset();
                          GlobalTrack.in_exception_part = false;
                          GlobalTrack.raise_list = 0;
                          prevOffset();
                          procedure_counter = 0;
                        }
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 115 "ada.y" /* yacc.c:1646  */
    {
                          PatchListLL -> insert = GlobalTrack.Instruction;
                          (yyval.integer) = GlobalTrack.Instruction;
  			                }
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 121 "ada.y" /* yacc.c:1646  */
    {
                          PushToPatchStack();
                          GlobalTrack.in_exception_part = false;
                          GlobalTrack.raise_list = 0;
                          GlobalTrack.instruction_counter = 0;
                          (yyval.var) = (yyvsp[0].var);
                        }
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 130 "ada.y" /* yacc.c:1646  */
    {
                          struct node * node_p;
                          node_p = create_new_node((yyvsp[0].var));
                          strcpy(node_p->var, (yyvsp[0].var));
                          Add(node_p->var);
                          node_t * outcome = RecursiveSearch(arr[i].Root, node_p->var);
                          strcpy(outcome->kind, "procedure");
                          (yyval.var) = (yyvsp[0].var);
                          Push(node_p->var);
                          nextOffset();//Go to the Next Offset
                          incrementOffset(4);
                          outcome->Size_of = current_pos;
                          procedure_counter = 0;
	          	          }
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 146 "ada.y" /* yacc.c:1646  */
    {
                          struct node * node_p = (yyvsp[-1].node_p);
                          while (node_p != NULL) {
                            node_p = node_p -> next;
                          }
                          (yyval.node_p) = (yyvsp[-1].node_p);
                        }
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 154 "ada.y" /* yacc.c:1646  */
    {
                          (yyval.node_p) = NULL;
                        }
#line 1637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 159 "ada.y" /* yacc.c:1646  */
    {
                          LL_node current = (yyvsp[-3].head);
                          print(current);
                          node_t * outcome = RecursiveSearch(arr[i].Root, (yyvsp[-5].node_p)->var); //Parameter search.
                          node_t * previous = outcome;
                          while (current != NULL) {
                            if (RecursiveSearch(arr[i].Root, current->data) != NULL) {
                              printf("     ERROR: Duplicate IDs!\n");
                              current = current->next;
                              continue;
                            }
                            Add(current->data);
                            node_t * outcome1 = RecursiveSearch(arr[i].Root, current->data); //ID LL search.
                            strcpy(outcome1->mode, (yyvsp[-1].var));
                            outcome1->value = 4 + procedure_counter;
                            outcome1->parent_type = Search((yyvsp[0].var));
                            strcpy(outcome1->kind, "variable");
                            node_t * temp = outcome;
                            while (temp -> next != NULL) {
                              temp = temp -> next;
                            }
                            temp -> next = outcome1;
                            current = current->next;
                            printf(" %s\n", outcome1->mode);
                            outcome1->offset = currentOffset();
                            incrementOffset(outcome1->parent_type->offset);
                            procedure_counter = procedure_counter + outcome1 -> parent_type -> offset;
                            if (strcmp((yyvsp[-1].var), "out") == 0 || strcmp((yyvsp[-1].var), "in out")==0) {
                              procedure_counter++;
                              incrementOffset(outcome1->parent_type->offset);
                            }
                            (yyval.node_p) = outcome;
                          };
                        }
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 194 "ada.y" /* yacc.c:1646  */
    {
                          LL_node current = (yyvsp[-3].head);
                          print(current);
                          while (current != NULL) {
                            if (RecursiveSearch(arr[i].Root, current->data) != NULL) {
                              printf("     ERROR: Duplicate IDs!\n");
                              current = current->next;
                              continue;
                            }
                            Add(current->data);
                            node_t * outcome = RecursiveSearch(arr[i].Root, current->data);
                            strcpy(outcome->mode, (yyvsp[-1].var));
                            outcome->value = 4 + procedure_counter;
                            outcome->parent_type = Search((yyvsp[0].var));
                            strcpy(outcome->kind, "variable");
                            current = current->next;
                            printf(" %s\n", outcome->mode);
                            procedure_counter = procedure_counter + outcome -> parent_type -> offset;
                            outcome->offset = currentOffset();
                            incrementOffset(outcome->parent_type->offset);
                            if (strcmp((yyvsp[-1].var), "out") == 0 || strcmp((yyvsp[-1].var), "in out")==0) {
                              procedure_counter++;
                              incrementOffset(outcome->parent_type->offset);
                            }
                            (yyval.node_p) = outcome;
                          };
				                }
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 223 "ada.y" /* yacc.c:1646  */
    {
                          (yyval.var) = "in out";
                        }
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 227 "ada.y" /* yacc.c:1646  */
    {
                          (yyval.var) = "out";
                        }
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 231 "ada.y" /* yacc.c:1646  */
    {
                          (yyval.var) = "in";
                        }
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 235 "ada.y" /* yacc.c:1646  */
    {
                          (yyval.var) = "in";
                        }
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 240 "ada.y" /* yacc.c:1646  */
    {
                          (yyvsp[0].head) = insertList((yyvsp[0].head), (yyvsp[-2].var));
                          (yyval.head) = (yyvsp[0].head);
				                }
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 245 "ada.y" /* yacc.c:1646  */
    {
                          struct LL_node *head;
                          head = init((yyvsp[0].var));
                          (yyval.head) = head;
				                }
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 252 "ada.y" /* yacc.c:1646  */
    {(yyval.var) = (yyvsp[0].var);}
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 255 "ada.y" /* yacc.c:1646  */
    {
                          (yyval.integer) = currentOffset();
                        }
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 259 "ada.y" /* yacc.c:1646  */
    {
                          (yyval.integer) = currentOffset();
                        }
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 263 "ada.y" /* yacc.c:1646  */
    {
                          (yyval.integer) = currentOffset();
                        }
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 267 "ada.y" /* yacc.c:1646  */
    {
                          (yyval.integer) = currentOffset();
                        }
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 275 "ada.y" /* yacc.c:1646  */
    {
                          Add((yyvsp[-9].var));
                          node_t * outcome = RecursiveSearch(arr[i].Root, (yyvsp[-9].var));
                          node_t * temp = RecursiveSearch(arr[0].Root, (yyvsp[0].var));
                          outcome->lower = (yyvsp[-5].integer);
                          outcome->upper = (yyvsp[-3].integer);
                          outcome->offset = ((yyvsp[-3].integer) - (yyvsp[-5].integer) + 1) * temp -> offset;
                          outcome->component_type = Search((yyvsp[0].var));
                          strcpy(outcome->kind, "array");
                        }
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 289 "ada.y" /* yacc.c:1646  */
    {
                          Add((yyvsp[-4].var));
                          node_t* outcome = Search((yyvsp[-4].var));
                          strcpy(outcome->kind, "enumeration");
                          outcome->offset = 1;
                          LL_node current = (yyvsp[-1].head);
                          node_t * temp = Search((yyvsp[-4].var));
                          while (current != NULL) {
                            if (RecursiveSearch(arr[i].Root, current->data) != NULL) {
                              printf("     ERROR: Duplicate IDs!\n");
                              current = current->next;
                              continue;
                            }
                            Add(current->data);
                            node_t * outcome = RecursiveSearch(arr[i].Root, current->data);
                            strcpy(outcome->var, current -> data);
                            strcpy(outcome->kind, "enumeration");
                            outcome->parent_type = temp;
                            outcome->parent_type -> value = GlobalTrack.enum_counter;
                            outcome->value = GlobalTrack.enum_counter++;
                            current = current->next;
                          }
                          GlobalTrack.enum_counter  = 0;
                        }
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 315 "ada.y" /* yacc.c:1646  */
    {
                          if (RecursiveSearch(arr[i].Root, (yyvsp[-5].var)) != NULL) {
                            printf("     ERROR: Duplicate IDs!\n");
                          } else {
                              Add((yyvsp[-5].var));
                              node_t* outcome = Search((yyvsp[-5].var));
                              strcpy(outcome->kind, "range");
                              outcome->upper = (yyvsp[0].integer);
                              outcome->lower = (yyvsp[-2].integer);
                            }
                          }
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 333 "ada.y" /* yacc.c:1646  */
    {
		          	         printf("     line#: %d - ", lineno);
		                     LL_node current = (yyvsp[-2].head);
		          	         print(current);
		          	         printf(" %s\n", (yyvsp[0].var));
		          	         node_t * temp = Search((yyvsp[0].var));
		                     while (current != NULL) {
		          		            if (RecursiveSearch(arr[i].Root, current->data) != NULL) {
		          			          printf("     ERROR: Duplicate IDs!\n");
		          			          current = current->next;
		          			          continue;
		          		       }
		                	   Add(current->data);
		                  	 node_t * outcome = RecursiveSearch(arr[i].Root, current->data);
		          		       strcpy(outcome->kind, "variable");
		          		       outcome->parent_type = temp;
					               outcome->offset = currentOffset();
					               outcome->lower = temp->lower;
					               outcome->upper = temp->upper;
					               incrementOffset(outcome->parent_type->offset);
		          		       current = current->next;
		              	     }
		          	        }
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 359 "ada.y" /* yacc.c:1646  */
    {
                          (yyval.integer) = 0;
                        }
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 363 "ada.y" /* yacc.c:1646  */
    {
                          (yyval.integer) = (yyvsp[0].integer);
                        }
#line 1901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 370 "ada.y" /* yacc.c:1646  */
    {
                          LL_node current;
                          current = (yyvsp[-2].head);
                          while (current != NULL) {
                            if (RecursiveSearch(arr[i].Root, current->data) != NULL) {
                              printf("     ERROR: Duplicate IDs!\n");
                              current = current->next;
                              continue;
                            }
                            Add(current->data);
                            node_t * outcome = RecursiveSearch(arr[i].Root, current->data);
                            strcpy(outcome->kind, "exception");
                            outcome -> ival = GlobalTrack.next_exception++;
                            current = current -> next;
                          }
                        }
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 392 "ada.y" /* yacc.c:1646  */
    {
                          node_t * outcome = Search((yyvsp[-3].var)); //Search for $1 in Global Tree
                          int x = SearchPosition((yyvsp[-3].var)); //Check if it is local
                          if ((yyvsp[-1].record_p) -> Value == 0 && strcmp(outcome->kind, "procedure") == 0) {
                            fprintf(output, "%d     r%d := b\n", GlobalTrack.Instruction++, GlobalTrack.register_Num);
                            int base_reg = GlobalTrack.register_Num;
                            fprintf(output, "%d     b := contents r%d, 0\n", GlobalTrack.Instruction++, GlobalTrack.register_Num);
                            fprintf(output, "%d     contents b, 3 := r%d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num);
                            if (x == 0) {
                              fprintf(output, "%d     contents b, 2 := r%d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num);
                            } else {
                              while (x > 0) {
                                fprintf(output, "%d     r%d := contents r%d, 2\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, GlobalTrack.register_Num);
                                x--;
                              }
                              fprintf(output, "%d     contents b, 2 := r%d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num);
                            }
                            GlobalTrack.register_Num++;
                            fprintf(output, "%d     r%d := %d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, outcome->Size_of);
                            fprintf(output, "%d     contents b, 0 := b + r%d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num);
                            GlobalTrack.register_Num++;
                            node_t * current = outcome -> next;
                            struct LL_RW * currentRW = (yyvsp[-2].RW);
                            while (current != NULL) {
                              if (strcmp(current->mode, "in") == 0) {
                                fprintf(output, "%d     contents b, %d := r%d\n", GlobalTrack.Instruction++, current->value, currentRW -> record_List -> Reg_Num);
                              }

                              if (strcmp(current->mode, "in out") == 0) {
                                if (currentRW -> record_List -> Global == true) {
                                  fprintf(output, "%d     contents b, %d := contents r%d, %d\n", GlobalTrack.Instruction++, (yyvsp[-2].RW)->record_List -> Offset, currentRW -> record_List -> Reg_Num, (yyvsp[-2].RW)->record_List -> Offset);
                                } else {
                                  fprintf(output, "%d     contents b, %d := contents r%d, %d\n", GlobalTrack.Instruction++, (yyvsp[-2].RW)->record_List -> Offset, base_reg, (yyvsp[-2].RW)->record_List -> Offset);
                                }
                                fprintf(output, "%d     r%d := %d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num++, (yyvsp[-2].RW) ->record_List->Offset);
                                if (currentRW -> record_List -> Global == true) {
                                  fprintf(output, "%d     r%d := r%d + r%d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, currentRW -> record_List -> Reg_Num, GlobalTrack.register_Num-1);
                                } else {
                                  fprintf(output, "%d     r%d := r%d + r%d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, base_reg, GlobalTrack.register_Num-1);
                                }
                                fprintf(output, "%d     contents b, %d := r%d\n", GlobalTrack.Instruction++, current->value+1, GlobalTrack.register_Num);
                                GlobalTrack.register_Num++;
                              }

                              if (strcmp(current->mode, "out") == 0) {
                                fprintf(output, "%d     r%d := %d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num++, (yyvsp[-2].RW) ->record_List->Offset);
                                if (currentRW -> record_List -> Global == true) {
                                  fprintf(output, "%d     r%d := r%d + r%d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, currentRW -> record_List -> Reg_Num, GlobalTrack.register_Num-1);
                                } else {
                                  fprintf(output, "%d     r%d := r%d + r%d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, base_reg, GlobalTrack.register_Num-1);
                                }
                                fprintf(output, "%d     contents b, %d := r%d\n", GlobalTrack.Instruction++, current->value+1, GlobalTrack.register_Num);
                                GlobalTrack.register_Num++;
                              }
                              current = current -> next;
                              currentRW = currentRW -> next;
                            }
                            GlobalTrack.register_Num++;
                            fprintf(output, "%d     r%d := %d\n", GlobalTrack.Instruction, GlobalTrack.register_Num, GlobalTrack.Instruction + 3);
                            GlobalTrack.Instruction++;
                            fprintf(output, "%d     contents b, 1 := r%d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num);
                            GlobalTrack.register_Num++;
                            fprintf(output, "%d     pc := %d\n", GlobalTrack.Instruction++, outcome->Proc_Beg);
                            GlobalTrack.raise_list = GlobalTrack.Instruction;
                            fprintf(output, "%d     pc := ? if r1\n", GlobalTrack.Instruction++);
                          } else if ((yyvsp[-1].record_p) -> Value == 1 && (yyvsp[-2].RW) == NULL) { // If you have ID ASSIGN expression
                            struct record * record_p = create_new_record();
                            if (x == 0) { //Local Variable
                              if ((yyvsp[-1].record_p)->Global) { //Check right hand side Global
                                fprintf(output, "%d     contents b, %d := contents r%d, %d \n", GlobalTrack.Instruction++, outcome -> offset, (yyvsp[-1].record_p)->Reg_Num, (yyvsp[-1].record_p) -> Offset);
                                outcome -> Reg_Num = (yyvsp[-1].record_p) -> Reg_Num;
                              } else if ((yyvsp[-1].record_p)->isRegister) { //Check right hand side Register
                                fprintf(output, "%d     contents b, %d := r%d \n", GlobalTrack.Instruction++, outcome -> offset, (yyvsp[-1].record_p)->Reg_Num);
                                outcome -> Reg_Num = (yyvsp[-1].record_p) -> Reg_Num;
                              } else {
                                fprintf(output, "%d     contents b, %d := contents b, %d\n", GlobalTrack.Instruction++, outcome->offset, (yyvsp[-1].record_p)->Offset);
                              }
                            } else { //Global Variable
                              fprintf(output, "%d     r%d := b\n", GlobalTrack.Instruction++, GlobalTrack.register_Num);
                              while (x > 0) {
                                fprintf(output, "%d     r%d := contents r%d, 2\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, GlobalTrack.register_Num);
                                x--;
                              }
                              if ((yyvsp[-1].record_p)->Global) {
                                fprintf(output, "%d     contents r%d, %d := contents r%d, %d \n", GlobalTrack.Instruction++, GlobalTrack.register_Num, outcome -> offset, (yyvsp[-1].record_p)->Reg_Num, (yyvsp[-1].record_p)->Offset);
                                outcome -> Reg_Num = (yyvsp[-1].record_p) -> Reg_Num;
                              } else if ((yyvsp[-1].record_p)->isRegister) {
                                fprintf(output, "%d     contents r%d, %d := r%d \n", GlobalTrack.Instruction++, GlobalTrack.register_Num, outcome -> offset, (yyvsp[-1].record_p)->Reg_Num);
                                outcome -> Reg_Num = (yyvsp[-1].record_p) -> Reg_Num;
                              } else {
                                fprintf(output, "%d     contents r%d, %d := contents b, %d \n",
                                GlobalTrack.Instruction++, GlobalTrack.register_Num, outcome -> offset, (yyvsp[-1].record_p)->Offset);
                              }
                              GlobalTrack.register_Num++;
                            }
                          } else if ((yyvsp[-2].RW) -> record_List -> Value = 1 && (yyvsp[-1].record_p) -> Value == 0) { //If you have read or write
                            if ((yyvsp[-2].RW) -> next == NULL) {
                              if (strcmp(outcome->kind, "read_routine") == 0) {
                                node_t * temp = Search((yyvsp[-2].RW)->record_List->Identifier); //Search for $1 in Global Tree
                                strcpy((yyvsp[-2].RW)->record_List->Parent_type, temp->parent_type->var);
                                if ((yyvsp[-2].RW)->record_List->Global) {
                                  fprintf(output, "%d     read_%s contents r%d, %d\n", GlobalTrack.Instruction++, (yyvsp[-2].RW)->record_List->Parent_type, (yyvsp[-2].RW)->record_List->Reg_Num, (yyvsp[-2].RW)->record_List->Offset);
                                } else {
                                  fprintf(output, "%d     read_%s contents b, %d\n", GlobalTrack.Instruction++, (yyvsp[-2].RW)->record_List->Parent_type, (yyvsp[-2].RW)->record_List->Offset);
                                }
                              }
                            } else {
                              while ((yyvsp[-2].RW) != NULL) {
                                if ((yyvsp[-2].RW)->record_List->Global) {
                                  fprintf(output, "%d     write contents r%d, %d\n", GlobalTrack.Instruction++, (yyvsp[-2].RW)->record_List->Reg_Num, (yyvsp[-2].RW) ->record_List -> Offset);
                                } else  if ((yyvsp[-2].RW)->record_List->isRegister) {
                                  fprintf(output, "%d     write r%d\n", GlobalTrack.Instruction++, (yyvsp[-2].RW)->record_List->Reg_Num);
                                } else {
                                  fprintf(output, "%d     write contents b, %d\n", GlobalTrack.Instruction++, (yyvsp[-2].RW)->record_List->Offset);
                                }
                                (yyvsp[-2].RW) = (yyvsp[-2].RW) -> next;
                              }
                            }
                          } else { //Else it is an array on the left hand side of assign
                            int temp = outcome -> offset - outcome -> lower;
                            if (x == 0) { //Local Variable
                              if ((yyvsp[-1].record_p) -> Global) {
                                fprintf(output, "%d     contents b, %d := contents r%d, r%d, %d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, (yyvsp[-1].record_p) -> Reg_Num, (yyvsp[-1].record_p) -> Reg_Num, temp);
                              } else if ((yyvsp[-1].record_p)->Reg_Num) {
                                fprintf(output, "%d     contents b, r%d, %d := r%d\n", GlobalTrack.Instruction++, (yyvsp[-2].RW)->record_List -> Reg_Num, temp, (yyvsp[-1].record_p)->Reg_Num);
                              } else {
                                fprintf(output, "%d     contents b, r%d := contents b, %d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, (yyvsp[-1].record_p)->Value);
                              }
                            } else { //Global Variable
                              fprintf(output, "%d     r%d := b\n", GlobalTrack.Instruction++, GlobalTrack.register_Num);
                              while (x > 0) {
                                fprintf(output, "%d     r%d := contents r%d, 2\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, GlobalTrack.register_Num);
                                x--;
                              }
                              if ((yyvsp[-1].record_p)->Global) {
                                fprintf(output, "%d     contents b, r%d, %d := r%d\n", GlobalTrack.Instruction++, (yyvsp[-2].RW) -> record_List -> Reg_Num, temp /*+ $2 -> record_List -> check*/, (yyvsp[-1].record_p)->Reg_Num);
                              } else if ((yyvsp[-1].record_p)->Reg_Num) {
                                fprintf(output, "%d     contents r%d, %d := r%d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, temp + (yyvsp[-2].RW) -> record_List -> check, (yyvsp[-1].record_p)->Reg_Num);
                              } else {
                                fprintf(output, "%d     contents b, r%d := contents b, %d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, (yyvsp[-1].record_p)->Value);
                              }
                            }
                          }
                        }
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 539 "ada.y" /* yacc.c:1646  */
    {
                          node_t * outcome = Search((yyvsp[-1].var));
                          if(strcmp(outcome->kind, "exception") == 0) {
                            if (GlobalTrack.in_exception_part == true) {
                              fprintf(output, "%d     r1 := %d\n", GlobalTrack.Instruction++, outcome->ival);
                              fprintf(output, "%d     pc := ?\n", GlobalTrack.Instruction);
                              GlobalTrack.raise_list = GlobalTrack.Instruction;
                              AddPatch(GlobalTrack.raise_list);
                              GlobalTrack.Instruction++;
                            } else {
                              fprintf(output, "%d     r1 := %d\n", GlobalTrack.Instruction++, outcome->ival);
                              fprintf(output, "%d     pc := ?\n", GlobalTrack.Instruction);
                              GlobalTrack.raise_list = GlobalTrack.Instruction;
                              GlobalTrack.Instruction++;
                            }
                          }
                        }
#line 2093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 557 "ada.y" /* yacc.c:1646  */
    {
                          if (GlobalTrack.in_exception_part == true) {
                            fprintf(output, "%d     pc := ?\n", GlobalTrack.Instruction);
                            GlobalTrack.raise_list = GlobalTrack.Instruction;
                            AddPatch(GlobalTrack.raise_list);
                            GlobalTrack.Instruction++;
                          }
                        }
#line 2106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 566 "ada.y" /* yacc.c:1646  */
    {
                          struct patch_list * temp = ToPatch_Arr[ToPatchCounter];
                          while (temp != NULL) {
                            AddPatchList(temp->location, GlobalTrack.Instruction);
                            temp = temp->next;
                          }
                          PopToPatchStack();
                          casecounter--;
                        }
#line 2120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 577 "ada.y" /* yacc.c:1646  */
    {
                          PushToPatchStack();
                          casecounter++;
                          case_register[casecounter] = (yyvsp[0].record_p)->Reg_Num;
                        }
#line 2130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 586 "ada.y" /* yacc.c:1646  */
    {
                          struct patch_list * temper = ToPatch_Arr[ToPatchCounter];
                          while (temper != NULL) {
                            AddPatchList(temper->location, GlobalTrack.Instruction+1);
                            temper = temper->next;
                          }
                          if (case_or_counter != 0) {
                            for (int i = 0; i < case_or_counter; i++) {
                              AddPatchList(case_or[i], GlobalTrack.case_or_jump+1);
                            }
                          }
                          PopToPatchStack();
                          fprintf(output, "%d     pc := ?\n", GlobalTrack.Instruction);
                          GlobalTrack.case_or_not_jump = GlobalTrack.Instruction;
                          if (GlobalTrack.case_or_counter_checker != 0) {
                            for (int i = 1; i <= GlobalTrack.case_or_counter_checker; i++) {
                              if (i == GlobalTrack.case_or_counter_checker) {
                                AddPatchList(case_ornot[i], GlobalTrack.case_or_not_jump+1);
                              } else {
                                AddPatchList(case_ornot[i], case_ornot[i]+2);
                              }
                            }
                          }
                          AddPatch(GlobalTrack.Instruction);
                          GlobalTrack.Instruction++;
                          GlobalTrack.case_or = 0;
                          case_or_counter = 0;
                          GlobalTrack.case_or_counter_checker = 0;
                          GlobalTrack.case_or_not_jump = 0;
                        }
#line 2165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 618 "ada.y" /* yacc.c:1646  */
    {
                          if (GlobalTrack.case_or == 1) {
                            int tempnum = 0;
                            struct patch_list * temper = ToPatch_Arr[ToPatchCounter];
                            while (temper != NULL) {
                              AddPatchList(temper->location, GlobalTrack.Instruction+1);
                              temper = temper->next;
                              tempnum = GlobalTrack.Instruction;
                              fprintf(output, "%d     pc := ?\n", GlobalTrack.Instruction++);
                            }
                            PopToPatchStack();
                            PushToPatchStack();
                            case_or[case_or_counter] = tempnum;
                            case_or_counter++;
                            GlobalTrack.case_or_temp = tempnum;
                            struct LLNum_node * temp = (yyvsp[0].headNum);
                            while (temp -> next != NULL) {
                              GlobalTrack.case_or_counter_checker++;
                              fprintf(output, "%d     r%d := r%d = r%d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, temp -> data, case_register[casecounter]);
                              case_ornot[GlobalTrack.case_or_counter_checker] = GlobalTrack.Instruction;
                              fprintf(output, "%d     pc := ? if not r%d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num);
                              case_or[case_or_counter] = GlobalTrack.Instruction;
                              case_or_counter++;
                              fprintf(output, "%d     pc := ?\n", GlobalTrack.Instruction);
                              GlobalTrack.case_or_jump = GlobalTrack.Instruction;
                              GlobalTrack.Instruction++;
                              temp = temp -> next;
                            }
                          }
                        }
#line 2200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 650 "ada.y" /* yacc.c:1646  */
    {
                          (yyvsp[0].headNum) = insertListNum((yyvsp[0].headNum), (yyvsp[-2].record_p)->Reg_Num);
                          (yyval.headNum) = (yyvsp[0].headNum);
                          GlobalTrack.case_or = 1;
                        }
#line 2210 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 656 "ada.y" /* yacc.c:1646  */
    {
                          PushToPatchStack();
                          struct LLNum_node * headNum;
                          headNum = initNum((yyvsp[0].record_p)->Reg_Num);
                          (yyval.headNum) = headNum;
                          GlobalTrack.case_or = 0;
                          fprintf(output, "%d     r%d := r%d = r%d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, GlobalTrack.register_Num - 1, case_register[casecounter]);
                          fprintf(output, "%d     pc := ? if not r%d\n", GlobalTrack.Instruction, GlobalTrack.register_Num);
                          AddPatch(GlobalTrack.Instruction);
                          GlobalTrack.register_Num++;
                          GlobalTrack.Instruction++;
                        }
#line 2227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 669 "ada.y" /* yacc.c:1646  */
    {
                          PushToPatchStack();
                          fprintf(output, "%d     pc := ?\n", GlobalTrack.Instruction);
                          AddPatchList(GlobalTrack.Instruction, GlobalTrack.Instruction+1);
                          GlobalTrack.Instruction++;
                        }
#line 2238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 677 "ada.y" /* yacc.c:1646  */
    {
                          (yyval.RW) = (yyvsp[-1].RW);
                        }
#line 2246 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 681 "ada.y" /* yacc.c:1646  */
    {
                          (yyval.RW) = NULL;
                        }
#line 2254 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 686 "ada.y" /* yacc.c:1646  */
    {
                          struct record * record_p = create_new_record();
                          record_p -> Reg_Num = (yyvsp[0].record_p) -> Reg_Num;
                          record_p -> isRegister = true;
                          record_p -> Offset = (yyvsp[0].record_p) -> Offset;
                          record_p -> Global = (yyvsp[0].record_p) -> Global;
                          record_p -> Value = 1;
                          (yyval.record_p) = record_p;
                        }
#line 2268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 696 "ada.y" /* yacc.c:1646  */
    {
                          struct record * record_p = create_new_record();
                          record_p -> enum_val = 1;
                          record_p -> Value = 1;
                          record_p -> Reg_Num = (yyvsp[0].record_p) -> Reg_Num;
                          record_p -> isRegister = true;
                          (yyval.record_p) = record_p;
                        }
#line 2281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 705 "ada.y" /* yacc.c:1646  */
    {
                          struct record * record_p = create_new_record();
                          record_p -> Value = 0;
                          (yyval.record_p) = record_p;
                        }
#line 2291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 712 "ada.y" /* yacc.c:1646  */
    {
                          struct record * record_p = create_new_record();
                          node_t * outcome = Search((yyvsp[-5].var));
                          node_t * outcome1 = Search((yyvsp[-3].var));
                          if (strcmp(outcome1 -> var, "pos") == 0) {
                            record_p -> enum_val = (yyvsp[-1].record_p) -> Value;
                            record_p -> Reg_Num = (yyvsp[-1].record_p) -> Reg_Num;
                          } else if (strcmp(outcome1 -> var, "succ") == 0) {
                            record_p -> enum_val = (yyvsp[-1].record_p) -> Value + 1;
                            fprintf(output, "%d     r%d := r%d + 1\n", GlobalTrack.Instruction, GlobalTrack.register_Num, (yyvsp[-1].record_p) -> Reg_Num);
                            record_p -> Reg_Num = GlobalTrack.register_Num;
                            GlobalTrack.register_Num++;
                          } else if (strcmp(outcome1 -> var, "pred") == 0) {
                            record_p -> enum_val = (yyvsp[-1].record_p) -> Value - 1;
                            fprintf(output, "%d     r%d := r%d - 1\n", GlobalTrack.Instruction, GlobalTrack.register_Num, (yyvsp[-1].record_p) -> Reg_Num);
                            record_p -> Reg_Num = GlobalTrack.register_Num;
                            GlobalTrack.register_Num++;
                          }
                          (yyval.record_p) = record_p;
                        }
#line 2316 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 733 "ada.y" /* yacc.c:1646  */
    {
                          struct record * record_p = create_new_record();
                          node_t * outcome = Search((yyvsp[-5].var));
                          node_t * outcome1 = Search((yyvsp[-3].var));
                          if (strcmp(outcome1 -> var, "pos") == 0) {
                            record_p -> enum_val = (yyvsp[-1].record_p) -> Value;
                            record_p -> Reg_Num = (yyvsp[-1].record_p) -> Reg_Num;
                          } else if (strcmp(outcome1 -> var, "succ") == 0) {
                            record_p -> enum_val = (yyvsp[-1].record_p) -> Value + 1;
                            fprintf(output, "%d     r%d := r%d + 1\n", GlobalTrack.Instruction, GlobalTrack.register_Num, (yyvsp[-1].record_p) -> Reg_Num);
                            record_p -> Reg_Num = GlobalTrack.register_Num;
                            GlobalTrack.register_Num++;
                          } else if (strcmp(outcome1 -> var, "pred") == 0) {
                            record_p -> enum_val = (yyvsp[-1].record_p) -> Value - 1;
                            fprintf(output, "%d     r%d := r%d - 1\n", GlobalTrack.Instruction, GlobalTrack.register_Num, (yyvsp[-1].record_p) -> Reg_Num);
                            record_p -> Reg_Num = GlobalTrack.register_Num;
                            GlobalTrack.register_Num++;
                          }
                          (yyval.record_p) = record_p;
                        }
#line 2341 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 754 "ada.y" /* yacc.c:1646  */
    {
                          struct record * record_p = create_new_record();
                          node_t * outcome = Search((yyvsp[-2].var));
                          node_t * outcome1 = Search((yyvsp[0].var));
                          if (strcmp(outcome1 -> var, "LAST") == 0) {
                            record_p -> enum_val = outcome -> value;
                            fprintf(output, "%d     r%d := %d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, outcome ->parent_type->value);
                            record_p -> Reg_Num = GlobalTrack.register_Num;
                            GlobalTrack.register_Num++;
                          } else if (strcmp(outcome1 -> var, "FIRST") == 0) {
                            record_p -> enum_val = outcome -> value;
                            fprintf(output, "%d     r%d := 0\n", GlobalTrack.Instruction++, GlobalTrack.register_Num);
                            record_p -> Reg_Num = GlobalTrack.register_Num;
                            GlobalTrack.register_Num++;
                          }
                          (yyval.record_p) = record_p;
                        }
#line 2363 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 773 "ada.y" /* yacc.c:1646  */
    {
                          int temp = (yyvsp[-2].record_p) -> Value;
                          bool temp2 = (yyvsp[-2].record_p) -> GlobalCheck;
                          int temp3 = (yyvsp[-2].record_p) -> Offset;
                          int temp4 = (yyvsp[-2].record_p) -> Reg_Num;
                          (yyvsp[0].RW) = insertRW((yyvsp[0].RW), (yyvsp[-2].record_p));
                          if ((yyvsp[-2].record_p) -> Global == true) {
                            (yyvsp[0].RW) -> record_List -> Global = true;
                          }
                          if ((yyvsp[-2].record_p) -> isRegister == true) {
                            (yyvsp[0].RW) -> record_List -> isRegister = true;
                          }
                          (yyvsp[0].RW) -> record_List -> Value = 1;
                          (yyvsp[0].RW) -> record_List -> check = temp;
                          (yyvsp[0].RW) -> record_List -> Offset = temp3;
                          (yyvsp[0].RW) -> record_List -> Reg_Num = temp4;
                          (yyval.RW) = (yyvsp[0].RW);
                        }
#line 2386 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 792 "ada.y" /* yacc.c:1646  */
    {
                          int temp = (yyvsp[0].record_p) -> Value;
                          bool temp2 = (yyvsp[0].record_p) -> GlobalCheck;
                          int temp3 = (yyvsp[0].record_p) -> Offset;
                          int temp4 = (yyvsp[0].record_p) -> Reg_Num;
                          struct LL_RW * RW  = initRW((yyvsp[0].record_p));
                          if ((yyvsp[0].record_p) -> Global == true) {
                            RW -> record_List -> Global = true;
                          }
                          if ((yyvsp[0].record_p) -> isRegister == true) {
                            RW -> record_List -> isRegister = true;
                          }
                          RW -> record_List -> Value = 1;
                          RW -> record_List -> check = temp;
                          RW -> record_List -> Offset = temp3;
                          RW -> record_List -> Reg_Num = temp4;
                          (yyval.RW) = RW;
                        }
#line 2409 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 812 "ada.y" /* yacc.c:1646  */
    {
                          fprintf(output, "%d     pc := %d\n", GlobalTrack.Instruction++, (yyvsp[-3].integer));
                          struct patch_list * temp = ToPatch_Arr[ToPatchCounter];
                          while (temp != NULL) {
                            AddPatchList(temp->location, GlobalTrack.Instruction);
                            temp = temp->next;
                          }
                          PopToPatchStack();
            		      	}
#line 2423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 823 "ada.y" /* yacc.c:1646  */
    {
                          PushToPatchStack();
                          (yyval.integer) = GlobalTrack.Instruction;
                  			}
#line 2432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 835 "ada.y" /* yacc.c:1646  */
    {
                          AddPatch(GlobalTrack.Instruction);
                          fprintf(output, "%d     pc := ?\n", GlobalTrack.Instruction++);
                  			}
#line 2441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 840 "ada.y" /* yacc.c:1646  */
    {
                          AddPatch(GlobalTrack.Instruction);
                          fprintf(output, "%d     pc := ? if r%d\n", GlobalTrack.Instruction++, (yyvsp[-1].record_p)->Reg_Num);
                        }
#line 2450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 846 "ada.y" /* yacc.c:1646  */
    {
                          (yyval.record_p) = (yyvsp[0].record_p);
                        }
#line 2458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 851 "ada.y" /* yacc.c:1646  */
    {
                          struct patch_list * temp = ToPatch_Arr[ToPatchCounter];
                          while (temp != NULL) {
                            AddPatchList(temp->location, GlobalTrack.Instruction);
                            temp = temp->next;
                          }
                          PopToPatchStack();
                        }
#line 2471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 861 "ada.y" /* yacc.c:1646  */
    {
                          struct patch_list * temp = ToPatch_Arr[ToPatchCounter];
                          while (temp != NULL) {
                            AddPatchList(temp->location, GlobalTrack.Instruction+1);
                            temp = temp->next;
                          }
                          PopToPatchStack();
                          AddPatch(GlobalTrack.Instruction);
                          fprintf(output, "%d     pc := ?\n", GlobalTrack.Instruction++);
                        }
#line 2486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 873 "ada.y" /* yacc.c:1646  */
    {
                          PushToPatchStack();
                        }
#line 2494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 882 "ada.y" /* yacc.c:1646  */
    {
                          struct patch_list * temp = ToPatch_Arr[ToPatchCounter];
                          while (temp != NULL) {
                            AddPatchList(temp->location, GlobalTrack.Instruction+1);
                            temp = temp->next;
                          }
                          PopToPatchStack();
                          AddPatch(GlobalTrack.Instruction);
                          fprintf(output, "%d     pc := ?\n", GlobalTrack.Instruction++);
                        }
#line 2509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 896 "ada.y" /* yacc.c:1646  */
    {
                          struct patch_list * temp = ToPatch_Arr[ToPatchCounter];
                          while (temp != NULL) {
                            AddPatchList(temp->location, GlobalTrack.Instruction+1);
                            temp = temp->next;
                          }
                          PopToPatchStack();
                          AddPatch(GlobalTrack.Instruction);
                          fprintf(output, "%d     pc := ?\n", GlobalTrack.Instruction++);
                        }
#line 2524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 909 "ada.y" /* yacc.c:1646  */
    {
                          PushToPatchStack();
                        }
#line 2532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 914 "ada.y" /* yacc.c:1646  */
    {
                          PushToPatchStack();
                          int temp = GlobalTrack.register_Num-1;
                          AddPatch(GlobalTrack.Instruction);
                          fprintf(output, "%d     pc := ? if not r%d\n", GlobalTrack.Instruction++, temp);
                        }
#line 2543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 922 "ada.y" /* yacc.c:1646  */
    {
                          (yyval.record_p) = (yyvsp[0].record_p);
                        }
#line 2551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 926 "ada.y" /* yacc.c:1646  */
    {
                          struct record * record_p = create_new_record();
                          record_p -> Reg_Num = GlobalTrack.register_Num++;
                          record_p -> isRegister = true;
                          fprintf(output, "%d     r%d := ", GlobalTrack.Instruction++, record_p->Reg_Num);
                          if ((yyvsp[-2].record_p)->Global) {
                            fprintf(output, "contents r%d, %d ", (yyvsp[-2].record_p)->Reg_Num, (yyvsp[-2].record_p)->Offset);
                          } else if ((yyvsp[-2].record_p)->isRegister) {
                            fprintf(output, "r%d ", (yyvsp[-2].record_p)->Reg_Num);
                          } else {
                            fprintf(output, "contents b, %d ", (yyvsp[-2].record_p)->Offset);
                          }

                          //Print relational operation
                          fprintf(output, "%s ", (yyvsp[-1].var));

                          if ((yyvsp[0].record_p)->Global) {
                            fprintf(output, "contents r%d, %d\n", (yyvsp[0].record_p)->Reg_Num, (yyvsp[0].record_p)->Offset);
                          } else if ((yyvsp[0].record_p)->isRegister) {
                            fprintf(output, "r%d \n", (yyvsp[0].record_p)->Reg_Num);
                          } else {
                            fprintf(output, "contents b, %d\n", (yyvsp[0].record_p)->Offset);
                          }
                          (yyval.record_p) = record_p;
                        }
#line 2581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 953 "ada.y" /* yacc.c:1646  */
    {
                          (yyval.record_p) = (yyvsp[0].record_p);
                        }
#line 2589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 957 "ada.y" /* yacc.c:1646  */
    {
                          struct record * record_p = create_new_record();
                          record_p -> Reg_Num = GlobalTrack.register_Num++;
                          record_p -> isRegister = true;
                          fprintf(output, "%d     r%d := ", GlobalTrack.Instruction++, record_p->Reg_Num);
                          if (strcmp((yyvsp[-1].var), ">") == 0) {
                            if ((yyvsp[0].record_p)->Global) {
                              fprintf(output, "contents r%d, %d ", (yyvsp[0].record_p)->Reg_Num, (yyvsp[0].record_p)->Offset);
                            } else if ((yyvsp[0].record_p)->isRegister) {
                              fprintf(output, "r%d ", (yyvsp[0].record_p)->Reg_Num);
                              } else {
                                fprintf(output, "contents b, %d ", (yyvsp[0].record_p)->Offset);
                              }

                              //Print relational operation
                              fprintf(output, "< ");

                              if ((yyvsp[-2].record_p)->Global) {
                                fprintf(output, "contents r%d, %d\n", (yyvsp[-2].record_p)->Reg_Num, (yyvsp[-2].record_p)->Offset);
                              } else if ((yyvsp[-2].record_p)->isRegister) {
                                fprintf(output, "r%d \n", (yyvsp[-2].record_p)->Reg_Num);
                              } else {
                                fprintf(output, "contents b, %d\n", (yyvsp[-2].record_p)->Offset);
                              }
                            } else if (strcmp((yyvsp[-1].var),">=") == 0) {
                              if ((yyvsp[0].record_p)->Global) {
                                fprintf(output, "contents r%d, %d ", (yyvsp[0].record_p)->Reg_Num, (yyvsp[0].record_p)->Offset);
                              } else if ((yyvsp[0].record_p)->isRegister) {
                                fprintf(output, "r%d ", (yyvsp[0].record_p)->Reg_Num);
                              } else {
                                fprintf(output, "contents b, %d ", (yyvsp[0].record_p)->Offset);
                              }

                              //Print relational operation
                              fprintf(output, "<= ");

                              if ((yyvsp[-2].record_p)->Global) {
                                fprintf(output, "contents r%d, %d\n", (yyvsp[-2].record_p)->Reg_Num, (yyvsp[-2].record_p)->Offset);
                              } else if ((yyvsp[-2].record_p)->isRegister) {
                                fprintf(output, "r%d \n", (yyvsp[-2].record_p)->Reg_Num);
                              } else {
                                fprintf(output, "contents b, %d\n", (yyvsp[-2].record_p)->Offset);
                              }
                            } else {
                              if ((yyvsp[-2].record_p)->Global) {
                                fprintf(output, "contents r%d, %d ", (yyvsp[-2].record_p)->Reg_Num, (yyvsp[-2].record_p)->Offset);
                              } else if ((yyvsp[-2].record_p)->isRegister) {
                                fprintf(output, "r%d ", (yyvsp[-2].record_p)->Reg_Num);
                              } else {
                                fprintf(output, "contents b, %d ", (yyvsp[-2].record_p)->Offset);
                              }

                              //Print relational operation
                              fprintf(output, "%s ", (yyvsp[-1].var));

                              if ((yyvsp[0].record_p)->Global) {
                                fprintf(output, "contents r%d, %d\n", (yyvsp[0].record_p)->Reg_Num, (yyvsp[0].record_p)->Offset);
                              } else if ((yyvsp[0].record_p)->isRegister) {
                                fprintf(output, "r%d \n", (yyvsp[0].record_p)->Reg_Num);
                              } else {
                                fprintf(output, "contents b, %d\n", (yyvsp[0].record_p)->Offset);
                              }
                            }
                            (yyval.record_p) = record_p;
                          }
#line 2659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1024 "ada.y" /* yacc.c:1646  */
    {
                            (yyval.record_p) = (yyvsp[0].record_p);
                          }
#line 2667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 1028 "ada.y" /* yacc.c:1646  */
    {
                            struct record * record_p = create_new_record();
                            record_p -> Reg_Num = GlobalTrack.register_Num++;
                            record_p -> isRegister = true;
                            fprintf(output, "%d     r%d := - ", GlobalTrack.Instruction++, record_p->Reg_Num);

                            //Handle Left hand sideof operation
                            if ((yyvsp[0].record_p)->isRegister) {
                              fprintf(output, "r%d \n", (yyvsp[0].record_p)->Reg_Num);
                            } else {
                              fprintf(output, "contents b, %d \n", (yyvsp[0].record_p)->Offset);
                            }
                            (yyval.record_p) = record_p;
                          }
#line 2686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1043 "ada.y" /* yacc.c:1646  */
    {
                            struct record * record_p = create_new_record();
                            record_p -> Reg_Num = GlobalTrack.register_Num++;
                            record_p -> isRegister = true;
                            fprintf(output, "%d     r%d := ", GlobalTrack.Instruction++, record_p->Reg_Num);

                            //Handle Left hand sideof operation
                            if ((yyvsp[-2].record_p)->Global) {
                              fprintf(output, "contents r%d, %d ", (yyvsp[-2].record_p)->Reg_Num, (yyvsp[-2].record_p)->Offset);
                            } else if ((yyvsp[-2].record_p)->isRegister) {
                              fprintf(output, "r%d ", (yyvsp[-2].record_p)->Reg_Num);
                            } else {
                              fprintf(output, "contents b, %d ", (yyvsp[-2].record_p)->Offset);
                            }

                            //Print + or -
                            fprintf(output, "%s ", (yyvsp[-1].var));

                            if ((yyvsp[0].record_p)->Global) {
                              fprintf(output, "contents r%d, %d \n", (yyvsp[0].record_p)->Reg_Num, (yyvsp[0].record_p)->Offset);
                            } else if ((yyvsp[0].record_p)->isRegister) {
                              fprintf(output, "r%d \n", (yyvsp[0].record_p)->Reg_Num);
                            } else {
                              fprintf(output, "contents b, %d \n", (yyvsp[0].record_p)->Offset);
                            }
                            (yyval.record_p) = record_p;
                          }
#line 2718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1072 "ada.y" /* yacc.c:1646  */
    {
                            (yyval.record_p) = (yyvsp[0].record_p);
                          }
#line 2726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1076 "ada.y" /* yacc.c:1646  */
    {
                            struct record * record_p = create_new_record();
                            record_p -> Reg_Num = GlobalTrack.register_Num++;
                            record_p -> isRegister = true;
                            record_p -> Global = false;
                            fprintf(output, "%d     r%d := ", GlobalTrack.Instruction++, record_p->Reg_Num);

                            //Handle Left hand sideof operation
                            if ((yyvsp[-2].record_p)->Global) {
                              fprintf(output, "contents r%d, %d ", (yyvsp[-2].record_p)->Reg_Num, (yyvsp[-2].record_p)->Offset);
                            } else if ((yyvsp[-2].record_p)->isRegister) {
                              fprintf(output, "r%d ", (yyvsp[-2].record_p)->Reg_Num);
                            } else {
                              fprintf(output, "contents b, %d ", (yyvsp[-2].record_p)->Offset);
                            }

                            //Print * or /
                            fprintf(output, "%s ", (yyvsp[-1].var));

                            if ((yyvsp[0].record_p)->Global) {
                              fprintf(output, "contents r%d, %d \n", (yyvsp[0].record_p)->Reg_Num, (yyvsp[0].record_p)->Offset);
                            } else if ((yyvsp[0].record_p)->isRegister) {
                              fprintf(output, "r%d \n", (yyvsp[0].record_p)->Reg_Num);
                            } else {
                              fprintf(output, "contents b, %d \n", (yyvsp[0].record_p)->Offset);
                            }
                            (yyval.record_p) = record_p;
                          }
#line 2759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1106 "ada.y" /* yacc.c:1646  */
    {
                            (yyval.record_p) = (yyvsp[0].record_p);
                          }
#line 2767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1110 "ada.y" /* yacc.c:1646  */
    {
                            struct record * record_p = create_new_record();
                            record_p -> isRegister = true;
                            record_p -> Global = false;
                            int firstReg = (yyvsp[-2].record_p) -> Reg_Num;

                            if ((yyvsp[-2].record_p)->Global) {
                              fprintf(output, "%d     r%d := contents r%d, %d \n", GlobalTrack.Instruction++, GlobalTrack.register_Num++, (yyvsp[-2].record_p)->Reg_Num, (yyvsp[-2].record_p)->Offset);
                            } else if ((yyvsp[-2].record_p)->isRegister) {
                              fprintf(output, "%d     r%d := r%d \n", GlobalTrack.Instruction++, GlobalTrack.register_Num++, (yyvsp[-2].record_p)->Reg_Num);
                            } else {
                              fprintf(output, "%d     r%d := contents b, %d \n", GlobalTrack.Instruction++, GlobalTrack.register_Num++, (yyvsp[-2].record_p)->Offset);
                            }

                            int secondReg = (yyvsp[0].record_p) -> Reg_Num;
                            if ((yyvsp[-2].record_p)->Global) {
                              fprintf(output, "%d     r%d := contents r%d, %d \n", GlobalTrack.Instruction++, GlobalTrack.register_Num++, (yyvsp[0].record_p)->Reg_Num, (yyvsp[0].record_p)->Offset);
                            } else if ((yyvsp[-2].record_p)->isRegister) {
                              fprintf(output, "%d     r%d := r%d \n", GlobalTrack.Instruction++, GlobalTrack.register_Num++, (yyvsp[0].record_p)->Reg_Num);
                            } else {
                              fprintf(output, "%d     r%d := contents b, %d \n", GlobalTrack.Instruction++, GlobalTrack.register_Num++, (yyvsp[0].record_p)->Offset);
                            }

                            int productReg = GlobalTrack.register_Num++;
                            record_p -> Reg_Num = productReg;
                            fprintf(output, "%d     r%d := 1 \n", GlobalTrack.Instruction++, productReg);

                            int decrementReg = GlobalTrack.register_Num++;
                            fprintf(output, "%d     r%d := 1 \n", GlobalTrack.Instruction++, decrementReg);

                            int pcJumpLine = GlobalTrack.Instruction++;
                            fprintf(output, "%d     r%d := r%d * r%d \n", pcJumpLine, productReg, productReg, firstReg);

                            int compareReg = GlobalTrack.register_Num++;
                            fprintf(output, "%d     r%d := r%d = r%d \n", GlobalTrack.Instruction++, compareReg, secondReg, decrementReg);
                            fprintf(output, "%d     r%d := r%d - r%d \n", GlobalTrack.Instruction++, secondReg, secondReg, decrementReg);
                            fprintf(output, "%d     pc := %d if not r%d \n", GlobalTrack.Instruction++, pcJumpLine, compareReg);

                            (yyval.record_p) = record_p;
                          }
#line 2812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1151 "ada.y" /* yacc.c:1646  */
    {
                            struct record * record_p = create_new_record();
                            record_p -> Reg_Num = GlobalTrack.register_Num++;
                            record_p -> isRegister = true;
                            record_p -> Global = false;
                            fprintf(output, "%d     r%d := not ", GlobalTrack.Instruction++, record_p->Reg_Num);

                            //Handle Left hand sideof operation
                            if ((yyvsp[0].record_p)->Global) {
                              fprintf(output, "contents r%d, %d \n", (yyvsp[0].record_p)->Reg_Num, (yyvsp[0].record_p)->Offset);
                            } else if ((yyvsp[0].record_p)->isRegister) {
                              fprintf(output, "r%d \n", (yyvsp[0].record_p)->Reg_Num);
                            } else {
                              fprintf(output, "contents b, %d \n", (yyvsp[0].record_p)->Offset);
                            }
                            strcpy(record_p->Identifier, (yyvsp[0].record_p)->Identifier);
                            (yyval.record_p) = record_p;
                          }
#line 2835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1171 "ada.y" /* yacc.c:1646  */
    {
                            struct record * record_p = create_new_record();
                            record_p->Value = (yyvsp[0].integer);
                            record_p->Reg_Num = GlobalTrack.register_Num++;
                            record_p -> Global = false;
                            record_p->isRegister = true;
                            fprintf(output, "%d     r%d := %d\n", GlobalTrack.Instruction++, record_p->Reg_Num, (yyvsp[0].integer));
                            (yyval.record_p) = record_p;
                          }
#line 2849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1181 "ada.y" /* yacc.c:1646  */
    {
                            struct record * record_p = create_new_record();
                            node_t * outcome = Search((yyvsp[0].var)); //Search for $1 in Global Tree
                            int x = SearchPosition((yyvsp[0].var)); //Check if it is local
                            strcpy(record_p->Identifier, (yyvsp[0].var));
                            if (strcmp(outcome->kind, "literal") == 0) {
                              record_p -> Value = outcome -> value;
                              record_p->Reg_Num = GlobalTrack.register_Num++;
                              record_p->isRegister = true;
                              fprintf(output, "%d     r%d := %d\n", GlobalTrack.Instruction++, record_p->Reg_Num, record_p -> Value);
                              (yyval.record_p) = record_p;
                            } else if (strcmp(outcome->kind, "enumeration") == 0) {
                              record_p -> Value = outcome -> value;
                              record_p->Reg_Num = GlobalTrack.register_Num++;
                              record_p->isRegister = true;
                              fprintf(output, "%d     r%d := %d\n", GlobalTrack.Instruction++, record_p->Reg_Num, record_p -> Value);
                              (yyval.record_p) = record_p;
                            } else {
                              if (x == 0) { //Local Variable
                                record_p -> Offset = outcome -> offset;
                                fprintf(output, "%d     r%d := contents b, %d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, outcome->offset);
                                record_p->Reg_Num = GlobalTrack.register_Num++;
                                record_p -> isRegister = true;
                              } else { //Global Variable
                                fprintf(output, "%d     r%d := b\n", GlobalTrack.Instruction++, GlobalTrack.register_Num);
                                while (x > 0) {
                                  fprintf(output, "%d     r%d := contents r%d, 2\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, GlobalTrack.register_Num);
                                  x--;
                                }
                                record_p -> Offset = outcome -> offset;
                                record_p -> Reg_Num = GlobalTrack.register_Num++;
                                record_p -> Global = true;
                                record_p -> isRegister = true;
                              }
                            }
                            (yyval.record_p) = record_p;
                          }
#line 2891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1219 "ada.y" /* yacc.c:1646  */
    {
                            (yyval.record_p) = (yyvsp[-1].record_p);
                          }
#line 2899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1223 "ada.y" /* yacc.c:1646  */
    {
                            struct record * record_p = create_new_record();
                            node_t * outcome = Search((yyvsp[-3].var)); //Search for $1 in Global Tree
                            int x = SearchPosition((yyvsp[-3].var)); //Check if it is local
                            if (x == 0) { //Local
                              int temp = outcome -> offset - outcome -> lower;
                              fprintf(output, "%d     r%d := contents b, r%d, %d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, (yyvsp[-1].record_p) -> Reg_Num, temp);
                              record_p -> Offset = outcome -> offset;
                              record_p -> Reg_Num = GlobalTrack.register_Num++;
                              record_p -> isRegister = true;
                            } else { //Global
                              fprintf(output, "%d     r%d := b\n", GlobalTrack.Instruction++, GlobalTrack.register_Num);
                              while (x > 0) {
                                fprintf(output, "%d     r%d := contents r%d, 2\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, GlobalTrack.register_Num);
                                x--;
                              }
                              record_p -> Offset = outcome -> offset;
                              record_p -> Reg_Num = GlobalTrack.register_Num++;
                              record_p -> Global = true;
                              record_p -> GlobalCheck = 1;
                              record_p -> isRegister = true;
                            }
                            (yyval.record_p) = record_p;
                          }
#line 2928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1249 "ada.y" /* yacc.c:1646  */
    {
                            strcpy((yyval.var), "and");
                          }
#line 2936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1253 "ada.y" /* yacc.c:1646  */
    {
                            strcpy((yyval.var), "or");
                          }
#line 2944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1258 "ada.y" /* yacc.c:1646  */
    {
                            strcpy((yyval.var), "=");
                          }
#line 2952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1262 "ada.y" /* yacc.c:1646  */
    {
                            strcpy((yyval.var), "/=");
                          }
#line 2960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1266 "ada.y" /* yacc.c:1646  */
    {
                            strcpy((yyval.var), "<");
                          }
#line 2968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1270 "ada.y" /* yacc.c:1646  */
    {
                            strcpy((yyval.var), ">");
                          }
#line 2976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1274 "ada.y" /* yacc.c:1646  */
    {
                            strcpy((yyval.var), ">=");
                          }
#line 2984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1278 "ada.y" /* yacc.c:1646  */
    {
                            strcpy((yyval.var), "<=");
                          }
#line 2992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1283 "ada.y" /* yacc.c:1646  */
    {
                            strcpy((yyval.var), "+");
                          }
#line 3000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1287 "ada.y" /* yacc.c:1646  */
    {
                            strcpy((yyval.var), "-");
                          }
#line 3008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1292 "ada.y" /* yacc.c:1646  */
    {
                            strcpy((yyval.var), "*");
                          }
#line 3016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1296 "ada.y" /* yacc.c:1646  */
    {
                            strcpy((yyval.var), "/");
                          }
#line 3024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1301 "ada.y" /* yacc.c:1646  */
    {
                            GlobalTrack.handler_done = false;
                            AddPatchList(GlobalTrack.instruction_counter, GlobalTrack.Instruction-1);
                            int temp = GlobalTrack.Instruction + GlobalTrack.next_exception - 1;
                            jumpcounter = 1;
                            while (jumpcounter < GlobalTrack.next_exception) {
                              if (jump_table[jumpcounter] != 0) {
                                fprintf(output, "%d     pc := %d\n", GlobalTrack.Instruction++, jump_table[jumpcounter]);
                              } else {
                                jump_table[jumpcounter] = temp;
                                fprintf(output, "%d     pc := %d\n", GlobalTrack.Instruction++, jump_table[jumpcounter]);
                              }
                              jumpcounter++;
                            }
                            int i = 0;
                            while (i <= 10) {
                              jump_table[i] = 0;
                              i++;
                            }
                             GlobalTrack.in_exception_part = false;
                             struct patch_list * temper = ToPatch_Arr[ToPatchCounter];
                             while (temper != NULL) {
                               AddPatchList(temper->location, GlobalTrack.Instruction);
                               temper = temper->next;
                             }
                             PopToPatchStack();
                           }
#line 3056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1329 "ada.y" /* yacc.c:1646  */
    {
                             if (GlobalTrack.instruction_counter == 0 && GlobalTrack.raise_list != 0) {
                               AddPatchList(GlobalTrack.raise_list, GlobalTrack.Instruction);
                             } else {
                               for (int i = 0; i < GlobalTrack.instruction_counter; i++) {
                                 AddPatchList(GlobalTrack.raise_list, GlobalTrack.Instruction);
                               }
                             }
                             GlobalTrack.raise_list = 0;
                           }
#line 3071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1341 "ada.y" /* yacc.c:1646  */
    {
                             GlobalTrack.in_exception_part = true;
                             PushToPatchStack();
                             AddPatch(GlobalTrack.Instruction);
                             fprintf(output, "%d     pc := ?\n", GlobalTrack.Instruction++);
                             AddPatchList(GlobalTrack.raise_list, GlobalTrack.Instruction);
                             GlobalTrack.instruction_counter = GlobalTrack.Instruction;
                             fprintf(output, "%d     pc := r1, ?\n", GlobalTrack.Instruction++);
                           }
#line 3085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1355 "ada.y" /* yacc.c:1646  */
    {
                             fprintf(output, "%d     r1 := 0\n", GlobalTrack.Instruction++);
                             fprintf(output, "%d     pc := ?\n", GlobalTrack.Instruction);
                             GlobalTrack.raise_list = GlobalTrack.Instruction;
                             AddPatch(GlobalTrack.raise_list);
                             GlobalTrack.Instruction++;
                           }
#line 3097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1365 "ada.y" /* yacc.c:1646  */
    {
                             if (GlobalTrack.handler_done == false) {
                               node_t * outcome = Search((yyvsp[0].var));
                               if(strcmp(outcome->kind, "exception") == 0) {
                                 jump_table[outcome->ival] = GlobalTrack.Instruction;
                                 GlobalTrack.raise_list_counter++;
                               }
                             }
                           }
#line 3111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1375 "ada.y" /* yacc.c:1646  */
    {
                             if (GlobalTrack.handler_done == false) {
                               GlobalTrack.handler_done = true;
                               jumpcounter = 0;
                               jump_table[1] = GlobalTrack.Instruction;
                               while (jumpcounter < 10) {
                                 if (jump_table[jumpcounter] == 0) {
                                   jump_table[jumpcounter] = GlobalTrack.Instruction;
                                 }
                                 jumpcounter++;
                               }
                             }
                           }
#line 3129 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3133 "y.tab.c" /* yacc.c:1646  */
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
#line 1389 "ada.y" /* yacc.c:1906  */

int main()
{
  output = fopen("./simple.out", "w");
  OuterContext();
  yyparse();
  fclose(output);
}

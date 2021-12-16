/* A Bison parser, made by GNU Bison 3.7.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30704

/* Bison version string.  */
#define YYBISON_VERSION "3.7.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "cslCompil.y"

int yyerror(char* s);
#include "cslCompil.c"

#line 76 "cslCompil.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "cslCompil.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_DEBUT = 3,                      /* DEBUT  */
  YYSYMBOL_PAR_OU = 4,                     /* PAR_OU  */
  YYSYMBOL_PAR_FER = 5,                    /* PAR_FER  */
  YYSYMBOL_FIN = 6,                        /* FIN  */
  YYSYMBOL_ENTIER = 7,                     /* ENTIER  */
  YYSYMBOL_BOOLEN = 8,                     /* BOOLEN  */
  YYSYMBOL_ENTIER_NATUREL = 9,             /* ENTIER_NATUREL  */
  YYSYMBOL_RETURN = 10,                    /* RETURN  */
  YYSYMBOL_REEL = 11,                      /* REEL  */
  YYSYMBOL_ID = 12,                        /* ID  */
  YYSYMBOL_AF = 13,                        /* AF  */
  YYSYMBOL_PV = 14,                        /* PV  */
  YYSYMBOL_PLUS = 15,                      /* PLUS  */
  YYSYMBOL_MOINS = 16,                     /* MOINS  */
  YYSYMBOL_FOIS = 17,                      /* FOIS  */
  YYSYMBOL_DIV = 18,                       /* DIV  */
  YYSYMBOL_MOD = 19,                       /* MOD  */
  YYSYMBOL_ALGO = 20,                      /* ALGO  */
  YYSYMBOL_DEC = 21,                       /* DEC  */
  YYSYMBOL_DP = 22,                        /* DP  */
  YYSYMBOL_TYPE = 23,                      /* TYPE  */
  YYSYMBOL_BOOLEEN = 24,                   /* BOOLEEN  */
  YYSYMBOL_VIRGL = 25,                     /* VIRGL  */
  YYSYMBOL_CONSTANCE = 26,                 /* CONSTANCE  */
  YYSYMBOL_COMPARATIF = 27,                /* COMPARATIF  */
  YYSYMBOL_OPERATEUR_LOGIQUE = 28,         /* OPERATEUR_LOGIQUE  */
  YYSYMBOL_TABLEAU_DE = 29,                /* TABLEAU_DE  */
  YYSYMBOL_PROCEDURE = 30,                 /* PROCEDURE  */
  YYSYMBOL_BREAK = 31,                     /* BREAK  */
  YYSYMBOL_FOR = 32,                       /* FOR  */
  YYSYMBOL_VARIANT_OF = 33,                /* VARIANT_OF  */
  YYSYMBOL_TO = 34,                        /* TO  */
  YYSYMBOL_FONCTION = 35,                  /* FONCTION  */
  YYSYMBOL_WHILE_TRUE = 36,                /* WHILE_TRUE  */
  YYSYMBOL_END_WHILE_TRUE = 37,            /* END_WHILE_TRUE  */
  YYSYMBOL_IF = 38,                        /* IF  */
  YYSYMBOL_ELSE_IF = 39,                   /* ELSE_IF  */
  YYSYMBOL_ELSE = 40,                      /* ELSE  */
  YYSYMBOL_ENDIF = 41,                     /* ENDIF  */
  YYSYMBOL_WHILE = 42,                     /* WHILE  */
  YYSYMBOL_DO = 43,                        /* DO  */
  YYSYMBOL_END_DO = 44,                    /* END_DO  */
  YYSYMBOL_REPEAT = 45,                    /* REPEAT  */
  YYSYMBOL_UP_TO = 46,                     /* UP_TO  */
  YYSYMBOL_YYACCEPT = 47,                  /* $accept  */
  YYSYMBOL_S = 48,                         /* S  */
  YYSYMBOL_CORPS = 49,                     /* CORPS  */
  YYSYMBOL_PROG = 50,                      /* PROG  */
  YYSYMBOL_VAL = 51,                       /* VAL  */
  YYSYMBOL_VAR = 52,                       /* VAR  */
  YYSYMBOL_DECLARATION = 53,               /* DECLARATION  */
  YYSYMBOL_EXPRESSION = 54,                /* EXPRESSION  */
  YYSYMBOL_PARAMETRE_APPEL = 55,           /* PARAMETRE_APPEL  */
  YYSYMBOL_PARAMETRE_SP = 56,              /* PARAMETRE_SP  */
  YYSYMBOL_CONDITION = 57,                 /* CONDITION  */
  YYSYMBOL_RENVOI = 58,                    /* RENVOI  */
  YYSYMBOL_TYPE_DEC = 59,                  /* TYPE_DEC  */
  YYSYMBOL_APPEL = 60,                     /* APPEL  */
  YYSYMBOL_AFFECTATION = 61,               /* AFFECTATION  */
  YYSYMBOL_DECLARATION_SOUS_PROGRAMME = 62, /* DECLARATION_SOUS_PROGRAMME  */
  YYSYMBOL_DECLARATION_PROCEDURE = 63,     /* DECLARATION_PROCEDURE  */
  YYSYMBOL_DECLARATION_FONCTION = 64,      /* DECLARATION_FONCTION  */
  YYSYMBOL_STRUCTURE_DE_CONTROLE = 65,     /* STRUCTURE_DE_CONTROLE  */
  YYSYMBOL_ELSE_IF_ = 66,                  /* ELSE_IF_  */
  YYSYMBOL_IF_ = 67,                       /* IF_  */
  YYSYMBOL_WHILE_DO_ = 68,                 /* WHILE_DO_  */
  YYSYMBOL_DO_WHILE_ = 69,                 /* DO_WHILE_  */
  YYSYMBOL_WHILE_TRUE_ = 70,               /* WHILE_TRUE_  */
  YYSYMBOL_FOR_ = 71                       /* FOR_  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
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
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   358

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  60
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  142

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   301


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int8 yyrline[] =
{
       0,     8,     8,     9,    10,    10,    10,    10,    10,    10,
      10,    12,    12,    12,    12,    13,    13,    16,    17,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    30,    30,
      30,    31,    31,    33,    33,    33,    34,    36,    36,    37,
      37,    39,    41,    41,    43,    44,    46,    46,    46,    46,
      46,    48,    48,    49,    50,    51,    52,    54,    56,    58,
      60
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "DEBUT", "PAR_OU",
  "PAR_FER", "FIN", "ENTIER", "BOOLEN", "ENTIER_NATUREL", "RETURN", "REEL",
  "ID", "AF", "PV", "PLUS", "MOINS", "FOIS", "DIV", "MOD", "ALGO", "DEC",
  "DP", "TYPE", "BOOLEEN", "VIRGL", "CONSTANCE", "COMPARATIF",
  "OPERATEUR_LOGIQUE", "TABLEAU_DE", "PROCEDURE", "BREAK", "FOR",
  "VARIANT_OF", "TO", "FONCTION", "WHILE_TRUE", "END_WHILE_TRUE", "IF",
  "ELSE_IF", "ELSE", "ENDIF", "WHILE", "DO", "END_DO", "REPEAT", "UP_TO",
  "$accept", "S", "CORPS", "PROG", "VAL", "VAR", "DECLARATION",
  "EXPRESSION", "PARAMETRE_APPEL", "PARAMETRE_SP", "CONDITION", "RENVOI",
  "TYPE_DEC", "APPEL", "AFFECTATION", "DECLARATION_SOUS_PROGRAMME",
  "DECLARATION_PROCEDURE", "DECLARATION_FONCTION", "STRUCTURE_DE_CONTROLE",
  "ELSE_IF_", "IF_", "WHILE_DO_", "DO_WHILE_", "WHILE_TRUE_", "FOR_", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301
};
#endif

#define YYPACT_NINF (-47)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -2,    19,    15,    30,   -47,   290,   -47,    21,    28,    43,
     -47,    44,    45,   290,    57,    64,   290,   101,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     143,   116,    58,    78,    71,    86,   182,   116,   116,   144,
     -47,   290,   -47,   -47,   -47,   -47,   -47,    93,   -47,   -47,
       2,   -47,   116,   -47,   -47,   322,   -47,     3,    87,    65,
      87,   -47,    47,     0,     1,    97,   -47,    84,    70,   -47,
     116,   116,   116,   116,   116,   -47,    94,    46,    83,    11,
     116,    12,   116,   290,   116,    63,   116,   109,   -47,   339,
     339,   339,   339,   339,    89,   116,   -47,   100,    30,    87,
       4,   132,   339,   166,    91,   290,     7,   -47,   328,   118,
     -47,   117,   116,   290,   290,   290,   -47,    36,   204,   -47,
     -47,   -47,    99,   128,   220,   242,   290,   -47,   -47,   102,
     116,   138,   -47,   -47,   258,   290,   334,   -47,   -47,   274,
     -47,   -47
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     2,     0,     0,     0,
       9,     0,     0,     0,     0,     0,     0,     0,     4,     7,
       5,     6,    42,    43,     8,    46,    47,    48,    49,    50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,    10,    40,    11,    14,    12,    13,    15,    29,    28,
       0,    16,     0,    20,    19,     0,    16,     0,     0,     0,
       0,    59,    33,     0,     0,     0,    39,     0,     0,    41,
       0,     0,     0,     0,     0,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    30,    27,    22,
      23,    24,    25,    26,     0,     0,    17,     0,     0,     0,
       0,     0,    34,     0,    35,     0,     0,    38,     0,     0,
      44,    32,     0,     0,     0,     0,    53,     0,     0,    58,
      18,    31,     0,     0,    51,     0,     0,    54,    57,     0,
       0,     0,    52,    56,     0,     0,     0,    45,    55,     0,
      36,    60
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -47,   -47,    49,    -5,   -26,   -17,   -47,    -1,    90,   -46,
     -37,   -47,   -47,   -28,   -47,   -47,   -47,   -47,   -47,    29,
     -47,   -47,   -47,   -47,   -47
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     6,    41,    53,    54,    18,    62,    50,    79,
      63,   131,    77,    19,    20,    21,    22,    23,    24,   117,
      25,    26,    27,    28,    29
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      17,    64,    51,    56,    48,    83,    85,    66,    36,    56,
      56,    39,   119,    49,    81,     4,    98,   101,     1,    70,
      71,    72,    73,    74,    56,    30,    75,    67,    84,    84,
      55,     3,    76,     5,    31,    84,    99,    99,   112,    51,
      32,    48,    56,    56,    56,    56,    56,   104,    34,   106,
      49,    68,    56,   111,    56,    33,    56,    35,    56,    95,
      96,    37,    70,    71,    72,    73,    74,    56,    38,    89,
      90,    91,    92,    93,    82,    88,   126,   127,   103,   100,
      57,   102,    58,    59,    56,    70,    71,    72,    73,    74,
      60,    43,    44,    45,   108,    46,    47,    30,    80,    78,
     118,    86,    56,    94,   129,    97,   105,    40,   123,   124,
     125,   122,   107,     7,    70,    71,    72,    73,    74,    84,
      52,   134,     8,    43,    44,    45,   109,    46,    47,   136,
     139,     9,    10,    11,    67,   113,    12,    13,   130,    14,
       7,   121,    99,    15,   137,   135,    16,   110,    42,     8,
      43,    44,    45,   132,    46,    47,     7,    87,     9,    10,
      11,     0,     0,    12,    13,     8,    14,     0,     0,     0,
      15,     0,     0,    16,     9,    10,    11,     0,     7,    12,
      13,     0,    14,     0,     0,     0,    15,     8,     0,    16,
      65,     0,     0,     0,     7,     0,     9,    10,    11,     0,
       0,    12,    13,     8,    14,   114,   115,   116,    15,     0,
       0,    16,     9,    10,    11,     0,     7,    12,    13,    61,
      14,     0,     0,     0,    15,     8,     0,    16,     0,     0,
       0,     0,     7,     0,     9,    10,    11,     0,     0,    12,
      13,     8,    14,     0,     0,     0,    15,     0,   128,    16,
       9,    10,    11,     0,     7,    12,    13,     0,    14,   114,
       0,     0,    15,     8,     0,    16,     0,     0,     0,     0,
       7,     0,     9,    10,    11,     0,     0,    12,    13,     8,
      14,     0,     0,   133,    15,     0,     7,    16,     9,    10,
      11,     0,     0,    12,    13,     8,    14,     0,     0,   138,
      15,     0,     7,    16,     9,    10,    11,     0,     0,    12,
      13,     8,    14,     0,     0,     0,    15,     0,   141,    16,
       9,    10,    11,     0,     0,    12,    13,     0,    14,     0,
       0,     0,    15,     0,     0,    16,    69,    70,    71,    72,
      73,    74,   120,    70,    71,    72,    73,    74,   140,    70,
      71,    72,    73,    74,    70,    71,    72,    73,    74
};

static const yytype_int16 yycheck[] =
{
       5,    38,    30,    31,    30,     5,     5,     5,    13,    37,
      38,    16,     5,    30,    60,     0,     5,     5,    20,    15,
      16,    17,    18,    19,    52,     4,    23,    25,    28,    28,
      31,    12,    29,     3,    13,    28,    25,    25,    34,    67,
      12,    67,    70,    71,    72,    73,    74,    84,     4,    86,
      67,    52,    80,    99,    82,    12,    84,    12,    86,    13,
      14,     4,    15,    16,    17,    18,    19,    95,     4,    70,
      71,    72,    73,    74,    27,     5,    40,    41,    83,    80,
      22,    82,     4,    12,   112,    15,    16,    17,    18,    19,
       4,     7,     8,     9,    95,    11,    12,     4,    33,    12,
     105,     4,   130,     9,     5,    22,    43,     6,   113,   114,
     115,   112,    23,    12,    15,    16,    17,    18,    19,    28,
       4,   126,    21,     7,     8,     9,    26,    11,    12,   130,
     135,    30,    31,    32,    25,     3,    35,    36,    10,    38,
      12,    23,    25,    42,     6,    43,    45,    98,     5,    21,
       7,     8,     9,   124,    11,    12,    12,    67,    30,    31,
      32,    -1,    -1,    35,    36,    21,    38,    -1,    -1,    -1,
      42,    -1,    -1,    45,    30,    31,    32,    -1,    12,    35,
      36,    -1,    38,    -1,    -1,    -1,    42,    21,    -1,    45,
      46,    -1,    -1,    -1,    12,    -1,    30,    31,    32,    -1,
      -1,    35,    36,    21,    38,    39,    40,    41,    42,    -1,
      -1,    45,    30,    31,    32,    -1,    12,    35,    36,    37,
      38,    -1,    -1,    -1,    42,    21,    -1,    45,    -1,    -1,
      -1,    -1,    12,    -1,    30,    31,    32,    -1,    -1,    35,
      36,    21,    38,    -1,    -1,    -1,    42,    -1,    44,    45,
      30,    31,    32,    -1,    12,    35,    36,    -1,    38,    39,
      -1,    -1,    42,    21,    -1,    45,    -1,    -1,    -1,    -1,
      12,    -1,    30,    31,    32,    -1,    -1,    35,    36,    21,
      38,    -1,    -1,    41,    42,    -1,    12,    45,    30,    31,
      32,    -1,    -1,    35,    36,    21,    38,    -1,    -1,    41,
      42,    -1,    12,    45,    30,    31,    32,    -1,    -1,    35,
      36,    21,    38,    -1,    -1,    -1,    42,    -1,    44,    45,
      30,    31,    32,    -1,    -1,    35,    36,    -1,    38,    -1,
      -1,    -1,    42,    -1,    -1,    45,    14,    15,    16,    17,
      18,    19,    14,    15,    16,    17,    18,    19,    14,    15,
      16,    17,    18,    19,    15,    16,    17,    18,    19
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    20,    48,    12,     0,     3,    49,    12,    21,    30,
      31,    32,    35,    36,    38,    42,    45,    50,    53,    60,
      61,    62,    63,    64,    65,    67,    68,    69,    70,    71,
       4,    13,    12,    12,     4,    12,    50,     4,     4,    50,
       6,    50,     5,     7,     8,     9,    11,    12,    51,    52,
      55,    60,     4,    51,    52,    54,    60,    22,     4,    12,
       4,    37,    54,    57,    57,    46,     5,    25,    54,    14,
      15,    16,    17,    18,    19,    23,    29,    59,    12,    56,
      33,    56,    27,     5,    28,     5,     4,    55,     5,    54,
      54,    54,    54,    54,     9,    13,    14,    22,     5,    25,
      54,     5,    54,    50,    57,    43,    57,    23,    54,    26,
      49,    56,    34,     3,    39,    40,    41,    66,    50,     5,
      14,    23,    54,    50,    50,    50,    40,    41,    44,     5,
      10,    58,    66,    41,    50,    43,    54,     6,    41,    50,
      14,    44
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    49,    50,    50,    50,    50,    50,    50,
      50,    51,    51,    51,    51,    52,    52,    53,    53,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    55,    55,
      55,    56,    56,    57,    57,    57,    58,    59,    59,    60,
      60,    61,    62,    62,    63,    64,    65,    65,    65,    65,
      65,    66,    66,    67,    67,    67,    67,    68,    69,    70,
      71
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     3,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     5,     7,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     1,     1,
       3,     4,     3,     1,     3,     3,     3,     1,     3,     4,
       3,     4,     1,     1,     6,     9,     1,     1,     1,     1,
       1,     2,     3,     6,     7,     9,     8,     7,     6,     3,
      11
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 19: /* EXPRESSION: VAR  */
#line 19 "cslCompil.y"
                 { yyval = yyvsp[0]; }
#line 1268 "cslCompil.tab.c"
    break;

  case 20: /* EXPRESSION: VAL  */
#line 20 "cslCompil.y"
                  { yyval = yyvsp[0]; }
#line 1274 "cslCompil.tab.c"
    break;

  case 21: /* EXPRESSION: APPEL  */
#line 21 "cslCompil.y"
                    { yyval = yyvsp[0]; }
#line 1280 "cslCompil.tab.c"
    break;

  case 22: /* EXPRESSION: EXPRESSION PLUS EXPRESSION  */
#line 22 "cslCompil.y"
                                         { yyval = yyvsp[-2] + yyvsp[0]; }
#line 1286 "cslCompil.tab.c"
    break;

  case 23: /* EXPRESSION: EXPRESSION MOINS EXPRESSION  */
#line 23 "cslCompil.y"
                                          { yyval = yyvsp[-2] - yyvsp[0]; }
#line 1292 "cslCompil.tab.c"
    break;

  case 24: /* EXPRESSION: EXPRESSION FOIS EXPRESSION  */
#line 24 "cslCompil.y"
                                         { yyval = yyvsp[-2] * yyvsp[0]; }
#line 1298 "cslCompil.tab.c"
    break;

  case 25: /* EXPRESSION: EXPRESSION DIV EXPRESSION  */
#line 25 "cslCompil.y"
                                        { yyval = yyvsp[-2] / yyvsp[0]; }
#line 1304 "cslCompil.tab.c"
    break;

  case 26: /* EXPRESSION: EXPRESSION MOD EXPRESSION  */
#line 26 "cslCompil.y"
                                        { yyval = yyvsp[-2] % yyvsp[0]; }
#line 1310 "cslCompil.tab.c"
    break;

  case 27: /* EXPRESSION: PAR_OU EXPRESSION PAR_FER  */
#line 27 "cslCompil.y"
                                        { yyval = yyvsp[-1]; }
#line 1316 "cslCompil.tab.c"
    break;

  case 36: /* RENVOI: RETURN EXPRESSION PV  */
#line 34 "cslCompil.y"
                             { yyval = yyvsp[-1]; }
#line 1322 "cslCompil.tab.c"
    break;

  case 41: /* AFFECTATION: ID AF EXPRESSION PV  */
#line 39 "cslCompil.y"
                                  { printf("%d vaut maintenant %d\n", yyvsp[-3], yyvsp[-1]); }
#line 1328 "cslCompil.tab.c"
    break;


#line 1332 "cslCompil.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 62 "cslCompil.y"

int yyerror(char* S)
{
    printf("Erreur syntaxique a la ligne %d\n", yylineno);
}
void main()
{
    if(!yyparse())
        printf("Fin de l'analyse syntaxique\n");
}

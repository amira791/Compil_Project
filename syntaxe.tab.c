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
#line 2 "syntaxe.y"
  
    //*************************Partie 1 : declarations pour le compilateur C
#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include "syntaxe.tab.h" // biliotèque contient token et d'autre decalaration de bison et etre utlise par flex
#include "shared.h"
#include "SymboleTable.h"



//--------------------------pour tables de symboles

void Afficher(SymboleTable *symboleTable);

NodeSymbole *insertSymbole(SymboleTable *symboleTable,char *tokenId);
NodeSymbole *searchByName(SymboleTable *symboleTable, char* name);
NodeSymbole *insertSymbole(SymboleTable *symboleTable, char *tokenId);
SymboleTable *allocateSymboleTable();

char sonType [20];
FILE *fp = NULL;
char t[50];

SymboleTable *ts;



//---------------concerne les routines
struct sauve{
    char* nom;
    int valeur;
};

struct sauve tab_sauv[50];
char* Quadreplets[50][4];

int indice_courant = 0;
int QC = 0;
char c[10];
//methode pour manipuler vecetur des sauvs
void stocke( char* nom, int valeur);
int restaure(  char* nom );

//methode de manipulation de matrcie des Quadreplets
void initQ( );
int insertQ( char* tab[4]);
void afficheQ();
void afficheV();
//------------------------Fin routines







//-----------------variable utlise pour la verfication
char ID_for[200] = "";

// variables partages par flex et bison: lignenum, nb_cara


// variable globale pour vefier etat et emplacement en cas d'err
char* emplacement ;
int err = 0;



// les entetes des methodes à utliser
int yylex();

int yyerror(char* msg);




#line 152 "syntaxe.tab.c"

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

#include "syntaxe.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NOMPROGR = 3,                   /* NOMPROGR  */
  YYSYMBOL_TYPE_CONS = 4,                  /* TYPE_CONS  */
  YYSYMBOL_TYPE_INT = 5,                   /* TYPE_INT  */
  YYSYMBOL_TYPE_FLT = 6,                   /* TYPE_FLT  */
  YYSYMBOL_TYPE_CAR = 7,                   /* TYPE_CAR  */
  YYSYMBOL_TYPE_STR = 8,                   /* TYPE_STR  */
  YYSYMBOL_TYPE_BLN = 9,                   /* TYPE_BLN  */
  YYSYMBOL_STRUCT = 10,                    /* STRUCT  */
  YYSYMBOL_DEB_CORPS = 11,                 /* DEB_CORPS  */
  YYSYMBOL_FIN_CORPS = 12,                 /* FIN_CORPS  */
  YYSYMBOL_PAR_OUV = 13,                   /* PAR_OUV  */
  YYSYMBOL_PAR_FERM = 14,                  /* PAR_FERM  */
  YYSYMBOL_SEPARATEUR = 15,                /* SEPARATEUR  */
  YYSYMBOL_FIN_INSTRUCTION = 16,           /* FIN_INSTRUCTION  */
  YYSYMBOL_DEB_TABLEAU = 17,               /* DEB_TABLEAU  */
  YYSYMBOL_FIN_TABLEAU = 18,               /* FIN_TABLEAU  */
  YYSYMBOL_ACCES_STRUCT = 19,              /* ACCES_STRUCT  */
  YYSYMBOL_MAIN = 20,                      /* MAIN  */
  YYSYMBOL_PROCEDURE = 21,                 /* PROCEDURE  */
  YYSYMBOL_AFFECTATION = 22,               /* AFFECTATION  */
  YYSYMBOL_FIN_PROG = 23,                  /* FIN_PROG  */
  YYSYMBOL_READ = 24,                      /* READ  */
  YYSYMBOL_WRITE = 25,                     /* WRITE  */
  YYSYMBOL_RETURN = 26,                    /* RETURN  */
  YYSYMBOL_IF = 27,                        /* IF  */
  YYSYMBOL_ELSE = 28,                      /* ELSE  */
  YYSYMBOL_ELSEIF = 29,                    /* ELSEIF  */
  YYSYMBOL_REPEAT = 30,                    /* REPEAT  */
  YYSYMBOL_ITERATOR = 31,                  /* ITERATOR  */
  YYSYMBOL_CASE = 32,                      /* CASE  */
  YYSYMBOL_CASE_NUM = 33,                  /* CASE_NUM  */
  YYSYMBOL_FIN_CASE = 34,                  /* FIN_CASE  */
  YYSYMBOL_DEFAULT = 35,                   /* DEFAULT  */
  YYSYMBOL_PLUS = 36,                      /* PLUS  */
  YYSYMBOL_MOINS = 37,                     /* MOINS  */
  YYSYMBOL_DIV = 38,                       /* DIV  */
  YYSYMBOL_MUL = 39,                       /* MUL  */
  YYSYMBOL_MOD = 40,                       /* MOD  */
  YYSYMBOL_INF_EGAL = 41,                  /* INF_EGAL  */
  YYSYMBOL_INF = 42,                       /* INF  */
  YYSYMBOL_SUPP = 43,                      /* SUPP  */
  YYSYMBOL_SUPP_EGAL = 44,                 /* SUPP_EGAL  */
  YYSYMBOL_EGALE = 45,                     /* EGALE  */
  YYSYMBOL_PASEGALE = 46,                  /* PASEGALE  */
  YYSYMBOL_NEGATION = 47,                  /* NEGATION  */
  YYSYMBOL_ET = 48,                        /* ET  */
  YYSYMBOL_OU = 49,                        /* OU  */
  YYSYMBOL_ENTIER = 50,                    /* ENTIER  */
  YYSYMBOL_CARACTERE = 51,                 /* CARACTERE  */
  YYSYMBOL_FLOTTANT = 52,                  /* FLOTTANT  */
  YYSYMBOL_CHAINE = 53,                    /* CHAINE  */
  YYSYMBOL_ID = 54,                        /* ID  */
  YYSYMBOL_BOOLEAN_FAUX = 55,              /* BOOLEAN_FAUX  */
  YYSYMBOL_BOOLEAN_VRAI = 56,              /* BOOLEAN_VRAI  */
  YYSYMBOL_YYACCEPT = 57,                  /* $accept  */
  YYSYMBOL_debut_acolade = 58,             /* debut_acolade  */
  YYSYMBOL_fin_acolade = 59,               /* fin_acolade  */
  YYSYMBOL_debut_paren = 60,               /* debut_paren  */
  YYSYMBOL_fin_paren = 61,                 /* fin_paren  */
  YYSYMBOL_fin_inst = 62,                  /* fin_inst  */
  YYSYMBOL_separ = 63,                     /* separ  */
  YYSYMBOL_debut_tab = 64,                 /* debut_tab  */
  YYSYMBOL_fin_tab = 65,                   /* fin_tab  */
  YYSYMBOL_type = 66,                      /* type  */
  YYSYMBOL_programme = 67,                 /* programme  */
  YYSYMBOL_def_structs = 68,               /* def_structs  */
  YYSYMBOL_def_struct = 69,                /* def_struct  */
  YYSYMBOL_struct_corp = 70,               /* struct_corp  */
  YYSYMBOL_plus_declarations = 71,         /* plus_declarations  */
  YYSYMBOL_Fn_Pro = 72,                    /* Fn_Pro  */
  YYSYMBOL_Fn = 73,                        /* Fn  */
  YYSYMBOL_PR = 74,                        /* PR  */
  YYSYMBOL_Params = 75,                    /* Params  */
  YYSYMBOL_plus_Params = 76,               /* plus_Params  */
  YYSYMBOL_decalaration_para = 77,         /* decalaration_para  */
  YYSYMBOL_prog_principale = 78,           /* prog_principale  */
  YYSYMBOL_corp = 79,                      /* corp  */
  YYSYMBOL_corp_main = 80,                 /* corp_main  */
  YYSYMBOL_corp_fnc = 81,                  /* corp_fnc  */
  YYSYMBOL_retour = 82,                    /* retour  */
  YYSYMBOL_au_moin_inst = 83,              /* au_moin_inst  */
  YYSYMBOL_if_struct = 84,                 /* if_struct  */
  YYSYMBOL_85_1 = 85,                      /* $@1  */
  YYSYMBOL_86_2 = 86,                      /* $@2  */
  YYSYMBOL_suite = 87,                     /* suite  */
  YYSYMBOL_case_struct = 88,               /* case_struct  */
  YYSYMBOL_corp_case = 89,                 /* corp_case  */
  YYSYMBOL_plus_case = 90,                 /* plus_case  */
  YYSYMBOL_une_case = 91,                  /* une_case  */
  YYSYMBOL_default = 92,                   /* default  */
  YYSYMBOL_while_struct = 93,              /* while_struct  */
  YYSYMBOL_for_struct = 94,                /* for_struct  */
  YYSYMBOL_95_3 = 95,                      /* $@3  */
  YYSYMBOL_96_4 = 96,                      /* $@4  */
  YYSYMBOL_97_5 = 97,                      /* $@5  */
  YYSYMBOL_98_6 = 98,                      /* $@6  */
  YYSYMBOL_99_7 = 99,                      /* $@7  */
  YYSYMBOL_init_index = 100,               /* init_index  */
  YYSYMBOL_incrementation = 101,           /* incrementation  */
  YYSYMBOL_Condition_For = 102,            /* Condition_For  */
  YYSYMBOL_Appel_Methode = 103,            /* Appel_Methode  */
  YYSYMBOL_write_Proc = 104,               /* write_Proc  */
  YYSYMBOL_read_Proc = 105,                /* read_Proc  */
  YYSYMBOL_valeur_param = 106,             /* valeur_param  */
  YYSYMBOL_plus_valeur = 107,              /* plus_valeur  */
  YYSYMBOL_parametre_read = 108,           /* parametre_read  */
  YYSYMBOL_decalaration = 109,             /* decalaration  */
  YYSYMBOL_affec = 110,                    /* affec  */
  YYSYMBOL_valeur = 111,                   /* valeur  */
  YYSYMBOL_constant = 112,                 /* constant  */
  YYSYMBOL_condition = 113,                /* condition  */
  YYSYMBOL_comparaison = 114,              /* comparaison  */
  YYSYMBOL_expression = 115,               /* expression  */
  YYSYMBOL_terme = 116                     /* terme  */
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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   429

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  155
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  298

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   311


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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   125,   125,   126,   128,   129,   132,   133,   135,   136,
     139,   140,   142,   143,   147,   149,   150,   154,   155,   156,
     157,   158,   162,   166,   167,   172,   191,   192,   195,   196,
     200,   201,   202,   206,   228,   247,   248,   252,   253,   256,
     257,   258,   259,   263,   264,   267,   271,   272,   275,   278,
     279,   282,   283,   284,   285,   286,   287,   289,   290,   291,
     293,   294,   295,   296,   297,   298,   300,   301,   302,   307,
     320,   306,   338,   351,   365,   369,   371,   372,   374,   375,
     376,   378,   381,   385,   390,   401,   419,   425,   438,   389,
     464,   465,   505,   508,   509,   512,   513,   517,   522,   527,
     536,   560,   563,   566,   567,   569,   570,   573,   598,   626,
     645,   669,   690,   738,   797,   798,   799,   800,   802,   803,
     808,   809,   810,   811,   812,   813,   814,   820,   821,   822,
     823,   824,   825,   829,   830,   831,   832,   833,   834,   837,
     838,   839,   840,   841,   842,   843,   844,   847,   886,   887,
     889,   941,   944,   945,   946,   947
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
  "\"end of file\"", "error", "\"invalid token\"", "NOMPROGR",
  "TYPE_CONS", "TYPE_INT", "TYPE_FLT", "TYPE_CAR", "TYPE_STR", "TYPE_BLN",
  "STRUCT", "DEB_CORPS", "FIN_CORPS", "PAR_OUV", "PAR_FERM", "SEPARATEUR",
  "FIN_INSTRUCTION", "DEB_TABLEAU", "FIN_TABLEAU", "ACCES_STRUCT", "MAIN",
  "PROCEDURE", "AFFECTATION", "FIN_PROG", "READ", "WRITE", "RETURN", "IF",
  "ELSE", "ELSEIF", "REPEAT", "ITERATOR", "CASE", "CASE_NUM", "FIN_CASE",
  "DEFAULT", "PLUS", "MOINS", "DIV", "MUL", "MOD", "INF_EGAL", "INF",
  "SUPP", "SUPP_EGAL", "EGALE", "PASEGALE", "NEGATION", "ET", "OU",
  "ENTIER", "CARACTERE", "FLOTTANT", "CHAINE", "ID", "BOOLEAN_FAUX",
  "BOOLEAN_VRAI", "$accept", "debut_acolade", "fin_acolade", "debut_paren",
  "fin_paren", "fin_inst", "separ", "debut_tab", "fin_tab", "type",
  "programme", "def_structs", "def_struct", "struct_corp",
  "plus_declarations", "Fn_Pro", "Fn", "PR", "Params", "plus_Params",
  "decalaration_para", "prog_principale", "corp", "corp_main", "corp_fnc",
  "retour", "au_moin_inst", "if_struct", "$@1", "$@2", "suite",
  "case_struct", "corp_case", "plus_case", "une_case", "default",
  "while_struct", "for_struct", "$@3", "$@4", "$@5", "$@6", "$@7",
  "init_index", "incrementation", "Condition_For", "Appel_Methode",
  "write_Proc", "read_Proc", "valeur_param", "plus_valeur",
  "parametre_read", "decalaration", "affec", "valeur", "constant",
  "condition", "comparaison", "expression", "terme", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311
};
#endif

#define YYPACT_NINF (-139)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-148)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      75,    13,    83,  -139,  -139,    16,  -139,    31,   183,    16,
     109,  -139,  -139,  -139,  -139,  -139,    54,    95,   132,   183,
     183,  -139,  -139,  -139,   242,    80,    80,    80,   127,  -139,
    -139,   202,    -4,    91,  -139,   242,  -139,  -139,   403,   403,
      81,  -139,   100,  -139,    13,   122,  -139,  -139,  -139,  -139,
     202,     2,    81,  -139,   121,    81,  -139,  -139,   109,    13,
    -139,    72,    17,  -139,   123,   109,  -139,  -139,   403,   109,
     266,  -139,  -139,  -139,  -139,   125,  -139,   143,    72,  -139,
    -139,   266,  -139,    80,    80,    22,    22,    80,    80,   154,
      91,  -139,   266,   266,   266,   266,   266,   266,   266,   266,
     266,    13,    72,   126,    26,   141,   205,   114,  -139,   263,
    -139,   109,    20,   231,   148,   231,   205,  -139,  -139,  -139,
    -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,   147,  -139,
    -139,   231,    91,   158,    81,   288,   -20,     3,  -139,  -139,
    -139,  -139,   389,  -139,  -139,   310,  -139,    81,  -139,   130,
    -139,   383,    70,    22,   338,   263,    38,    81,   372,   109,
    -139,  -139,    37,    74,    81,   159,    13,    81,  -139,    13,
    -139,   152,    13,  -139,  -139,  -139,  -139,   155,   163,   355,
      81,    13,   231,   310,   310,   310,   310,   310,    81,    56,
      22,    22,  -139,   310,   310,   310,   310,   310,   310,  -139,
     164,   231,  -139,   109,   193,  -139,    13,  -139,    72,  -139,
     204,    72,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,
    -139,    81,    81,  -139,  -139,  -139,  -139,  -139,  -139,   118,
     206,  -139,    23,   106,   231,  -139,  -139,  -139,  -139,  -139,
    -139,   109,    22,  -139,   208,  -139,   142,  -139,   198,  -139,
    -139,  -139,   158,  -139,  -139,    91,  -139,   106,  -139,   201,
      13,  -139,   109,   231,   310,   310,   310,   310,    74,   266,
     203,  -139,  -139,   266,  -139,  -139,  -139,  -139,  -139,  -139,
    -139,  -139,   218,    72,   228,   313,    13,  -139,    13,   249,
    -139,  -139,  -139,  -139,    81,  -139,   109,  -139
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    10,    11,    23,     1,     0,    30,    23,
       0,    17,    18,    20,    21,    19,     0,     0,    43,    30,
      30,    24,     2,     3,    27,     0,     0,     0,     0,    31,
      32,     0,     0,     0,    26,    28,     6,     7,    35,    35,
       0,    22,     0,    14,     0,     0,     4,     5,    25,    29,
       0,     0,     0,    36,     0,     0,     8,     9,     0,     0,
     109,     0,     0,    39,     0,     0,    12,    13,     0,     0,
      46,    44,   111,    15,    16,     0,    40,     0,     0,    34,
      38,    46,    33,     0,     0,     0,     0,     0,     0,     0,
       0,    47,    53,    54,    55,    56,    59,    58,    57,    51,
      52,     0,     0,     0,     0,     0,     0,     6,   132,     0,
      69,     0,     0,     0,     0,     0,     0,    45,    62,    63,
      64,    65,    68,    67,    66,    60,    61,   110,     0,    41,
      49,     0,     0,   107,     0,   139,     0,     0,   148,   115,
     149,   114,     0,   116,   117,     0,   151,     0,   104,     0,
     118,   141,     6,     0,     0,     0,     0,     0,     0,     0,
      83,    90,     0,     0,     0,     0,     0,     0,    42,     0,
      48,     0,     0,   152,   154,   153,   155,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   128,     0,     0,     0,     0,     0,     0,    70,
       0,     0,    84,     0,     0,   112,     0,    50,     0,   102,
       0,     0,   140,   101,   106,   142,   143,   145,   144,   146,
     129,     0,     0,   138,   137,   135,   136,   133,   134,    72,
       0,    91,     0,    76,     0,   100,   108,   119,   150,   130,
     131,     0,     0,    71,     0,    95,     0,    85,     0,   122,
     121,   120,   123,   125,   126,     0,    77,    78,    80,     0,
       0,    73,     0,     0,     0,     0,     0,     0,     0,    46,
       0,    75,    79,    46,   113,    74,    92,    99,    98,    96,
      97,    86,     0,     0,     0,     0,     0,   124,     0,     6,
      87,    94,    82,    81,     0,    88,     0,    89
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -139,     0,   -81,   -21,   -40,   -43,  -138,   -29,   -71,    41,
    -139,   256,  -139,  -139,   234,   146,  -139,  -139,   227,   209,
    -139,  -139,   -63,   -73,  -139,  -139,   236,  -139,  -139,  -139,
    -139,  -139,  -139,    21,  -139,  -139,  -139,  -139,  -139,  -139,
    -139,  -139,  -139,  -139,  -139,  -139,   -53,  -139,  -139,   172,
      97,  -139,   129,  -139,   -95,  -139,   -48,  -139,    42,  -139
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    70,    48,   145,   212,     5,    68,   178,    75,    32,
       2,     8,     9,    33,    34,    18,    19,    20,    52,    53,
      54,    28,    71,    90,    82,   132,    91,    92,   159,   229,
     243,    93,   255,   256,   257,   258,    94,    95,   232,   268,
     285,   294,   296,   163,   290,   247,   146,    97,    98,   147,
     148,   134,    99,   100,   149,   259,   156,   157,   150,   151
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      58,    60,    79,    45,    38,    39,    40,   103,   104,   117,
      24,   182,    65,    43,     3,    69,    72,    96,   164,    43,
     166,   161,    64,   107,   245,   202,     7,   130,    96,     4,
     173,   128,   174,    77,    43,    37,   169,   110,   111,    96,
      96,    96,    96,    96,    96,    96,    96,    96,   160,    17,
      44,   170,   131,   175,   200,   176,    63,    56,   127,   201,
      17,    17,   105,   106,   109,   109,   112,   113,   116,    81,
      57,    76,    42,    73,   162,    66,   108,   246,     1,    51,
      51,    36,    56,     6,  -139,    10,   190,   191,   155,    67,
      74,    62,    46,    37,   172,    57,   199,   193,   194,   195,
     196,   197,   198,    47,   171,   188,   231,   181,    25,    51,
      22,  -139,  -139,  -139,  -139,  -139,  -139,   192,  -127,  -127,
      23,   116,    66,   205,   203,  -127,   207,   206,  -127,   209,
     281,    66,   109,   116,   155,   -37,    67,   236,   213,   260,
     238,   248,   221,   222,  -105,    67,   241,   242,   220,    26,
      41,   158,    27,    35,    59,    36,   249,   250,   116,   251,
     252,   253,   254,   235,    35,    29,    30,    37,   276,   109,
     109,   114,    61,    78,   271,    43,   115,   204,   261,   101,
     129,   239,   240,   264,   265,   266,   267,   180,    11,    12,
      13,    14,    15,   102,   262,   133,   282,   189,   165,   275,
     284,   168,   208,   233,    16,   210,   135,    11,    12,    13,
      14,    15,   287,   211,   230,   234,    96,   274,    37,  -103,
      96,   109,   237,   270,   244,   215,   216,   217,   218,   219,
     263,   269,   135,   297,   273,   223,   224,   225,   226,   227,
     228,   136,   137,   292,    37,   293,    31,    11,    12,    13,
      14,    15,   286,   283,   295,   138,   139,   140,   141,   142,
     143,   144,   288,   -93,   152,    21,    55,   136,   137,    49,
      31,    11,    12,    13,    14,    15,    37,    80,   272,   214,
       0,   138,   139,   140,   141,   142,   143,   144,   167,    -6,
      83,    84,     0,    85,     0,     0,    86,    87,    88,   136,
     137,    -6,     0,     0,     0,     0,   277,   278,   279,   280,
     153,   135,     0,   138,   289,   140,     0,   154,     0,     0,
      89,     0,     0,    37,    -6,    -6,    37,   291,   118,   119,
     120,   121,   122,   123,   124,   125,   126,     0,    -6,    36,
      -6,     0,    -6,     0,     0,     0,   136,   137,     0,   136,
     137,    37,  -147,     0,     0,    43,    36,     0,     0,     0,
     138,     0,   140,   138,   179,   140,     0,   179,    37,  -147,
    -147,  -147,    43,     0,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,     0,  -132,  -132,     0,     0,
      36,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,    37,  -147,  -147,  -147,   177,    50,    11,    12,
      13,    14,    15,   193,   194,   195,   196,   197,   198,   183,
     184,   185,   186,   187,     0,  -147,  -147,  -147,  -147,  -147
};

static const yytype_int16 yycheck[] =
{
      40,    44,    65,    32,    25,    26,    27,    78,    81,    90,
      10,   149,    52,    17,     1,    55,    59,    70,   113,    17,
     115,     1,    51,     1,     1,   163,    10,     1,    81,    16,
      50,   102,    52,    62,    17,    13,   131,    85,    86,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   111,     8,
      54,   132,    26,    50,    17,    52,    54,     1,   101,    22,
      19,    20,    83,    84,    85,    86,    87,    88,    89,    69,
      14,    54,    31,     1,    54,     1,    54,    54,     3,    38,
      39,     1,     1,     0,    14,    54,    48,    49,   109,    15,
      18,    50,     1,    13,   134,    14,   159,    41,    42,    43,
      44,    45,    46,    12,   133,   153,   201,   147,    54,    68,
       1,    41,    42,    43,    44,    45,    46,   157,    48,    49,
      11,   142,     1,   166,   164,    11,   169,   167,    14,   172,
     268,     1,   153,   154,   155,    14,    15,   208,   181,   234,
     211,    35,   190,   191,    14,    15,    28,    29,   188,    54,
      23,   109,    20,    24,    54,     1,    50,    51,   179,    53,
      54,    55,    56,   206,    35,    19,    20,    13,   263,   190,
     191,    17,    50,    50,   255,    17,    22,    18,   241,    54,
      54,   221,   222,    41,    42,    43,    44,   145,     5,     6,
       7,     8,     9,    50,   242,    54,   269,   155,    50,   262,
     273,    54,    50,   203,    21,    50,     1,     5,     6,     7,
       8,     9,   283,    50,    50,    22,   269,   260,    13,    14,
     273,   242,    18,   252,    18,   183,   184,   185,   186,   187,
      22,    33,     1,   296,    33,   193,   194,   195,   196,   197,
     198,    36,    37,   286,    13,   288,     4,     5,     6,     7,
       8,     9,    34,    50,   294,    50,    51,    52,    53,    54,
      55,    56,    34,    14,     1,     9,    39,    36,    37,    35,
       4,     5,     6,     7,     8,     9,    13,    68,   257,   182,
      -1,    50,    51,    52,    53,    54,    55,    56,   116,     1,
      24,    25,    -1,    27,    -1,    -1,    30,    31,    32,    36,
      37,    13,    -1,    -1,    -1,    -1,   264,   265,   266,   267,
      47,     1,    -1,    50,     1,    52,    -1,    54,    -1,    -1,
      54,    -1,    -1,    13,    36,    37,    13,   285,    92,    93,
      94,    95,    96,    97,    98,    99,   100,    -1,    50,     1,
      52,    -1,    54,    -1,    -1,    -1,    36,    37,    -1,    36,
      37,    13,    14,    -1,    -1,    17,     1,    -1,    -1,    -1,
      50,    -1,    52,    50,    54,    52,    -1,    54,    13,    14,
      15,    16,    17,    -1,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    48,    49,    -1,    -1,
       1,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    13,    14,    15,    16,    17,     4,     5,     6,
       7,     8,     9,    41,    42,    43,    44,    45,    46,    36,
      37,    38,    39,    40,    -1,    36,    37,    38,    39,    40
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    67,     1,    16,    62,     0,    10,    68,    69,
      54,     5,     6,     7,     8,     9,    21,    66,    72,    73,
      74,    68,     1,    11,    58,    54,    54,    20,    78,    72,
      72,     4,    66,    70,    71,   109,     1,    13,    60,    60,
      60,    23,    66,    17,    54,    64,     1,    12,    59,    71,
       4,    66,    75,    76,    77,    75,     1,    14,    61,    54,
      62,    50,    66,    54,    64,    61,     1,    15,    63,    61,
      58,    79,    62,     1,    18,    65,    54,    64,    50,    79,
      76,    58,    81,    24,    25,    27,    30,    31,    32,    54,
      80,    83,    84,    88,    93,    94,   103,   104,   105,   109,
     110,    54,    50,    65,    80,    60,    60,     1,    54,    60,
     113,   113,    60,    60,    17,    22,    60,    59,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    62,    65,    54,
       1,    26,    82,    54,   108,     1,    36,    37,    50,    51,
      52,    53,    54,    55,    56,    60,   103,   106,   107,   111,
     115,   116,     1,    47,    54,    60,   113,   114,   115,    85,
      79,     1,    54,   100,   111,    50,   111,   106,    54,   111,
      59,    64,    61,    50,    52,    50,    52,    17,    64,    54,
     115,    61,    63,    36,    37,    38,    39,    40,   113,   115,
      48,    49,    61,    41,    42,    43,    44,    45,    46,    79,
      17,    22,    63,    61,    18,    62,    61,    62,    50,    62,
      50,    50,    61,    62,   107,   115,   115,   115,   115,   115,
      61,   113,   113,   115,   115,   115,   115,   115,   115,    86,
      50,   111,    95,    58,    22,    62,    65,    18,    65,    61,
      61,    28,    29,    87,    18,     1,    54,   102,    35,    50,
      51,    53,    54,    55,    56,    89,    90,    91,    92,   112,
     111,    79,   113,    22,    41,    42,    43,    44,    96,    33,
      64,    59,    90,    33,    62,    79,   111,   115,   115,   115,
     115,    63,    80,    50,    80,    97,    34,    65,    34,     1,
     101,   115,    62,    62,    98,    61,    99,    79
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    57,    58,    58,    59,    59,    60,    60,    61,    61,
      62,    62,    63,    63,    64,    65,    65,    66,    66,    66,
      66,    66,    67,    68,    68,    69,    70,    70,    71,    71,
      72,    72,    72,    73,    74,    75,    75,    76,    76,    77,
      77,    77,    77,    78,    78,    79,    80,    80,    81,    82,
      82,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    85,
      86,    84,    87,    87,    87,    88,    89,    89,    90,    90,
      90,    91,    92,    93,    95,    96,    97,    98,    99,    94,
     100,   100,   100,   101,   101,   102,   102,   102,   102,   102,
     103,   104,   105,   106,   106,   107,   107,   108,   108,   109,
     109,   109,   110,   110,   111,   111,   111,   111,   111,   111,
     112,   112,   112,   112,   112,   112,   112,   113,   113,   113,
     113,   113,   113,   114,   114,   114,   114,   114,   114,   115,
     115,   115,   115,   115,   115,   115,   115,   116,   116,   116,
     116,   116,   116,   116,   116,   116
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     6,     0,     2,     5,     1,     0,     1,     2,
       0,     2,     2,     6,     6,     0,     1,     1,     3,     2,
       3,     5,     6,     0,     4,     3,     0,     1,     4,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     0,
       0,     6,     0,     2,     3,     7,     0,     1,     1,     2,
       1,     5,     5,     3,     0,     0,     0,     0,     0,    14,
       1,     3,     6,     1,     1,     1,     3,     3,     3,     3,
       5,     5,     5,     0,     1,     1,     3,     1,     4,     3,
       6,     4,     4,     7,     1,     1,     1,     1,     1,     4,
       1,     1,     1,     1,     4,     1,     1,     1,     3,     4,
       5,     5,     1,     3,     3,     3,     3,     3,     3,     1,
       3,     1,     3,     3,     3,     3,     3,     1,     1,     1,
       4,     1,     2,     2,     2,     2
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
  case 2: /* debut_acolade: error  */
#line 125 "syntaxe.y"
                       { printf("Acolade debut manquante\n"); err++; return -1;   }
#line 1492 "syntaxe.tab.c"
    break;

  case 4: /* fin_acolade: error  */
#line 128 "syntaxe.y"
                     { printf("Acolade Fin manquante\n");  err++; return -1;  }
#line 1498 "syntaxe.tab.c"
    break;

  case 6: /* debut_paren: error  */
#line 132 "syntaxe.y"
                     { printf("Parenthese Ouvrante manquante\n"); err++; return -1; }
#line 1504 "syntaxe.tab.c"
    break;

  case 8: /* fin_paren: error  */
#line 135 "syntaxe.y"
                    { printf("Parenthese Fermante manquante\n");  err++; return -1; }
#line 1510 "syntaxe.tab.c"
    break;

  case 10: /* fin_inst: error  */
#line 139 "syntaxe.y"
                  { printf("Symbole Fin d'intruction manquant\n");  err++; return -1; }
#line 1516 "syntaxe.tab.c"
    break;

  case 12: /* separ: error  */
#line 142 "syntaxe.y"
                { printf("Symbole de separateur des parametres manaquant\n");  err++; return -1; }
#line 1522 "syntaxe.tab.c"
    break;

  case 15: /* fin_tab: error  */
#line 149 "syntaxe.y"
                    { printf("pas de ]\n"); err++; return -1;}
#line 1528 "syntaxe.tab.c"
    break;

  case 17: /* type: TYPE_INT  */
#line 154 "syntaxe.y"
                     {(yyval.str)=(yyvsp[0].str);}
#line 1534 "syntaxe.tab.c"
    break;

  case 18: /* type: TYPE_FLT  */
#line 155 "syntaxe.y"
                       {(yyval.str)=(yyvsp[0].str);}
#line 1540 "syntaxe.tab.c"
    break;

  case 19: /* type: TYPE_BLN  */
#line 156 "syntaxe.y"
                       {(yyval.str)=(yyvsp[0].str);}
#line 1546 "syntaxe.tab.c"
    break;

  case 20: /* type: TYPE_CAR  */
#line 157 "syntaxe.y"
                       {(yyval.str)=(yyvsp[0].str);}
#line 1552 "syntaxe.tab.c"
    break;

  case 21: /* type: TYPE_STR  */
#line 158 "syntaxe.y"
                       {(yyval.str)=(yyvsp[0].str);}
#line 1558 "syntaxe.tab.c"
    break;

  case 22: /* programme: NOMPROGR fin_inst def_structs Fn_Pro prog_principale FIN_PROG  */
#line 163 "syntaxe.y"
                            {  printf("Le programme est syntaxiquement correct\n");  YYACCEPT; }
#line 1564 "syntaxe.tab.c"
    break;

  case 25: /* def_struct: STRUCT ID debut_acolade struct_corp fin_acolade  */
#line 173 "syntaxe.y"
            { 
                NodeSymbole *x;
                x=search(ts, (yyvsp[-3].str));
                if(x == NULL)
                {      
                        x=  insertSymbole(ts,(yyvsp[-3].str));
                        strcpy(t,"fct_");
                        setAttribut(x, "Type", "struct");
                        printf("Definition de structure est correcte\n");
                        Afficher(ts);
                }
                else  
                {
                    printf("erreur Semantique: double declaration de  %s,  a la ligne %d, le caractere %d\n", (yyvsp[-3].str), lignenum, nb_cara);
                } 
            }
#line 1585 "syntaxe.tab.c"
    break;

  case 27: /* struct_corp: %empty  */
#line 192 "syntaxe.y"
                            { printf("Warning, corp vide lors definition structure\n");  }
#line 1591 "syntaxe.tab.c"
    break;

  case 33: /* Fn: type ID debut_paren Params fin_paren corp_fnc  */
#line 206 "syntaxe.y"
                                                             {
            NodeSymbole *x;
            x=search(ts, (yyvsp[-4].str));
            
            if(x == NULL)
            {      
                    x = insertSymbole(ts,(yyvsp[-4].str));
                    setAttribut(x, "Etat", "FCT");
                    setAttribut(x, "Type", (yyvsp[-5].str));
                    printf("Definition de fonction est correcte\n"); 
                Afficher(ts);
            }


            else  
                { 
                        printf("erreur Semantique: double declaration de la fonction %s,  a la ligne %d, le caractere %d\n", (yyvsp[-4].str), lignenum, nb_cara); }
                }
#line 1614 "syntaxe.tab.c"
    break;

  case 34: /* PR: PROCEDURE ID debut_paren Params fin_paren corp  */
#line 228 "syntaxe.y"
                                                             { 

        NodeSymbole *x;
        x=search(ts, (yyvsp[-4].str));
        
        if(x == NULL)
		{      
            x = insertSymbole(ts,(yyvsp[-4].str));
            setAttribut(x, "Etat", "PROC");
            printf("Definition de procedure est correcte\n");
             Afficher(ts);
		}

        else  printf("erreur Semantique: double declaration de la procedure %s,  a la ligne %d, le caractere %d\n", (yyvsp[-4].str), lignenum, nb_cara); 
                }
#line 1634 "syntaxe.tab.c"
    break;

  case 39: /* decalaration_para: type ID  */
#line 256 "syntaxe.y"
                                     { }
#line 1640 "syntaxe.tab.c"
    break;

  case 40: /* decalaration_para: TYPE_CONS type ID  */
#line 257 "syntaxe.y"
                                        {}
#line 1646 "syntaxe.tab.c"
    break;

  case 41: /* decalaration_para: type debut_tab ENTIER fin_tab ID  */
#line 258 "syntaxe.y"
                                                        {}
#line 1652 "syntaxe.tab.c"
    break;

  case 42: /* decalaration_para: TYPE_CONS type debut_tab ENTIER fin_tab ID  */
#line 259 "syntaxe.y"
                                                                   { }
#line 1658 "syntaxe.tab.c"
    break;

  case 44: /* prog_principale: MAIN debut_paren fin_paren corp  */
#line 264 "syntaxe.y"
                                                        { printf("Definition de Main(programme principale) est correcte\n");  }
#line 1664 "syntaxe.tab.c"
    break;

  case 45: /* corp: debut_acolade corp_main fin_acolade  */
#line 267 "syntaxe.y"
                                                           { printf("Definition de corp est correcte\n");  }
#line 1670 "syntaxe.tab.c"
    break;

  case 49: /* retour: error  */
#line 278 "syntaxe.y"
                             { printf("Return attendue\n"); return -1; }
#line 1676 "syntaxe.tab.c"
    break;

  case 69: /* $@1: %empty  */
#line 307 "syntaxe.y"
                {               QC++;
                        fprintf(fp, "***Les routines semantiques pour l'instruction Si-Sinon***\n");
                        fprintf(fp, "Si - R1: Verifie_Condition\n");
                        fprintf(fp, "QUAD (Qc) := (BZ,sauv-debut-else , <condition>, ) \n"); // on stock qudreplet
                                char* tab[4] = {"BZ", "", "<condition>",""}; 
                                insertQ( tab );
                        fprintf(fp, "sauv-debut-else := Qc \n"); // besion de debut else
                                stocke( "sauv-debut-else", QC);
                                fprintf(fp, "Qc := Qc+1 \n");
                                QC++;
                }
#line 1692 "syntaxe.tab.c"
    break;

  case 70: /* $@2: %empty  */
#line 320 "syntaxe.y"
             {
                        fprintf(fp, "Si - R2: bloc d'intruction de IF\n");
                        fprintf(fp, "QUAD (Qc) := (BR,sauv-fin-si , , ) \n"); //on stock 
                                char* tab2[4] = {"BR", "", "",""}; 
                                insertQ( tab2 );
                        fprintf(fp, "sauv-fin-si := Qc \n"); // besion de fin-si
                                stocke( "sauv-fin-si", QC);
                        fprintf(fp, "Qc := Qc + 1 \n");
                                QC++;
                                fprintf(fp, "QUAD (sauv-debut-else, 2) := Qc (position courant debut else) \n"); // met à jour poieur vers debut else
                                
                                sprintf(c, "%d", QC);
                                char inter[100] = "sauv-debut-else:"; 
                                strcat( inter,strdup(c) );
                                Quadreplets[restaure("sauv-debut-else")][1] = strdup(inter);
                }
#line 1713 "syntaxe.tab.c"
    break;

  case 72: /* suite: %empty  */
#line 338 "syntaxe.y"
                { 
                            // recuper adress fin else pour la mettre en cas de if
                printf("Definition de Conditionnle IF est correcte\n");
                        fprintf(fp,  "FSI - R3\n");
                        fprintf(fp,  "QUAD (sauv-fin-si, 2) := Qc \n"); //on met a jour pointeur fin

                        sprintf(c, "%d", QC);
                        char inter2[100] = "sauv-fin-si:"; 
                        strcat( inter2,strdup(c) );
                        Quadreplets[restaure("sauv-fin-si")][1] = strdup(inter2);
                        fprintf(fp,  "******\n\n");
                        QC++;
                }
#line 1731 "syntaxe.tab.c"
    break;

  case 73: /* suite: ELSE corp  */
#line 351 "syntaxe.y"
                           { 
                        
                        QC++;
                        fprintf(fp, "Definition de ELSE est correcte\n");
                        
                        fprintf(fp,  "FSI - R3\n");
                        fprintf(fp,  "QUAD (sauv-fin-si, 2) := Qc \n"); //on met a jour pointeur fin
                        
                        sprintf(c, "%d", QC);
                        char inter3[100] = "sauv-fin-si:"; 
                        strcat( inter3,strdup(c) );
                        Quadreplets[restaure("sauv-fin-si")][1] = strdup(inter3);
                        fprintf(fp,  "******\n\n"); 
                        QC++; }
#line 1750 "syntaxe.tab.c"
    break;

  case 74: /* suite: ELSEIF condition corp  */
#line 365 "syntaxe.y"
                                         { printf("Definition de ELSEIF est correcte\n");  }
#line 1756 "syntaxe.tab.c"
    break;

  case 75: /* case_struct: CASE debut_paren valeur fin_paren debut_acolade corp_case fin_acolade  */
#line 369 "syntaxe.y"
                                                                                            { printf("Definition de Switch est correcte\n");  }
#line 1762 "syntaxe.tab.c"
    break;

  case 83: /* while_struct: REPEAT condition corp  */
#line 385 "syntaxe.y"
                                             { printf("Definition de boucle repeat est correcte\n");  }
#line 1768 "syntaxe.tab.c"
    break;

  case 84: /* $@3: %empty  */
#line 390 "syntaxe.y"
        {              
                        fprintf(fp, "Debut condition FOR - R1\n");
                        fprintf(fp, "debut-cnd-for := Qc \n"); //stocke debut-cnd
                        //stocke("debut-cnd-for", QC);
                        fprintf(fp, "******\n\n");
                        //QC++;
        }
#line 1780 "syntaxe.tab.c"
    break;

  case 85: /* $@4: %empty  */
#line 401 "syntaxe.y"
        {
                        fprintf(fp, "***Les routines semantiques pour l'instruction For***\n");
                        fprintf(fp, "For - R1: Verifie_Condition\n");
                        fprintf(fp, "QUAD (Qc) := (BZ, fin-for ,<condition> , ) \n"); // on stocke le quadreplet:
                               /* char* tab3[4] = {"BZ", "fin-for", "<condition>",""}; 
                                insertQ( tab3 );*/
                        fprintf(fp, "sauv-fin-for := Qc \n"); // stock position pour le metrre à jour
                                //stocke("sauv-fin-for", QC);

                        fprintf(fp, "Qc := Qc+1 \n"); QC++;
                        fprintf(fp, "QUAD (Qc) :=(BR, debut-block-for, , ) \n"); // on branche vers block, on stock quarplet
                                /*char* tab4[4] = {"BR", "debut-block-for", "",""}; 
                                insertQ( tab4 ); */
                        fprintf(fp, "sauv-debut-blok-for := Qc \n");
                                //stocke("sauv-debut-blok-for", QC);
                        fprintf(fp, "Qc := Qc+1 \n"); QC++;
                        }
#line 1802 "syntaxe.tab.c"
    break;

  case 86: /* $@5: %empty  */
#line 419 "syntaxe.y"
                 {
                        fprintf(fp,"FOR-R2: Stocker debut d'incrementation\n");
                        fprintf(fp,"debut-inc := Qc \n"); // on stock debut_inc
                        //stocke("debut-inc", QC);
                }
#line 1812 "syntaxe.tab.c"
    break;

  case 87: /* $@6: %empty  */
#line 425 "syntaxe.y"
            {               //QC++;
                        fprintf(fp, "Routine branchement vers condition\n");
                        fprintf(fp, "QUAD (Qc) := (BR, debut-cnd-for , , )\n"); // on stock quadreplet

                                /*int i1 = restaure("debut-cnd-for");
                                sprintf(c, "%d", i1);

                                char* tab5[4] = {"BR", c, "",""}; 
                                insertQ( tab5 ); */
                        fprintf(fp, "Qc := Qc+1 \n"); QC++;
        }
#line 1828 "syntaxe.tab.c"
    break;

  case 88: /* $@7: %empty  */
#line 438 "syntaxe.y"
        {      
                        fprintf(fp,"QUAD(sauv-debut-blok-for, 2) := Qc\n");  // on met à jour ce qui il pointe vers debut block
                                /*sprintf(c, "%d", QC);
                                char inter4[100] = "sauv-debut-blok-for:"; 
                                strcat( inter4,strdup(c) );
                                Quadreplets[restaure("sauv-debut-blok-for")][1] = strdup(inter4);
                                QC++; */
                        }
#line 1841 "syntaxe.tab.c"
    break;

  case 89: /* for_struct: ITERATOR debut_paren init_index separ $@3 Condition_For $@4 separ $@5 incrementation $@6 fin_paren $@7 corp  */
#line 447 "syntaxe.y"
        { printf("Definition de iterator est correcte\n"); 

                        fprintf(fp, "QUAD (Qc) := (BR, debut-inc , , ) \n"); // on retoure et stock quadreplet
                                /*int i2 = restaure("debut-inc");
                                sprintf(c, "%d", i2);

                                char* tab6[4] = {"BR", c, "",""}; 
                                insertQ( tab6 );*/
                        fprintf(fp, "Qc := Qc+1 \n"); QC++;
                        fprintf(fp, "QUAD (sauv-fin-for, 2) := Qc \n"); // on met à jour ce qui pointe vers la fin

                                /*char inter5[100] = "sauv-fin-for:"; 
                                strcat( inter5,strdup(c) );
                                Quadreplets[restaure("sauv-fin-for")][1] = strdup(inter5); */
                        }
#line 1861 "syntaxe.tab.c"
    break;

  case 90: /* init_index: error  */
#line 464 "syntaxe.y"
                             { printf("Err, d'intilisation de boucle\n"); err++; return -1; }
#line 1867 "syntaxe.tab.c"
    break;

  case 91: /* init_index: ID AFFECTATION valeur  */
#line 466 "syntaxe.y"
                {
                    NodeSymbole *x;
                    x=search(ts, (yyvsp[-2].str));
                    
                    if(x == NULL)
                    {    
                        printf("erreur Semantique: %s non declare(il doit etre decalare),  a la ligne %d, le caractere %d\n", (yyvsp[-2].str), lignenum, nb_cara);
                    }
                    else{  
                        char *etat= getAttribut(x,"Etat");

                            if( strcmp(etat, "CONS") == 0 )  
                            {
                                printf("erreur Semantique: %s est une constante(tu peut changer sa valeur),  a la ligne %d, le caractere %d\n", (yyvsp[-2].str), lignenum, nb_cara);
                            }
                            if( strcmp(etat, "FCT") == 0 )  
                            {
                                printf("erreur Semantique: %s ne doit pas etre une fonction,  a la ligne %d, le caractere %d\n", (yyvsp[-2].str), lignenum, nb_cara);
                            }
                            if( strcmp(etat, "PROC") == 0 )  
                            {
                                printf("erreur Semantique: %s ne doit pas etre une procedure,  a la ligne %d, le caractere %d\n", (yyvsp[-2].str), lignenum, nb_cara);
                            } 
                            if( strcmp(etat, "VAR") == 0 )  
                            {
                                    char *type= getAttribut(x,"Type");
                                            if(strcmp(type,sonType)!=0)
                                            {
                                                printf("erreur Semantique: type de %s est incompatible : a la ligne %d, le caractere %d\n", (yyvsp[-2].str), lignenum, nb_cara);
                                            }
                                            else
                                            {
                                                strcpy(ID_for, (yyvsp[-2].str)); // on la recupere pour la verfication apres 
                                            }
                            } 
                        
                    }
                }
#line 1910 "syntaxe.tab.c"
    break;

  case 93: /* incrementation: error  */
#line 508 "syntaxe.y"
                                   { printf("Err, manque d'incrementation dans boucle iterator\n");  err++; return -1; }
#line 1916 "syntaxe.tab.c"
    break;

  case 95: /* Condition_For: error  */
#line 512 "syntaxe.y"
                                  { printf("Err, manque de condition de boucle iterator\n");  err++; return -1; }
#line 1922 "syntaxe.tab.c"
    break;

  case 96: /* Condition_For: ID SUPP expression  */
#line 514 "syntaxe.y"
                                {
                                    if(strcmp((yyvsp[-2].str), ID_for) != 0 ){ printf("erreur Semantique: %s doit etre le meme que tu initaliser dans cette boucle,  a la ligne %d, le caractere %d\n", (yyvsp[-2].str), lignenum, nb_cara);  }
                                }
#line 1930 "syntaxe.tab.c"
    break;

  case 97: /* Condition_For: ID SUPP_EGAL expression  */
#line 518 "syntaxe.y"
                                {
                                    if(strcmp((yyvsp[-2].str), ID_for) != 0 ){ printf("erreur Semantique: %s doit etre le meme que tu initaliser dans cette boucle,  a la ligne %d, le caractere %d\n", (yyvsp[-2].str), lignenum, nb_cara);  }
                                }
#line 1938 "syntaxe.tab.c"
    break;

  case 98: /* Condition_For: ID INF expression  */
#line 523 "syntaxe.y"
                                {
                                    if(strcmp((yyvsp[-2].str), ID_for) != 0 ){ printf("erreur Semantique: %s doit etre le meme que tu initaliser dans cette boucle,  a la ligne %d, le caractere %d\n", (yyvsp[-2].str), lignenum, nb_cara);  }
                                }
#line 1946 "syntaxe.tab.c"
    break;

  case 99: /* Condition_For: ID INF_EGAL expression  */
#line 528 "syntaxe.y"
                                {
                                    if(strcmp((yyvsp[-2].str), ID_for) != 0 ){ printf("erreur Semantique: %s doit etre le meme que tu initaliser dans cette boucle,  a la ligne %d, le caractere %d\n", (yyvsp[-2].str), lignenum, nb_cara);  }
                                }
#line 1954 "syntaxe.tab.c"
    break;

  case 100: /* Appel_Methode: ID debut_paren valeur_param fin_paren fin_inst  */
#line 536 "syntaxe.y"
                                                                      { 
                
        NodeSymbole *x;
        x=search(ts, (yyvsp[-4].str));
        if(x == NULL) 
        {
            printf("erreur Semantique: %s methode non declare, a la ligne %d, a la colonne %d\n", (yyvsp[-4].str),  lignenum, nb_cara); 
        }
        else
        {
            char *etat= getAttribut(x,"Etat");
                        if( (strcmp(etat, "FCT") != 0 ) && (strcmp(etat, "PROC") != 0 ) )
                        {
                            printf("erreur Semantique: %s doit etre nom d'une methode (fonction ou procedure), a la ligne %d, a la colonne %d\n", (yyvsp[-4].str),  lignenum, nb_cara); 
                        }
                        else
                        {
                            printf("Appel methode effectuer\n");  
                        }
        }
        }
#line 1980 "syntaxe.tab.c"
    break;

  case 101: /* write_Proc: WRITE debut_paren valeur_param fin_paren fin_inst  */
#line 560 "syntaxe.y"
                                                                       { printf("Appel Write effectuer\n");  }
#line 1986 "syntaxe.tab.c"
    break;

  case 102: /* read_Proc: READ debut_paren parametre_read fin_paren fin_inst  */
#line 563 "syntaxe.y"
                                                                       { printf("Appel read effectuer\n");  }
#line 1992 "syntaxe.tab.c"
    break;

  case 107: /* parametre_read: ID  */
#line 574 "syntaxe.y"
        {
            NodeSymbole *x;
            x=search(ts, (yyvsp[0].str));
            if(x == NULL) {printf("erreur Semantique: %s non declare, a la ligne %d, a la colonne %d\n", (yyvsp[0].str),  lignenum, nb_cara);} 
            else
            {
                char *etat= getAttribut(x,"Etat");
                if(strcmp(etat, "VAR") == 0 )
                {
                    char *type= getAttribut(x,"Type");
                    if( strcmp(type, "t_str") != 0 )
                    { 
                        printf("erreur: %s ce variable qui va stocker valeur de read doit etre de type chaine de caractere, a la ligne %d, a la colonne %d\n", (yyvsp[0].str),  lignenum, nb_cara);
                    }
                }
                else
                {
                        printf("erreur semantique : %s ce variable doit etre des case memoires pour stocker valeur lue, a la ligne %d, a la colonne %d\n", (yyvsp[0].str),  lignenum, nb_cara);
                }
            
            }

        }
#line 2020 "syntaxe.tab.c"
    break;

  case 108: /* parametre_read: ID debut_tab ENTIER fin_tab  */
#line 599 "syntaxe.y"
        {
            NodeSymbole *x;
            x=search(ts, (yyvsp[-3].str));
            if(x == NULL) {printf("erreur Semantique: %s non declare, a la ligne %d, a la colonne %d\n", (yyvsp[-3].str),  lignenum, nb_cara);} 
            else
            {
                char *etat= getAttribut(x,"Etat");
                if(strcmp(etat, "TAB") == 0 )
                {
                    char *type= getAttribut(x,"Type");
                    if( strcmp(type, "t_str") != 0 )
                    { 
                        printf("erreur: %s ce variable qui va stocker valeur de read doit etre de type chaine de caractere, a la ligne %d, a la colonne %d\n", (yyvsp[-3].str),  lignenum, nb_cara);
                    }
                }
                else
                {
                        printf("erreur semantique : %s ce variable doit etre des case memoires pour stocker valeur lue, a la ligne %d, a la colonne %d\n", (yyvsp[-3].str),  lignenum, nb_cara);
                }
            
            }

        }
#line 2048 "syntaxe.tab.c"
    break;

  case 109: /* decalaration: type ID fin_inst  */
#line 627 "syntaxe.y"
{ 
          NodeSymbole *x;
           x=search(ts, (yyvsp[-1].str));
        
           if(x == NULL)
                {      
                    x=  insertSymbole(ts,(yyvsp[-1].str));
                    setAttribut(x, "Type", strdup((yyvsp[-2].str)) );
                    setAttribut(x, "Etat", "VAR");
                    printf("Declaration de variable est juste\n"); 
                    Afficher(ts);
                }
	        else  
            { 
                printf("erreur Semantique: double declaration d'un id  %s,  a la ligne %d, le caractere %d\n", (yyvsp[-1].str), lignenum, nb_cara);
            }
    }
#line 2070 "syntaxe.tab.c"
    break;

  case 110: /* decalaration: type debut_tab ENTIER fin_tab ID fin_inst  */
#line 646 "syntaxe.y"
                { 
                 NodeSymbole *x;
                    x=search(ts, (yyvsp[-1].str));
                    
                    if(x == NULL)
                    {      
                        x =  insertSymbole(ts,(yyvsp[-1].str));
                            setAttribut(x, "Etat", "TAB");
                            setAttribut(x, "Type", (yyvsp[-5].str));
                        Afficher(ts); 

                            char size[50];
                            sprintf(size, "%d", (yyvsp[-3].entier));
                            setAttribut(x, "Size",size );
                            printf("Declaration de tableau est juste\n"); 
                            Afficher(ts); 
                    }

                    else  
                    { printf("erreur Semantique: double declaration d'un tableau  %s,  a la ligne %d, le caractere %d\n", (yyvsp[-1].str), lignenum, nb_cara);}
                
                }
#line 2097 "syntaxe.tab.c"
    break;

  case 111: /* decalaration: TYPE_CONS type ID fin_inst  */
#line 670 "syntaxe.y"
                { 
                    NodeSymbole *x;
                    x=search(ts, (yyvsp[-1].str));
                    if(x == NULL)
                    {      
                        x =  insertSymbole(ts,(yyvsp[-1].str));
                            strcpy(t,"TAB");
                            setAttribut(x, "Type", (yyvsp[-2].str));
                            setAttribut(x, "Etat", "CONS");
                            printf("Declaration de constante est juste\n");  
                                    Afficher(ts);

                    }

                    else  
                    { printf("erreur Semantique: double declaration d'un tableau  %s,  a la ligne %d, le caractere %d\n", (yyvsp[-1].str), lignenum, nb_cara);}
                
                }
#line 2120 "syntaxe.tab.c"
    break;

  case 112: /* affec: ID AFFECTATION valeur fin_inst  */
#line 691 "syntaxe.y"
{ 
                    NodeSymbole *x;
                    x=search(ts, (yyvsp[-3].str));
                    
                    if(x == NULL)
                    {    
                        printf("erreur Semantique: %s non declare(il doit etre decalare),  a la ligne %d, le caractere %d\n", (yyvsp[-3].str), lignenum, nb_cara);
                    }
                    else{  
                        char *etat= getAttribut(x,"Etat");

                        if( strcmp(etat, "CONS") == 0 )  
                            {
                                printf("erreur Semantique: %s est une constante(tu peut changer sa valeur),  a la ligne %d, le caractere %d\n", (yyvsp[-3].str), lignenum, nb_cara);
                            }

                        if( strcmp(etat, "FCT") == 0 )  
                            {
                             printf("erreur Semantique: %s est declare comme une fonction tu peut l'affecter une valeur,  a la ligne %d, le caractere %d\n", (yyvsp[-3].str), lignenum, nb_cara);
                            } 

                        if( strcmp(etat, "PROC") == 0 )  
                            {
                            printf("erreur Semantique: %s  est declare comme une procedure tu peut l'affecter une valeu,  a la ligne %d, le caractere %d\n", (yyvsp[-3].str), lignenum, nb_cara);
                            }

                        if( strcmp(etat, "TAB") == 0 )  
                            {
                             printf("erreur Semantique: %s  est un nom de tableau faut sepecfie indice à acceder tu peut pas affcter valeur au tableau complet,  a la ligne %d, le caractere %d\n", (yyvsp[-3].str), lignenum, nb_cara);
                            } 
                        if( strcmp(etat, "VAR") == 0 )  
                            {
                                    char *type= getAttribut(x,"Type");
                                            if(strcmp(type,sonType)!=0)
                                            {
                                                printf("erreur Semantique: type de %s est incompatible : a la ligne %d, le caractere %d\n", (yyvsp[-3].str), lignenum, nb_cara);
                                            }
                                            else
                                            {
                                                printf("Affecation d'un variable  est juste\n"); 
                                                        Afficher(ts);

                                            }
                            } 
                }
}
#line 2171 "syntaxe.tab.c"
    break;

  case 113: /* affec: ID DEB_TABLEAU ENTIER FIN_TABLEAU AFFECTATION valeur fin_inst  */
#line 739 "syntaxe.y"
            { 
                    NodeSymbole *x;
                    x=search(ts, (yyvsp[-6].str));
                    
                    if(x == NULL)
                    {    
                        printf("erreur Semantique: %s non declare(il doit etre decalare),  a la ligne %d, le caractere %d\n", (yyvsp[-6].str), lignenum, nb_cara);
                    }
                    else{  
                        char *etat= getAttribut(x,"Etat");
                        if( strcmp(etat, "CONS") == 0 )  
                            {
                            printf("erreur Semantique: %s est une constante(tu peut changer sa valeur),  a la ligne %d, le caractere %d\n", (yyvsp[-6].str), lignenum, nb_cara);
                            } 
                        if( strcmp(etat, "FCT") == 0 )  
                            {
                             printf("erreur Semantique: %s est declare comme une fonction tu peut l'affecter une valeur,  a la ligne %d, le caractere %d\n", (yyvsp[-6].str), lignenum, nb_cara);
                            } 
                        if( strcmp(etat, "PROC") == 0 )  
                            {
                             printf("erreur Semantique: %s  est declare comme une procedure tu peut l'affecter une valeu,  a la ligne %d, le caractere %d\n", (yyvsp[-6].str), lignenum, nb_cara);
                            } 
                        if( strcmp(etat, "VAR") == 0 )  
                            {
                                printf("erreur Semantique: %s  est declare comme une procedure tu peut l'affecter une valeu,  a la ligne %d, le caractere %d\n", (yyvsp[-6].str), lignenum, nb_cara);
                            }
                        if( strcmp(etat, "TAB") == 0 )  
                            {
                                     char *type= getAttribut(x,"Type");
                                            if(strcmp(type,sonType)!=0)
                                            {
                                                printf("erreur Semantique: type de %s est incompatible : a la ligne %d, le caractere %d\n", (yyvsp[-6].str), lignenum, nb_cara);
                                            }
                                            else
                                            {
                                                //acess a size
                                                int taille;
                                                taille = atoi(getAttribut(x,"Size"));
                                                printf(" taile == %d et val 3 = %d", taille, (yyvsp[-4].entier));
                                                if( (0<= (yyvsp[-4].entier)) &&((yyvsp[-4].entier) < taille) )
                                                {printf("Affecation d'un tableau juste\n"); }
                                                else
                                                {
                                                    printf("erreur Semantique: t'essaye d'acces a indice hors taille de tableau %s,  a la ligne %d, le caractere %d\n", (yyvsp[-6].str), lignenum, nb_cara);
                                                }
                                            }
                            } 

                        
                             
                        
                    }
            }
#line 2229 "syntaxe.tab.c"
    break;

  case 114: /* valeur: CHAINE  */
#line 797 "syntaxe.y"
                     {      strcpy(sonType , "t_str");  }
#line 2235 "syntaxe.tab.c"
    break;

  case 115: /* valeur: CARACTERE  */
#line 798 "syntaxe.y"
                         { strcpy(sonType , "t_car"); }
#line 2241 "syntaxe.tab.c"
    break;

  case 116: /* valeur: BOOLEAN_FAUX  */
#line 799 "syntaxe.y"
                            {strcpy(sonType , "t_bln");}
#line 2247 "syntaxe.tab.c"
    break;

  case 117: /* valeur: BOOLEAN_VRAI  */
#line 800 "syntaxe.y"
                            {strcpy(sonType , "t_bln");}
#line 2253 "syntaxe.tab.c"
    break;

  case 127: /* condition: error  */
#line 820 "syntaxe.y"
                    { printf("Err, condition est vide\n"); err++; return -1;}
#line 2259 "syntaxe.tab.c"
    break;

  case 139: /* expression: error  */
#line 837 "syntaxe.y"
                     { printf("Err, expression est vide\n"); err++; return -1; }
#line 2265 "syntaxe.tab.c"
    break;

  case 147: /* terme: ID  */
#line 848 "syntaxe.y"
                { 
                    NodeSymbole *x;
                    x=search(ts, (yyvsp[0].str));
                    
                    if(x == NULL)
                    {    
                        printf("erreur Semantique: le variable %s non declare(il doit etre decalare),  a la ligne %d, le caractere %d\n", (yyvsp[0].str), lignenum, nb_cara);
                    }
                    else{  
                        char *etat= getAttribut(x,"Etat");
                         if( strcmp(etat, "FCT") == 0 )  
                            {
                             printf("erreur Semantique: %s est une fonction donc vous devez effecter un appel,  a la ligne %d, le caractere %d\n", (yyvsp[0].str), lignenum, nb_cara);
                            }
                        if( strcmp(etat, "PROC") == 0 )  
                            {
                             printf("erreur Semantique: %s  est une procedure donc vous devez effecter un appel,  a la ligne %d, le caractere %d\n", (yyvsp[0].str), lignenum, nb_cara);
                            }
                        if( strcmp(etat, "TAB") == 0 )  
                            {
                             printf("erreur Semantique: %s  est un nom de tableau faut sepecfie indice à acceder,  a la ligne %d, le caractere %d\n", (yyvsp[0].str), lignenum, nb_cara);
                            }
                        
                        if( (strcmp(etat, "CONS") == 0 )|| (  strcmp(etat, "VAR") == 0  ) )
                        {
                              char *type= getAttribut(x,"Type");
                                            if( (strcmp(type,"t_int")!=0) && (strcmp(type,"t_flt")!=0) )
                                            {
                                                printf("erreur Semantique: type de %s est incompatible : a la ligne %d, le caractere %d\n", (yyvsp[0].str), lignenum, nb_cara);
                                            }
                                            else
                                            {
                                                printf("acces a un variable  est juste\n"); 
                                            }
                        }
                    }
                }
#line 2307 "syntaxe.tab.c"
    break;

  case 148: /* terme: ENTIER  */
#line 886 "syntaxe.y"
                 {strcpy(sonType , "t_int"); }
#line 2313 "syntaxe.tab.c"
    break;

  case 149: /* terme: FLOTTANT  */
#line 887 "syntaxe.y"
                   {strcpy(sonType , "t_flt");}
#line 2319 "syntaxe.tab.c"
    break;

  case 150: /* terme: ID debut_tab ENTIER fin_tab  */
#line 890 "syntaxe.y"
                {
                    { 
                    NodeSymbole *x;
                    x=search(ts, (yyvsp[-3].str));
                    
                    if(x == NULL)
                    {    
                        printf("erreur Semantique: le tableau %s non declare(il doit etre decalare),  a la ligne %d, le caractere %d\n", (yyvsp[-3].str), lignenum, nb_cara);
                    }
                    else{  
                        char *etat= getAttribut(x,"Etat");
                        if( strcmp(etat, "FCT") == 0 )  
                            {
                             printf("erreur Semantique: %s est declare comme une fonction tu peut l'affecter une valeur,  a la ligne %d, le caractere %d\n", (yyvsp[-3].str), lignenum, nb_cara);
                            }
                        if( strcmp(etat, "PROC") == 0 )  
                            {
                             printf("erreur Semantique: %s  est declare comme une procedure tu peut l'affecter une valeu,  a la ligne %d, le caractere %d\n", (yyvsp[-3].str), lignenum, nb_cara);
                            }
                        if( strcmp(etat, "VAR") == 0 )  
                            {
                            printf("erreur Semantique: %s  est declare comme une procedure tu peut l'affecter une valeu,  a la ligne %d, le caractere %d\n", (yyvsp[-3].str), lignenum, nb_cara);
                            }
                        if( strcmp(etat, "TAB") == 0 )  
                            {
                                    char *type= getAttribut(x,"Type");
                                            if(strcmp(type,sonType)!=0)
                                            {
                                                printf("erreur Semantique: type de %s est incompatible : a la ligne %d, le caractere %d\n", (yyvsp[-3].str), lignenum, nb_cara);
                                            }
                                            else
                                            {
                                                //acess a size
                                                int taille;
                                                taille = atoi(getAttribut(x,"Size"));
                                                if( 0<= (yyvsp[-1].entier) < taille )
                                                {printf("Affecation d'un tableau juste\n"); }
                                                else
                                                {
                                                    printf("erreur Semantique: t'essaye d'acces à indice hors taille de tableau %s,  a la ligne %d, le caractere %d\n", (yyvsp[-3].str), lignenum, nb_cara);
                                                }
                                            }
                            }

                        

                        
                    }
                }
            }
#line 2374 "syntaxe.tab.c"
    break;


#line 2378 "syntaxe.tab.c"

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

#line 950 "syntaxe.y"


//*************Partie 4 : Fonction C et programme de lancement et definition de quesmuqe fonctions

// implemntation des fonction utlises
int yywrap()
{
    return 1 ;
}
int yyerror(char* msg)

{ 
        printf("Dans ce Fichier, Dans line %d, character %d: syntax error,  ",lignenum, nb_cara); 

}

// fonction principale
int main()
{ 
        ts=allocateSymboleTable();
        fp = fopen("Output.txt", "w");
        fseek(fp, 0, SEEK_SET);
        yyparse(); 
        afficheQ();
        afficheV();
        Afficher(ts);

}


//-----------------implementaion des methodes
void initQ( )
{ int i, j;
    for ( i = 0; i < 50; i++) 
    {
       for ( j = 0; j < 4; j++) 
       {
           Quadreplets[i][j] = strdup("");
       }
    }
}

void afficheV()
{
 printf("\nLe vecteurs des sauvs: \n");
    for (int i = 0; i < indice_courant; i++) 
    {       printf("sauv[ %d ]: ", i);
            printf("%s = %d, ", tab_sauv[i].nom,tab_sauv[i].valeur );
        
    }   
}

int insertQ( char* tab[4])
{
    for (int i = 0; i < 4; i++) 
    { 
        Quadreplets[QC][i] =  strdup (tab[i]) ;
    }
    return (QC );
}

void stocke( char* nom, int valeur)
{
    struct sauve a = { strdup(nom), valeur };
    tab_sauv[indice_courant] = a;
    indice_courant++;
}

int restaure(  char* nom )
{  
    int i;
    for (i = 0; i <= indice_courant; i++) {
       if(strcmp(tab_sauv[i].nom, nom) == 0){  return (tab_sauv[i].valeur); }
    }
    return (-1);
} 

void afficheQ()
{
 printf("\nLes quadreplets: \n");
    for (int i = 0; i < QC; i++) 
    {       printf("Quadreplet[ %d ]: ", i);
            for (int j = 0; j < 4; j++) 
            {
                printf("%s, ", Quadreplets[i][j]);
            }
            printf("\n");
        
    }   
}




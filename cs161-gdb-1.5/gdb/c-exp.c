/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 40 "c-exp.y"


#include "defs.h"
#include "gdb_string.h"
#include <ctype.h>
#include "expression.h"
#include "value.h"
#include "parser-defs.h"
#include "language.h"
#include "c-lang.h"
#include "bfd.h" /* Required by objfiles.h.  */
#include "symfile.h" /* Required by objfiles.h.  */
#include "objfiles.h" /* For have_full_symbols and have_partial_symbols */
#include "charset.h"
#include "block.h"
#include "cp-support.h"

/* Remap normal yacc parser interface names (yyparse, yylex, yyerror, etc),
   as well as gratuitiously global symbol names, so we can have multiple
   yacc generated parsers in gdb.  Note that these are only the variables
   produced by yacc.  If other parser generators (bison, byacc, etc) produce
   additional global names that conflict at link time, then those parser
   generators need to be fixed instead of adding those names to this list. */

#define	yymaxdepth c_maxdepth
#define	yyparse	c_parse
#define	yylex	c_lex
#define	yyerror	c_error
#define	yylval	c_lval
#define	yychar	c_char
#define	yydebug	c_debug
#define	yypact	c_pact	
#define	yyr1	c_r1			
#define	yyr2	c_r2			
#define	yydef	c_def		
#define	yychk	c_chk		
#define	yypgo	c_pgo		
#define	yyact	c_act		
#define	yyexca	c_exca
#define yyerrflag c_errflag
#define yynerrs	c_nerrs
#define	yyps	c_ps
#define	yypv	c_pv
#define	yys	c_s
#define	yy_yys	c_yys
#define	yystate	c_state
#define	yytmp	c_tmp
#define	yyv	c_v
#define	yy_yyv	c_yyv
#define	yyval	c_val
#define	yylloc	c_lloc
#define yyreds	c_reds		/* With YYDEBUG defined */
#define yytoks	c_toks		/* With YYDEBUG defined */
#define yyname	c_name		/* With YYDEBUG defined */
#define yyrule	c_rule		/* With YYDEBUG defined */
#define yylhs	c_yylhs
#define yylen	c_yylen
#define yydefred c_yydefred
#define yydgoto	c_yydgoto
#define yysindex c_yysindex
#define yyrindex c_yyrindex
#define yygindex c_yygindex
#define yytable	 c_yytable
#define yycheck	 c_yycheck

#ifndef YYDEBUG
#define	YYDEBUG 1		/* Default to yydebug support */
#endif

#define YYFPRINTF parser_fprintf

int yyparse (void);

static int yylex (void);

void yyerror (char *);


#line 150 "c-exp.c.tmp"

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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INT = 258,                     /* INT  */
    FLOAT = 259,                   /* FLOAT  */
    STRING = 260,                  /* STRING  */
    NAME = 261,                    /* NAME  */
    TYPENAME = 262,                /* TYPENAME  */
    NAME_OR_INT = 263,             /* NAME_OR_INT  */
    STRUCT = 264,                  /* STRUCT  */
    CLASS = 265,                   /* CLASS  */
    UNION = 266,                   /* UNION  */
    ENUM = 267,                    /* ENUM  */
    SIZEOF = 268,                  /* SIZEOF  */
    UNSIGNED = 269,                /* UNSIGNED  */
    COLONCOLON = 270,              /* COLONCOLON  */
    TEMPLATE = 271,                /* TEMPLATE  */
    ERROR = 272,                   /* ERROR  */
    SIGNED_KEYWORD = 273,          /* SIGNED_KEYWORD  */
    LONG = 274,                    /* LONG  */
    SHORT = 275,                   /* SHORT  */
    INT_KEYWORD = 276,             /* INT_KEYWORD  */
    CONST_KEYWORD = 277,           /* CONST_KEYWORD  */
    VOLATILE_KEYWORD = 278,        /* VOLATILE_KEYWORD  */
    DOUBLE_KEYWORD = 279,          /* DOUBLE_KEYWORD  */
    VARIABLE = 280,                /* VARIABLE  */
    ASSIGN_MODIFY = 281,           /* ASSIGN_MODIFY  */
    TRUEKEYWORD = 282,             /* TRUEKEYWORD  */
    FALSEKEYWORD = 283,            /* FALSEKEYWORD  */
    ABOVE_COMMA = 284,             /* ABOVE_COMMA  */
    OROR = 285,                    /* OROR  */
    ANDAND = 286,                  /* ANDAND  */
    EQUAL = 287,                   /* EQUAL  */
    NOTEQUAL = 288,                /* NOTEQUAL  */
    LEQ = 289,                     /* LEQ  */
    GEQ = 290,                     /* GEQ  */
    LSH = 291,                     /* LSH  */
    RSH = 292,                     /* RSH  */
    UNARY = 293,                   /* UNARY  */
    INCREMENT = 294,               /* INCREMENT  */
    DECREMENT = 295,               /* DECREMENT  */
    ARROW = 296,                   /* ARROW  */
    BLOCKNAME = 297,               /* BLOCKNAME  */
    FILENAME = 298                 /* FILENAME  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INT 258
#define FLOAT 259
#define STRING 260
#define NAME 261
#define TYPENAME 262
#define NAME_OR_INT 263
#define STRUCT 264
#define CLASS 265
#define UNION 266
#define ENUM 267
#define SIZEOF 268
#define UNSIGNED 269
#define COLONCOLON 270
#define TEMPLATE 271
#define ERROR 272
#define SIGNED_KEYWORD 273
#define LONG 274
#define SHORT 275
#define INT_KEYWORD 276
#define CONST_KEYWORD 277
#define VOLATILE_KEYWORD 278
#define DOUBLE_KEYWORD 279
#define VARIABLE 280
#define ASSIGN_MODIFY 281
#define TRUEKEYWORD 282
#define FALSEKEYWORD 283
#define ABOVE_COMMA 284
#define OROR 285
#define ANDAND 286
#define EQUAL 287
#define NOTEQUAL 288
#define LEQ 289
#define GEQ 290
#define LSH 291
#define RSH 292
#define UNARY 293
#define INCREMENT 294
#define DECREMENT 295
#define ARROW 296
#define BLOCKNAME 297
#define FILENAME 298

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 124 "c-exp.y"

    LONGEST lval;
    struct {
      LONGEST val;
      struct type *type;
    } typed_val_int;
    struct {
      DOUBLEST dval;
      struct type *type;
    } typed_val_float;
    struct symbol *sym;
    struct type *tval;
    struct stoken sval;
    struct ttype tsym;
    struct symtoken ssym;
    int voidval;
    struct block *bval;
    enum exp_opcode opcode;
    struct internalvar *ivar;

    struct type **tvec;
    int *ivec;
  

#line 311 "c-exp.c.tmp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_FLOAT = 4,                      /* FLOAT  */
  YYSYMBOL_STRING = 5,                     /* STRING  */
  YYSYMBOL_NAME = 6,                       /* NAME  */
  YYSYMBOL_TYPENAME = 7,                   /* TYPENAME  */
  YYSYMBOL_NAME_OR_INT = 8,                /* NAME_OR_INT  */
  YYSYMBOL_STRUCT = 9,                     /* STRUCT  */
  YYSYMBOL_CLASS = 10,                     /* CLASS  */
  YYSYMBOL_UNION = 11,                     /* UNION  */
  YYSYMBOL_ENUM = 12,                      /* ENUM  */
  YYSYMBOL_SIZEOF = 13,                    /* SIZEOF  */
  YYSYMBOL_UNSIGNED = 14,                  /* UNSIGNED  */
  YYSYMBOL_COLONCOLON = 15,                /* COLONCOLON  */
  YYSYMBOL_TEMPLATE = 16,                  /* TEMPLATE  */
  YYSYMBOL_ERROR = 17,                     /* ERROR  */
  YYSYMBOL_SIGNED_KEYWORD = 18,            /* SIGNED_KEYWORD  */
  YYSYMBOL_LONG = 19,                      /* LONG  */
  YYSYMBOL_SHORT = 20,                     /* SHORT  */
  YYSYMBOL_INT_KEYWORD = 21,               /* INT_KEYWORD  */
  YYSYMBOL_CONST_KEYWORD = 22,             /* CONST_KEYWORD  */
  YYSYMBOL_VOLATILE_KEYWORD = 23,          /* VOLATILE_KEYWORD  */
  YYSYMBOL_DOUBLE_KEYWORD = 24,            /* DOUBLE_KEYWORD  */
  YYSYMBOL_VARIABLE = 25,                  /* VARIABLE  */
  YYSYMBOL_ASSIGN_MODIFY = 26,             /* ASSIGN_MODIFY  */
  YYSYMBOL_TRUEKEYWORD = 27,               /* TRUEKEYWORD  */
  YYSYMBOL_FALSEKEYWORD = 28,              /* FALSEKEYWORD  */
  YYSYMBOL_29_ = 29,                       /* ','  */
  YYSYMBOL_ABOVE_COMMA = 30,               /* ABOVE_COMMA  */
  YYSYMBOL_31_ = 31,                       /* '='  */
  YYSYMBOL_32_ = 32,                       /* '?'  */
  YYSYMBOL_OROR = 33,                      /* OROR  */
  YYSYMBOL_ANDAND = 34,                    /* ANDAND  */
  YYSYMBOL_35_ = 35,                       /* '|'  */
  YYSYMBOL_36_ = 36,                       /* '^'  */
  YYSYMBOL_37_ = 37,                       /* '&'  */
  YYSYMBOL_EQUAL = 38,                     /* EQUAL  */
  YYSYMBOL_NOTEQUAL = 39,                  /* NOTEQUAL  */
  YYSYMBOL_40_ = 40,                       /* '<'  */
  YYSYMBOL_41_ = 41,                       /* '>'  */
  YYSYMBOL_LEQ = 42,                       /* LEQ  */
  YYSYMBOL_GEQ = 43,                       /* GEQ  */
  YYSYMBOL_LSH = 44,                       /* LSH  */
  YYSYMBOL_RSH = 45,                       /* RSH  */
  YYSYMBOL_46_ = 46,                       /* '@'  */
  YYSYMBOL_47_ = 47,                       /* '+'  */
  YYSYMBOL_48_ = 48,                       /* '-'  */
  YYSYMBOL_49_ = 49,                       /* '*'  */
  YYSYMBOL_50_ = 50,                       /* '/'  */
  YYSYMBOL_51_ = 51,                       /* '%'  */
  YYSYMBOL_UNARY = 52,                     /* UNARY  */
  YYSYMBOL_INCREMENT = 53,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 54,                 /* DECREMENT  */
  YYSYMBOL_ARROW = 55,                     /* ARROW  */
  YYSYMBOL_56_ = 56,                       /* '.'  */
  YYSYMBOL_57_ = 57,                       /* '['  */
  YYSYMBOL_58_ = 58,                       /* '('  */
  YYSYMBOL_BLOCKNAME = 59,                 /* BLOCKNAME  */
  YYSYMBOL_FILENAME = 60,                  /* FILENAME  */
  YYSYMBOL_61_ = 61,                       /* '!'  */
  YYSYMBOL_62_ = 62,                       /* '~'  */
  YYSYMBOL_63_ = 63,                       /* ']'  */
  YYSYMBOL_64_ = 64,                       /* ')'  */
  YYSYMBOL_65_ = 65,                       /* '{'  */
  YYSYMBOL_66_ = 66,                       /* '}'  */
  YYSYMBOL_67_ = 67,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 68,                  /* $accept  */
  YYSYMBOL_start = 69,                     /* start  */
  YYSYMBOL_type_exp = 70,                  /* type_exp  */
  YYSYMBOL_exp1 = 71,                      /* exp1  */
  YYSYMBOL_exp = 72,                       /* exp  */
  YYSYMBOL_73_1 = 73,                      /* $@1  */
  YYSYMBOL_lcurly = 74,                    /* lcurly  */
  YYSYMBOL_arglist = 75,                   /* arglist  */
  YYSYMBOL_rcurly = 76,                    /* rcurly  */
  YYSYMBOL_block = 77,                     /* block  */
  YYSYMBOL_variable = 78,                  /* variable  */
  YYSYMBOL_qualified_name = 79,            /* qualified_name  */
  YYSYMBOL_space_identifier = 80,          /* space_identifier  */
  YYSYMBOL_const_or_volatile = 81,         /* const_or_volatile  */
  YYSYMBOL_cv_with_space_id = 82,          /* cv_with_space_id  */
  YYSYMBOL_const_or_volatile_or_space_identifier_noopt = 83, /* const_or_volatile_or_space_identifier_noopt  */
  YYSYMBOL_const_or_volatile_or_space_identifier = 84, /* const_or_volatile_or_space_identifier  */
  YYSYMBOL_abs_decl = 85,                  /* abs_decl  */
  YYSYMBOL_direct_abs_decl = 86,           /* direct_abs_decl  */
  YYSYMBOL_array_mod = 87,                 /* array_mod  */
  YYSYMBOL_func_mod = 88,                  /* func_mod  */
  YYSYMBOL_type = 89,                      /* type  */
  YYSYMBOL_typebase = 90,                  /* typebase  */
  YYSYMBOL_qualified_type = 91,            /* qualified_type  */
  YYSYMBOL_typename = 92,                  /* typename  */
  YYSYMBOL_nonempty_typelist = 93,         /* nonempty_typelist  */
  YYSYMBOL_ptype = 94,                     /* ptype  */
  YYSYMBOL_const_and_volatile = 95,        /* const_and_volatile  */
  YYSYMBOL_const_or_volatile_noopt = 96,   /* const_or_volatile_noopt  */
  YYSYMBOL_name = 97,                      /* name  */
  YYSYMBOL_name_not_typename = 98          /* name_not_typename  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 148 "c-exp.y"

/* YYSTYPE gets defined by %union */
static int parse_number (char *, int, int, YYSTYPE *);

#line 440 "c-exp.c.tmp"


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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

/* The parser invokes alloca or xmalloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
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
       && ! ((defined YYMALLOC || defined xmalloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC xmalloc
#   if ! defined xmalloc && ! defined EXIT_SUCCESS
void *xmalloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
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
#define YYFINAL  96
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   780

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  159
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  241

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   298


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
       2,     2,     2,    61,     2,     2,     2,    51,    37,     2,
      58,    64,    49,    47,    29,    48,    56,    50,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    67,     2,
      40,    31,    41,    32,    46,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    57,     2,    63,    36,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    65,    35,    66,    62,     2,     2,     2,
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
      25,    26,    27,    28,    30,    33,    34,    38,    39,    42,
      43,    44,    45,    52,    53,    54,    55,    59,    60
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   231,   231,   232,   235,   242,   243,   248,   252,   256,
     260,   264,   268,   272,   276,   280,   284,   288,   292,   298,
     306,   310,   316,   324,   328,   335,   332,   342,   346,   349,
     353,   357,   360,   367,   373,   379,   385,   389,   393,   397,
     401,   405,   409,   413,   417,   421,   425,   429,   433,   437,
     441,   445,   449,   453,   457,   461,   465,   469,   475,   482,
     493,   500,   503,   507,   515,   540,   547,   556,   564,   570,
     581,   597,   611,   636,   637,   671,   728,   734,   735,   738,
     741,   742,   746,   747,   750,   752,   754,   756,   758,   761,
     763,   768,   775,   777,   781,   783,   787,   789,   801,   805,
     807,   809,   811,   813,   815,   817,   819,   821,   823,   825,
     827,   829,   831,   833,   835,   837,   839,   841,   843,   845,
     847,   849,   851,   853,   855,   857,   859,   861,   863,   866,
     869,   872,   875,   877,   879,   881,   886,   890,   892,   894,
     942,   967,   968,   974,   980,   989,   994,  1001,  1002,  1006,
    1007,  1010,  1014,  1016,  1020,  1021,  1022,  1023,  1026,  1027
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
  "\"end of file\"", "error", "\"invalid token\"", "INT", "FLOAT",
  "STRING", "NAME", "TYPENAME", "NAME_OR_INT", "STRUCT", "CLASS", "UNION",
  "ENUM", "SIZEOF", "UNSIGNED", "COLONCOLON", "TEMPLATE", "ERROR",
  "SIGNED_KEYWORD", "LONG", "SHORT", "INT_KEYWORD", "CONST_KEYWORD",
  "VOLATILE_KEYWORD", "DOUBLE_KEYWORD", "VARIABLE", "ASSIGN_MODIFY",
  "TRUEKEYWORD", "FALSEKEYWORD", "','", "ABOVE_COMMA", "'='", "'?'",
  "OROR", "ANDAND", "'|'", "'^'", "'&'", "EQUAL", "NOTEQUAL", "'<'", "'>'",
  "LEQ", "GEQ", "LSH", "RSH", "'@'", "'+'", "'-'", "'*'", "'/'", "'%'",
  "UNARY", "INCREMENT", "DECREMENT", "ARROW", "'.'", "'['", "'('",
  "BLOCKNAME", "FILENAME", "'!'", "'~'", "']'", "')'", "'{'", "'}'", "':'",
  "$accept", "start", "type_exp", "exp1", "exp", "$@1", "lcurly",
  "arglist", "rcurly", "block", "variable", "qualified_name",
  "space_identifier", "const_or_volatile", "cv_with_space_id",
  "const_or_volatile_or_space_identifier_noopt",
  "const_or_volatile_or_space_identifier", "abs_decl", "direct_abs_decl",
  "array_mod", "func_mod", "type", "typebase", "qualified_type",
  "typename", "nonempty_typelist", "ptype", "const_and_volatile",
  "const_or_volatile_noopt", "name", "name_not_typename", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-22)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-141)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     267,   -22,   -22,   -22,   -22,   -22,   -22,     6,     6,     6,
       6,   330,    18,     6,     6,    36,   284,   157,   -22,     5,
      13,   -22,   -22,   -22,   -22,   267,   267,   267,   267,   267,
     267,   267,     9,   -22,   267,   267,   -22,    40,   -22,    15,
     544,   204,    47,   -22,   -22,    26,   -22,   352,   -22,   151,
     -22,   145,   -22,    28,   -22,   -22,   -22,   -22,   -22,   -22,
     -22,   -22,   -22,   267,   722,    98,   -22,    33,    66,   -22,
     -22,   -22,     8,    67,   -22,   -22,    93,   101,   165,   -22,
     -22,   106,   114,   -22,   -22,   -22,   722,   722,   722,   722,
     722,   722,   -18,    76,   722,   722,   -22,   267,   267,   267,
     267,   267,   267,   267,   267,   267,   267,   267,   267,   267,
     267,   267,   267,   267,   267,   267,   267,   267,   267,   267,
     -22,   -22,   139,   478,   267,   -22,   544,   -21,    64,     6,
     137,   111,   221,    53,   -22,   -22,    79,    88,   133,   -22,
     -22,   352,   135,   -22,   -22,   -22,   149,   160,   -22,   -22,
     -22,   -22,   267,   544,   544,   544,   507,   596,   468,   619,
     641,   662,   681,   681,   416,   416,   416,   416,   694,   694,
     706,   716,   716,   722,   722,   722,   278,   267,   -22,   -22,
     267,   -22,   -22,   -14,   204,   267,   -22,   -22,   267,   169,
     -22,   -22,   -22,     6,     6,   109,    27,    81,     4,   419,
       7,   107,   -22,   -22,   393,   -22,   146,   221,   -22,   -22,
     -22,   722,   267,   722,   722,   -22,   -13,   544,   722,   -22,
     -22,   -22,   -22,   130,   -22,   -22,   131,   -22,    -6,   -22,
      59,   -22,   -22,   -22,   571,   -22,   -22,   -22,   352,   -22,
     -22
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      78,    58,    60,    64,   158,    99,    59,     0,     0,     0,
       0,    78,   133,     0,     0,   135,   101,   102,   100,   152,
     153,   126,    62,    65,    66,    78,    78,    78,    78,    78,
      78,    78,   159,    68,    78,    78,    27,     0,     3,     2,
       5,    28,     0,    61,    73,     0,    80,    78,     4,   147,
     139,    98,   151,    81,    75,   154,   156,   157,   155,   128,
     129,   130,   131,    78,    17,    78,   141,   143,   144,   142,
     132,    74,     0,   143,   144,   134,   109,   105,   110,   103,
     127,   124,   122,   120,   149,   150,     8,    10,     9,     7,
      13,    14,     0,     0,    11,    12,     1,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      15,    16,    78,    78,    78,    25,    29,     0,     0,     0,
       0,    78,   137,     0,   138,    82,     0,     0,   116,   107,
     123,    78,   114,   106,   108,   104,   118,   113,   111,   125,
     121,    35,    78,     6,    57,    56,     0,    54,    53,    52,
      51,    50,    44,    45,    48,    49,    46,    47,    42,    43,
      36,    40,    41,    37,    38,    39,   156,    78,    19,    18,
      78,    22,    21,     0,    28,    78,    31,    32,    78,    70,
      76,    79,    77,     0,     0,    71,    86,    84,     0,    78,
      83,    88,    91,    93,    63,   117,     0,   147,   115,   119,
     112,    34,    78,    20,    23,    24,     0,    30,    33,   140,
      72,    87,    85,     0,    94,    96,     0,   145,     0,   148,
      78,    90,    92,   136,    55,    26,    95,    89,    78,    97,
     146
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -22,   -22,   -22,     2,    -8,   -22,   -22,    21,   105,   -22,
     -22,    78,   -22,    75,   -22,   -15,    42,    38,   -22,    20,
      39,     1,     0,   -22,   230,   -22,   -22,   -22,   115,    -4,
     -22
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    37,    38,    92,    40,   184,    41,   127,   187,    42,
      43,    44,   131,    45,    46,    47,   136,   200,   201,   202,
     203,   227,    65,    50,    70,   228,    51,    52,    53,    59,
      54
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      49,    48,    39,    64,    60,    61,    62,   223,   185,    71,
      72,    97,    55,    56,    57,    97,   185,    86,    87,    88,
      89,    90,    91,   238,   -67,    66,    94,    95,    84,    19,
      20,    49,    93,   126,   134,    85,   135,    67,    68,    69,
      96,    49,   128,    66,    97,   186,   151,   132,   141,   215,
     134,   235,   138,   -78,   139,    73,    74,    69,   239,    55,
      56,    57,   129,    49,   137,    58,     5,   224,     7,     8,
       9,    10,   130,    12,   -77,    14,   197,    15,    16,    17,
      18,    19,    20,    21,   198,   199,   142,   140,   143,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,    58,   133,   144,   194,   196,   134,   179,   182,
      19,    20,   145,   225,  -140,   189,   183,   149,   197,   195,
     186,  -140,  -140,    19,    20,   150,   198,   199,   198,   199,
     152,   207,   206,   190,   211,    55,   176,    57,     7,     8,
       9,    10,   204,    12,   205,    14,   208,    15,    16,    17,
      18,    19,    20,    21,   198,   230,   133,    19,    20,   213,
     209,    81,   214,    19,    20,    82,   126,   217,    83,   146,
     218,   210,   -83,   147,   -69,   135,   148,   233,   177,   219,
     220,   -78,   134,   236,   -83,   237,   211,   -78,    58,   207,
     178,   181,   -83,   -83,   234,   216,   191,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,   231,    15,    16,    17,    18,    19,    20,    21,    22,
     207,    23,    24,   188,   221,   222,   193,   226,   207,   240,
     232,    25,   229,    19,    20,    75,   192,     0,     0,     0,
     -78,    26,    27,    28,     0,     0,     0,    29,    30,     0,
       0,     0,    31,    32,    33,    34,    35,   -78,     0,    36,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,   -99,    23,    24,     0,     0,    76,     0,
     -99,   -99,    77,    78,    25,    79,     0,     0,    80,     0,
       0,     0,     0,     0,    26,    27,    28,     0,     0,     0,
      29,    30,     0,     0,   -99,    31,    32,    33,    34,    35,
       0,     0,    36,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,     0,    23,    24,     5,
       0,     7,     8,     9,    10,     0,    12,    25,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    26,    27,    28,
       0,     0,     0,    29,    30,     0,     0,     0,    63,    32,
      33,    34,    35,     0,     0,    36,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,     0,
      23,    24,     0,     0,     0,     0,     5,     0,     7,     8,
       9,    10,     0,    12,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,     0,     0,    29,    30,     0,     0,
       0,    31,    32,    33,    34,    35,   196,     0,    36,     0,
     112,   113,   114,   115,   116,   117,   118,   119,   197,   120,
     121,   122,   123,   124,   125,     0,   198,   199,     0,     0,
       0,     0,     0,   225,    55,   176,    57,     7,     8,     9,
      10,     0,    12,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
       0,   120,   121,   122,   123,   124,   125,   180,     0,     0,
       0,     0,     0,    98,     0,     0,     0,    58,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,     0,
     120,   121,   122,   123,   124,   125,     0,     0,     0,     0,
      98,     0,     0,     0,   212,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,     0,   120,   121,   122,
     123,   124,   125,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,     0,   120,   121,   122,   123,   124,   125,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,     0,   120,
     121,   122,   123,   124,   125,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,     0,   120,   121,   122,   123,   124,   125,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,     0,   120,   121,   122,   123,   124,   125,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,     0,   120,   121,   122,   123,   124,
     125,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,     0,   120,   121,   122,   123,   124,   125,
     114,   115,   116,   117,   118,   119,     0,   120,   121,   122,
     123,   124,   125,   115,   116,   117,   118,   119,     0,   120,
     121,   122,   123,   124,   125,   117,   118,   119,     0,   120,
     121,   122,   123,   124,   125,   120,   121,   122,   123,   124,
     125
};

static const yytype_int16 yycheck[] =
{
       0,     0,     0,    11,     8,     9,    10,     3,    29,    13,
      14,    29,     6,     7,     8,    29,    29,    25,    26,    27,
      28,    29,    30,    29,    15,     7,    34,    35,    23,    22,
      23,    31,    31,    41,    49,    22,    51,    19,    20,    21,
       0,    41,    41,     7,    29,    66,    64,    47,    40,    63,
      65,    64,    19,    46,    21,    19,    20,    21,    64,     6,
       7,     8,    15,    63,    63,    59,     7,    63,     9,    10,
      11,    12,    46,    14,    46,    16,    49,    18,    19,    20,
      21,    22,    23,    24,    57,    58,    19,    21,    21,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,    59,    15,    21,    62,    37,   132,   122,   123,
      22,    23,    21,    64,    15,   129,   124,    21,    49,   133,
      66,    22,    23,    22,    23,    21,    57,    58,    57,    58,
      64,   141,   141,     6,   152,     6,     7,     8,     9,    10,
      11,    12,    64,    14,    21,    16,    21,    18,    19,    20,
      21,    22,    23,    24,    57,    58,    15,    22,    23,   177,
      21,    14,   180,    22,    23,    18,   184,   185,    21,    14,
     188,    21,    37,    18,    15,   200,    21,    41,    49,   193,
     194,    46,   207,    63,    49,    64,   204,    46,    59,   199,
     122,   123,    57,    58,   212,   184,   131,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,   201,    18,    19,    20,    21,    22,    23,    24,    25,
     230,    27,    28,   128,   196,   197,    15,   199,   238,   238,
     201,    37,   200,    22,    23,    15,   131,    -1,    -1,    -1,
      46,    47,    48,    49,    -1,    -1,    -1,    53,    54,    -1,
      -1,    -1,    58,    59,    60,    61,    62,    46,    -1,    65,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    15,    27,    28,    -1,    -1,    14,    -1,
      22,    23,    18,    19,    37,    21,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    -1,    47,    48,    49,    -1,    -1,    -1,
      53,    54,    -1,    -1,    46,    58,    59,    60,    61,    62,
      -1,    -1,    65,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    28,     7,
      -1,     9,    10,    11,    12,    -1,    14,    37,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    47,    48,    49,
      -1,    -1,    -1,    53,    54,    -1,    -1,    -1,    58,    59,
      60,    61,    62,    -1,    -1,    65,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,     7,    -1,     9,    10,
      11,    12,    -1,    14,    -1,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    53,    54,    -1,    -1,
      -1,    58,    59,    60,    61,    62,    37,    -1,    65,    -1,
      44,    45,    46,    47,    48,    49,    50,    51,    49,    53,
      54,    55,    56,    57,    58,    -1,    57,    58,    -1,    -1,
      -1,    -1,    -1,    64,     6,     7,     8,     9,    10,    11,
      12,    -1,    14,    -1,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      -1,    53,    54,    55,    56,    57,    58,    49,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    59,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    -1,
      53,    54,    55,    56,    57,    58,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    67,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    -1,    53,    54,    55,
      56,    57,    58,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    -1,    53,    54,    55,    56,    57,    58,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    -1,    53,
      54,    55,    56,    57,    58,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    55,    56,    57,    58,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    -1,    53,    54,    55,    56,    57,    58,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    -1,    53,    54,    55,    56,    57,
      58,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    -1,    53,    54,    55,    56,    57,    58,
      46,    47,    48,    49,    50,    51,    -1,    53,    54,    55,
      56,    57,    58,    47,    48,    49,    50,    51,    -1,    53,
      54,    55,    56,    57,    58,    49,    50,    51,    -1,    53,
      54,    55,    56,    57,    58,    53,    54,    55,    56,    57,
      58
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    18,    19,    20,    21,    22,
      23,    24,    25,    27,    28,    37,    47,    48,    49,    53,
      54,    58,    59,    60,    61,    62,    65,    69,    70,    71,
      72,    74,    77,    78,    79,    81,    82,    83,    89,    90,
      91,    94,    95,    96,    98,     6,     7,     8,    59,    97,
      97,    97,    97,    58,    72,    90,     7,    19,    20,    21,
      92,    97,    97,    19,    20,    92,    14,    18,    19,    21,
      24,    14,    18,    21,    23,    22,    72,    72,    72,    72,
      72,    72,    71,    89,    72,    72,     0,    29,    26,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      53,    54,    55,    56,    57,    58,    72,    75,    89,    15,
      46,    80,    90,    15,    83,    83,    84,    89,    19,    21,
      21,    40,    19,    21,    21,    21,    14,    18,    21,    21,
      21,    64,    64,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,     7,    49,    79,    97,
      49,    79,    97,    71,    73,    29,    66,    76,    76,    97,
       6,    81,    96,    15,    62,    97,    37,    49,    57,    58,
      85,    86,    87,    88,    64,    21,    89,    90,    21,    21,
      21,    72,    67,    72,    72,    63,    75,    72,    72,    97,
      97,    85,    85,     3,    63,    64,    85,    89,    93,    84,
      58,    87,    88,    41,    72,    64,    63,    64,    29,    64,
      89
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    68,    69,    69,    70,    71,    71,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    73,    72,    74,    75,    75,
      75,    76,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    77,    77,    77,
      78,    79,    79,    78,    78,    78,    80,    81,    81,    82,
      83,    83,    84,    84,    85,    85,    85,    85,    85,    86,
      86,    86,    86,    86,    87,    87,    88,    88,    89,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      91,    92,    92,    92,    92,    93,    93,    94,    94,    95,
      95,    96,    96,    96,    97,    97,    97,    97,    98,    98
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     3,     3,
       4,     3,     3,     4,     4,     0,     5,     1,     0,     1,
       3,     1,     3,     4,     4,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     5,     3,     3,     1,     1,
       1,     1,     1,     4,     1,     1,     1,     1,     1,     3,
       3,     3,     4,     1,     2,     1,     2,     1,     0,     3,
       1,     1,     1,     0,     1,     2,     1,     2,     1,     3,
       2,     1,     2,     1,     2,     3,     2,     3,     1,     1,
       1,     1,     1,     2,     3,     2,     3,     3,     3,     2,
       2,     3,     4,     3,     3,     4,     3,     4,     3,     4,
       2,     3,     2,     3,     2,     3,     1,     2,     2,     2,
       2,     2,     2,     1,     2,     1,     5,     2,     2,     1,
       3,     1,     1,     1,     1,     1,     3,     1,     4,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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
       to xreallocate them elsewhere.  */

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
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to xreallocate the stack.  Use copies of
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
  case 4: /* type_exp: type  */
#line 236 "c-exp.y"
                        { write_exp_elt_opcode(OP_TYPE);
			  write_exp_elt_type((yyvsp[0].tval));
			  write_exp_elt_opcode(OP_TYPE);}
#line 1682 "c-exp.c.tmp"
    break;

  case 6: /* exp1: exp1 ',' exp  */
#line 244 "c-exp.y"
                        { write_exp_elt_opcode (BINOP_COMMA); }
#line 1688 "c-exp.c.tmp"
    break;

  case 7: /* exp: '*' exp  */
#line 249 "c-exp.y"
                        { write_exp_elt_opcode (UNOP_IND); }
#line 1694 "c-exp.c.tmp"
    break;

  case 8: /* exp: '&' exp  */
#line 253 "c-exp.y"
                        { write_exp_elt_opcode (UNOP_ADDR); }
#line 1700 "c-exp.c.tmp"
    break;

  case 9: /* exp: '-' exp  */
#line 257 "c-exp.y"
                        { write_exp_elt_opcode (UNOP_NEG); }
#line 1706 "c-exp.c.tmp"
    break;

  case 10: /* exp: '+' exp  */
#line 261 "c-exp.y"
                        { write_exp_elt_opcode (UNOP_PLUS); }
#line 1712 "c-exp.c.tmp"
    break;

  case 11: /* exp: '!' exp  */
#line 265 "c-exp.y"
                        { write_exp_elt_opcode (UNOP_LOGICAL_NOT); }
#line 1718 "c-exp.c.tmp"
    break;

  case 12: /* exp: '~' exp  */
#line 269 "c-exp.y"
                        { write_exp_elt_opcode (UNOP_COMPLEMENT); }
#line 1724 "c-exp.c.tmp"
    break;

  case 13: /* exp: INCREMENT exp  */
#line 273 "c-exp.y"
                        { write_exp_elt_opcode (UNOP_PREINCREMENT); }
#line 1730 "c-exp.c.tmp"
    break;

  case 14: /* exp: DECREMENT exp  */
#line 277 "c-exp.y"
                        { write_exp_elt_opcode (UNOP_PREDECREMENT); }
#line 1736 "c-exp.c.tmp"
    break;

  case 15: /* exp: exp INCREMENT  */
#line 281 "c-exp.y"
                        { write_exp_elt_opcode (UNOP_POSTINCREMENT); }
#line 1742 "c-exp.c.tmp"
    break;

  case 16: /* exp: exp DECREMENT  */
#line 285 "c-exp.y"
                        { write_exp_elt_opcode (UNOP_POSTDECREMENT); }
#line 1748 "c-exp.c.tmp"
    break;

  case 17: /* exp: SIZEOF exp  */
#line 289 "c-exp.y"
                        { write_exp_elt_opcode (UNOP_SIZEOF); }
#line 1754 "c-exp.c.tmp"
    break;

  case 18: /* exp: exp ARROW name  */
#line 293 "c-exp.y"
                        { write_exp_elt_opcode (STRUCTOP_PTR);
			  write_exp_string ((yyvsp[0].sval));
			  write_exp_elt_opcode (STRUCTOP_PTR); }
#line 1762 "c-exp.c.tmp"
    break;

  case 19: /* exp: exp ARROW qualified_name  */
#line 299 "c-exp.y"
                        { /* exp->type::name becomes exp->*(&type::name) */
			  /* Note: this doesn't work if name is a
			     static member!  FIXME */
			  write_exp_elt_opcode (UNOP_ADDR);
			  write_exp_elt_opcode (STRUCTOP_MPTR); }
#line 1772 "c-exp.c.tmp"
    break;

  case 20: /* exp: exp ARROW '*' exp  */
#line 307 "c-exp.y"
                        { write_exp_elt_opcode (STRUCTOP_MPTR); }
#line 1778 "c-exp.c.tmp"
    break;

  case 21: /* exp: exp '.' name  */
#line 311 "c-exp.y"
                        { write_exp_elt_opcode (STRUCTOP_STRUCT);
			  write_exp_string ((yyvsp[0].sval));
			  write_exp_elt_opcode (STRUCTOP_STRUCT); }
#line 1786 "c-exp.c.tmp"
    break;

  case 22: /* exp: exp '.' qualified_name  */
#line 317 "c-exp.y"
                        { /* exp.type::name becomes exp.*(&type::name) */
			  /* Note: this doesn't work if name is a
			     static member!  FIXME */
			  write_exp_elt_opcode (UNOP_ADDR);
			  write_exp_elt_opcode (STRUCTOP_MEMBER); }
#line 1796 "c-exp.c.tmp"
    break;

  case 23: /* exp: exp '.' '*' exp  */
#line 325 "c-exp.y"
                        { write_exp_elt_opcode (STRUCTOP_MEMBER); }
#line 1802 "c-exp.c.tmp"
    break;

  case 24: /* exp: exp '[' exp1 ']'  */
#line 329 "c-exp.y"
                        { write_exp_elt_opcode (BINOP_SUBSCRIPT); }
#line 1808 "c-exp.c.tmp"
    break;

  case 25: /* $@1: %empty  */
#line 335 "c-exp.y"
                        { start_arglist (); }
#line 1814 "c-exp.c.tmp"
    break;

  case 26: /* exp: exp '(' $@1 arglist ')'  */
#line 337 "c-exp.y"
                        { write_exp_elt_opcode (OP_FUNCALL);
			  write_exp_elt_longcst ((LONGEST) end_arglist ());
			  write_exp_elt_opcode (OP_FUNCALL); }
#line 1822 "c-exp.c.tmp"
    break;

  case 27: /* lcurly: '{'  */
#line 343 "c-exp.y"
                        { start_arglist (); }
#line 1828 "c-exp.c.tmp"
    break;

  case 29: /* arglist: exp  */
#line 350 "c-exp.y"
                        { arglist_len = 1; }
#line 1834 "c-exp.c.tmp"
    break;

  case 30: /* arglist: arglist ',' exp  */
#line 354 "c-exp.y"
                        { arglist_len++; }
#line 1840 "c-exp.c.tmp"
    break;

  case 31: /* rcurly: '}'  */
#line 358 "c-exp.y"
                        { (yyval.lval) = end_arglist () - 1; }
#line 1846 "c-exp.c.tmp"
    break;

  case 32: /* exp: lcurly arglist rcurly  */
#line 361 "c-exp.y"
                        { write_exp_elt_opcode (OP_ARRAY);
			  write_exp_elt_longcst ((LONGEST) 0);
			  write_exp_elt_longcst ((LONGEST) (yyvsp[0].lval));
			  write_exp_elt_opcode (OP_ARRAY); }
#line 1855 "c-exp.c.tmp"
    break;

  case 33: /* exp: lcurly type rcurly exp  */
#line 368 "c-exp.y"
                        { write_exp_elt_opcode (UNOP_MEMVAL);
			  write_exp_elt_type ((yyvsp[-2].tval));
			  write_exp_elt_opcode (UNOP_MEMVAL); }
#line 1863 "c-exp.c.tmp"
    break;

  case 34: /* exp: '(' type ')' exp  */
#line 374 "c-exp.y"
                        { write_exp_elt_opcode (UNOP_CAST);
			  write_exp_elt_type ((yyvsp[-2].tval));
			  write_exp_elt_opcode (UNOP_CAST); }
#line 1871 "c-exp.c.tmp"
    break;

  case 35: /* exp: '(' exp1 ')'  */
#line 380 "c-exp.y"
                        { }
#line 1877 "c-exp.c.tmp"
    break;

  case 36: /* exp: exp '@' exp  */
#line 386 "c-exp.y"
                        { write_exp_elt_opcode (BINOP_REPEAT); }
#line 1883 "c-exp.c.tmp"
    break;

  case 37: /* exp: exp '*' exp  */
#line 390 "c-exp.y"
                        { write_exp_elt_opcode (BINOP_MUL); }
#line 1889 "c-exp.c.tmp"
    break;

  case 38: /* exp: exp '/' exp  */
#line 394 "c-exp.y"
                        { write_exp_elt_opcode (BINOP_DIV); }
#line 1895 "c-exp.c.tmp"
    break;

  case 39: /* exp: exp '%' exp  */
#line 398 "c-exp.y"
                        { write_exp_elt_opcode (BINOP_REM); }
#line 1901 "c-exp.c.tmp"
    break;

  case 40: /* exp: exp '+' exp  */
#line 402 "c-exp.y"
                        { write_exp_elt_opcode (BINOP_ADD); }
#line 1907 "c-exp.c.tmp"
    break;

  case 41: /* exp: exp '-' exp  */
#line 406 "c-exp.y"
                        { write_exp_elt_opcode (BINOP_SUB); }
#line 1913 "c-exp.c.tmp"
    break;

  case 42: /* exp: exp LSH exp  */
#line 410 "c-exp.y"
                        { write_exp_elt_opcode (BINOP_LSH); }
#line 1919 "c-exp.c.tmp"
    break;

  case 43: /* exp: exp RSH exp  */
#line 414 "c-exp.y"
                        { write_exp_elt_opcode (BINOP_RSH); }
#line 1925 "c-exp.c.tmp"
    break;

  case 44: /* exp: exp EQUAL exp  */
#line 418 "c-exp.y"
                        { write_exp_elt_opcode (BINOP_EQUAL); }
#line 1931 "c-exp.c.tmp"
    break;

  case 45: /* exp: exp NOTEQUAL exp  */
#line 422 "c-exp.y"
                        { write_exp_elt_opcode (BINOP_NOTEQUAL); }
#line 1937 "c-exp.c.tmp"
    break;

  case 46: /* exp: exp LEQ exp  */
#line 426 "c-exp.y"
                        { write_exp_elt_opcode (BINOP_LEQ); }
#line 1943 "c-exp.c.tmp"
    break;

  case 47: /* exp: exp GEQ exp  */
#line 430 "c-exp.y"
                        { write_exp_elt_opcode (BINOP_GEQ); }
#line 1949 "c-exp.c.tmp"
    break;

  case 48: /* exp: exp '<' exp  */
#line 434 "c-exp.y"
                        { write_exp_elt_opcode (BINOP_LESS); }
#line 1955 "c-exp.c.tmp"
    break;

  case 49: /* exp: exp '>' exp  */
#line 438 "c-exp.y"
                        { write_exp_elt_opcode (BINOP_GTR); }
#line 1961 "c-exp.c.tmp"
    break;

  case 50: /* exp: exp '&' exp  */
#line 442 "c-exp.y"
                        { write_exp_elt_opcode (BINOP_BITWISE_AND); }
#line 1967 "c-exp.c.tmp"
    break;

  case 51: /* exp: exp '^' exp  */
#line 446 "c-exp.y"
                        { write_exp_elt_opcode (BINOP_BITWISE_XOR); }
#line 1973 "c-exp.c.tmp"
    break;

  case 52: /* exp: exp '|' exp  */
#line 450 "c-exp.y"
                        { write_exp_elt_opcode (BINOP_BITWISE_IOR); }
#line 1979 "c-exp.c.tmp"
    break;

  case 53: /* exp: exp ANDAND exp  */
#line 454 "c-exp.y"
                        { write_exp_elt_opcode (BINOP_LOGICAL_AND); }
#line 1985 "c-exp.c.tmp"
    break;

  case 54: /* exp: exp OROR exp  */
#line 458 "c-exp.y"
                        { write_exp_elt_opcode (BINOP_LOGICAL_OR); }
#line 1991 "c-exp.c.tmp"
    break;

  case 55: /* exp: exp '?' exp ':' exp  */
#line 462 "c-exp.y"
                        { write_exp_elt_opcode (TERNOP_COND); }
#line 1997 "c-exp.c.tmp"
    break;

  case 56: /* exp: exp '=' exp  */
#line 466 "c-exp.y"
                        { write_exp_elt_opcode (BINOP_ASSIGN); }
#line 2003 "c-exp.c.tmp"
    break;

  case 57: /* exp: exp ASSIGN_MODIFY exp  */
#line 470 "c-exp.y"
                        { write_exp_elt_opcode (BINOP_ASSIGN_MODIFY);
			  write_exp_elt_opcode ((yyvsp[-1].opcode));
			  write_exp_elt_opcode (BINOP_ASSIGN_MODIFY); }
#line 2011 "c-exp.c.tmp"
    break;

  case 58: /* exp: INT  */
#line 476 "c-exp.y"
                        { write_exp_elt_opcode (OP_LONG);
			  write_exp_elt_type ((yyvsp[0].typed_val_int).type);
			  write_exp_elt_longcst ((LONGEST)((yyvsp[0].typed_val_int).val));
			  write_exp_elt_opcode (OP_LONG); }
#line 2020 "c-exp.c.tmp"
    break;

  case 59: /* exp: NAME_OR_INT  */
#line 483 "c-exp.y"
                        { YYSTYPE val;
			  parse_number ((yyvsp[0].ssym).stoken.ptr, (yyvsp[0].ssym).stoken.length, 0, &val);
			  write_exp_elt_opcode (OP_LONG);
			  write_exp_elt_type (val.typed_val_int.type);
			  write_exp_elt_longcst ((LONGEST)val.typed_val_int.val);
			  write_exp_elt_opcode (OP_LONG);
			}
#line 2032 "c-exp.c.tmp"
    break;

  case 60: /* exp: FLOAT  */
#line 494 "c-exp.y"
                        { write_exp_elt_opcode (OP_DOUBLE);
			  write_exp_elt_type ((yyvsp[0].typed_val_float).type);
			  write_exp_elt_dblcst ((yyvsp[0].typed_val_float).dval);
			  write_exp_elt_opcode (OP_DOUBLE); }
#line 2041 "c-exp.c.tmp"
    break;

  case 63: /* exp: SIZEOF '(' type ')'  */
#line 508 "c-exp.y"
                        { write_exp_elt_opcode (OP_LONG);
			  write_exp_elt_type (builtin_type (current_gdbarch)->builtin_int);
			  CHECK_TYPEDEF ((yyvsp[-1].tval));
			  write_exp_elt_longcst ((LONGEST) TYPE_LENGTH ((yyvsp[-1].tval)));
			  write_exp_elt_opcode (OP_LONG); }
#line 2051 "c-exp.c.tmp"
    break;

  case 64: /* exp: STRING  */
#line 516 "c-exp.y"
                        { /* C strings are converted into array constants with
			     an explicit null byte added at the end.  Thus
			     the array upper bound is the string length.
			     There is no such thing in C as a completely empty
			     string. */
			  char *sp = (yyvsp[0].sval).ptr; int count = (yyvsp[0].sval).length;
			  while (count-- > 0)
			    {
			      write_exp_elt_opcode (OP_LONG);
			      write_exp_elt_type (builtin_type (current_gdbarch)->builtin_char);
			      write_exp_elt_longcst ((LONGEST)(*sp++));
			      write_exp_elt_opcode (OP_LONG);
			    }
			  write_exp_elt_opcode (OP_LONG);
			  write_exp_elt_type (builtin_type (current_gdbarch)->builtin_char);
			  write_exp_elt_longcst ((LONGEST)'\0');
			  write_exp_elt_opcode (OP_LONG);
			  write_exp_elt_opcode (OP_ARRAY);
			  write_exp_elt_longcst ((LONGEST) 0);
			  write_exp_elt_longcst ((LONGEST) ((yyvsp[0].sval).length));
			  write_exp_elt_opcode (OP_ARRAY); }
#line 2077 "c-exp.c.tmp"
    break;

  case 65: /* exp: TRUEKEYWORD  */
#line 541 "c-exp.y"
                        { write_exp_elt_opcode (OP_LONG);
                          write_exp_elt_type (builtin_type (current_gdbarch)->builtin_bool);
                          write_exp_elt_longcst ((LONGEST) 1);
                          write_exp_elt_opcode (OP_LONG); }
#line 2086 "c-exp.c.tmp"
    break;

  case 66: /* exp: FALSEKEYWORD  */
#line 548 "c-exp.y"
                        { write_exp_elt_opcode (OP_LONG);
                          write_exp_elt_type (builtin_type (current_gdbarch)->builtin_bool);
                          write_exp_elt_longcst ((LONGEST) 0);
                          write_exp_elt_opcode (OP_LONG); }
#line 2095 "c-exp.c.tmp"
    break;

  case 67: /* block: BLOCKNAME  */
#line 557 "c-exp.y"
                        {
			  if ((yyvsp[0].ssym).sym)
			    (yyval.bval) = SYMBOL_BLOCK_VALUE ((yyvsp[0].ssym).sym);
			  else
			    error ("No file or function \"%s\".",
				   copy_name ((yyvsp[0].ssym).stoken));
			}
#line 2107 "c-exp.c.tmp"
    break;

  case 68: /* block: FILENAME  */
#line 565 "c-exp.y"
                        {
			  (yyval.bval) = (yyvsp[0].bval);
			}
#line 2115 "c-exp.c.tmp"
    break;

  case 69: /* block: block COLONCOLON name  */
#line 571 "c-exp.y"
                        { struct symbol *tem
			    = lookup_symbol (copy_name ((yyvsp[0].sval)), (yyvsp[-2].bval),
					     VAR_DOMAIN, (int *) NULL,
					     (struct symtab **) NULL);
			  if (!tem || SYMBOL_CLASS (tem) != LOC_BLOCK)
			    error ("No function \"%s\" in specified context.",
				   copy_name ((yyvsp[0].sval)));
			  (yyval.bval) = SYMBOL_BLOCK_VALUE (tem); }
#line 2128 "c-exp.c.tmp"
    break;

  case 70: /* variable: block COLONCOLON name  */
#line 582 "c-exp.y"
                        { struct symbol *sym;
			  sym = lookup_symbol (copy_name ((yyvsp[0].sval)), (yyvsp[-2].bval),
					       VAR_DOMAIN, (int *) NULL,
					       (struct symtab **) NULL);
			  if (sym == 0)
			    error ("No symbol \"%s\" in specified context.",
				   copy_name ((yyvsp[0].sval)));

			  write_exp_elt_opcode (OP_VAR_VALUE);
			  /* block_found is set by lookup_symbol.  */
			  write_exp_elt_block (block_found);
			  write_exp_elt_sym (sym);
			  write_exp_elt_opcode (OP_VAR_VALUE); }
#line 2146 "c-exp.c.tmp"
    break;

  case 71: /* qualified_name: typebase COLONCOLON name  */
#line 598 "c-exp.y"
                        {
			  struct type *type = (yyvsp[-2].tval);
			  if (TYPE_CODE (type) != TYPE_CODE_STRUCT
			      && TYPE_CODE (type) != TYPE_CODE_UNION
			      && TYPE_CODE (type) != TYPE_CODE_NAMESPACE)
			    error ("`%s' is not defined as an aggregate type.",
				   TYPE_NAME (type));

			  write_exp_elt_opcode (OP_SCOPE);
			  write_exp_elt_type (type);
			  write_exp_string ((yyvsp[0].sval));
			  write_exp_elt_opcode (OP_SCOPE);
			}
#line 2164 "c-exp.c.tmp"
    break;

  case 72: /* qualified_name: typebase COLONCOLON '~' name  */
#line 612 "c-exp.y"
                        {
			  struct type *type = (yyvsp[-3].tval);
			  struct stoken tmp_token;
			  if (TYPE_CODE (type) != TYPE_CODE_STRUCT
			      && TYPE_CODE (type) != TYPE_CODE_UNION
			      && TYPE_CODE (type) != TYPE_CODE_NAMESPACE)
			    error ("`%s' is not defined as an aggregate type.",
				   TYPE_NAME (type));

			  tmp_token.ptr = (char*) alloca ((yyvsp[0].sval).length + 2);
			  tmp_token.length = (yyvsp[0].sval).length + 1;
			  tmp_token.ptr[0] = '~';
			  memcpy (tmp_token.ptr+1, (yyvsp[0].sval).ptr, (yyvsp[0].sval).length);
			  tmp_token.ptr[tmp_token.length] = 0;

			  /* Check for valid destructor name.  */
			  destructor_name_p (tmp_token.ptr, type);
			  write_exp_elt_opcode (OP_SCOPE);
			  write_exp_elt_type (type);
			  write_exp_string (tmp_token);
			  write_exp_elt_opcode (OP_SCOPE);
			}
#line 2191 "c-exp.c.tmp"
    break;

  case 74: /* variable: COLONCOLON name  */
#line 638 "c-exp.y"
                        {
			  char *name = copy_name ((yyvsp[0].sval));
			  struct symbol *sym;
			  struct minimal_symbol *msymbol;

			  sym =
			    lookup_symbol (name, (const struct block *) NULL,
					   VAR_DOMAIN, (int *) NULL,
					   (struct symtab **) NULL);
			  if (sym)
			    {
			      write_exp_elt_opcode (OP_VAR_VALUE);
			      write_exp_elt_block (NULL);
			      write_exp_elt_sym (sym);
			      write_exp_elt_opcode (OP_VAR_VALUE);
			      break;
			    }

			  msymbol = lookup_minimal_symbol (name, NULL, NULL);
			  if (msymbol != NULL)
			    {
			      write_exp_msymbol (msymbol,
						 lookup_function_type (builtin_type (current_gdbarch)->builtin_int),
						 builtin_type (current_gdbarch)->builtin_int);
			    }
			  else
			    if (!have_full_symbols () && !have_partial_symbols ())
			      error ("No symbol table is loaded.  Use the \"file\" command.");
			    else
			      error ("No symbol \"%s\" in current context.", name);
			}
#line 2227 "c-exp.c.tmp"
    break;

  case 75: /* variable: name_not_typename  */
#line 672 "c-exp.y"
                        { struct symbol *sym = (yyvsp[0].ssym).sym;

			  if (sym)
			    {
			      if (symbol_read_needs_frame (sym))
				{
				  if (innermost_block == 0 ||
				      contained_in (block_found, 
						    innermost_block))
				    innermost_block = block_found;
				}

			      write_exp_elt_opcode (OP_VAR_VALUE);
			      /* We want to use the selected frame, not
				 another more inner frame which happens to
				 be in the same block.  */
			      write_exp_elt_block (NULL);
			      write_exp_elt_sym (sym);
			      write_exp_elt_opcode (OP_VAR_VALUE);
			    }
			  else if ((yyvsp[0].ssym).is_a_field_of_this)
			    {
			      /* C++: it hangs off of `this'.  Must
			         not inadvertently convert from a method call
				 to data ref.  */
			      if (innermost_block == 0 || 
				  contained_in (block_found, innermost_block))
				innermost_block = block_found;
			      write_exp_elt_opcode (OP_THIS);
			      write_exp_elt_opcode (OP_THIS);
			      write_exp_elt_opcode (STRUCTOP_PTR);
			      write_exp_string ((yyvsp[0].ssym).stoken);
			      write_exp_elt_opcode (STRUCTOP_PTR);
			    }
			  else
			    {
			      struct minimal_symbol *msymbol;
			      char *arg = copy_name ((yyvsp[0].ssym).stoken);

			      msymbol =
				lookup_minimal_symbol (arg, NULL, NULL);
			      if (msymbol != NULL)
				{
				  write_exp_msymbol (msymbol,
						     lookup_function_type (builtin_type (current_gdbarch)->builtin_int),
						     builtin_type (current_gdbarch)->builtin_int);
				}
			      else if (!have_full_symbols () && !have_partial_symbols ())
				error ("No symbol table is loaded.  Use the \"file\" command.");
			      else
				error ("No symbol \"%s\" in current context.",
				       copy_name ((yyvsp[0].ssym).stoken));
			    }
			}
#line 2286 "c-exp.c.tmp"
    break;

  case 76: /* space_identifier: '@' NAME  */
#line 729 "c-exp.y"
                { push_type_address_space (copy_name ((yyvsp[0].ssym).stoken));
		  push_type (tp_space_identifier);
		}
#line 2294 "c-exp.c.tmp"
    break;

  case 84: /* abs_decl: '*'  */
#line 751 "c-exp.y"
                        { push_type (tp_pointer); (yyval.voidval) = 0; }
#line 2300 "c-exp.c.tmp"
    break;

  case 85: /* abs_decl: '*' abs_decl  */
#line 753 "c-exp.y"
                        { push_type (tp_pointer); (yyval.voidval) = (yyvsp[0].voidval); }
#line 2306 "c-exp.c.tmp"
    break;

  case 86: /* abs_decl: '&'  */
#line 755 "c-exp.y"
                        { push_type (tp_reference); (yyval.voidval) = 0; }
#line 2312 "c-exp.c.tmp"
    break;

  case 87: /* abs_decl: '&' abs_decl  */
#line 757 "c-exp.y"
                        { push_type (tp_reference); (yyval.voidval) = (yyvsp[0].voidval); }
#line 2318 "c-exp.c.tmp"
    break;

  case 89: /* direct_abs_decl: '(' abs_decl ')'  */
#line 762 "c-exp.y"
                        { (yyval.voidval) = (yyvsp[-1].voidval); }
#line 2324 "c-exp.c.tmp"
    break;

  case 90: /* direct_abs_decl: direct_abs_decl array_mod  */
#line 764 "c-exp.y"
                        {
			  push_type_int ((yyvsp[0].lval));
			  push_type (tp_array);
			}
#line 2333 "c-exp.c.tmp"
    break;

  case 91: /* direct_abs_decl: array_mod  */
#line 769 "c-exp.y"
                        {
			  push_type_int ((yyvsp[0].lval));
			  push_type (tp_array);
			  (yyval.voidval) = 0;
			}
#line 2343 "c-exp.c.tmp"
    break;

  case 92: /* direct_abs_decl: direct_abs_decl func_mod  */
#line 776 "c-exp.y"
                        { push_type (tp_function); }
#line 2349 "c-exp.c.tmp"
    break;

  case 93: /* direct_abs_decl: func_mod  */
#line 778 "c-exp.y"
                        { push_type (tp_function); }
#line 2355 "c-exp.c.tmp"
    break;

  case 94: /* array_mod: '[' ']'  */
#line 782 "c-exp.y"
                        { (yyval.lval) = -1; }
#line 2361 "c-exp.c.tmp"
    break;

  case 95: /* array_mod: '[' INT ']'  */
#line 784 "c-exp.y"
                        { (yyval.lval) = (yyvsp[-1].typed_val_int).val; }
#line 2367 "c-exp.c.tmp"
    break;

  case 96: /* func_mod: '(' ')'  */
#line 788 "c-exp.y"
                        { (yyval.voidval) = 0; }
#line 2373 "c-exp.c.tmp"
    break;

  case 97: /* func_mod: '(' nonempty_typelist ')'  */
#line 790 "c-exp.y"
                        { free ((yyvsp[-1].tvec)); (yyval.voidval) = 0; }
#line 2379 "c-exp.c.tmp"
    break;

  case 99: /* typebase: TYPENAME  */
#line 806 "c-exp.y"
                        { (yyval.tval) = (yyvsp[0].tsym).type; }
#line 2385 "c-exp.c.tmp"
    break;

  case 100: /* typebase: INT_KEYWORD  */
#line 808 "c-exp.y"
                        { (yyval.tval) = builtin_type (current_gdbarch)->builtin_int; }
#line 2391 "c-exp.c.tmp"
    break;

  case 101: /* typebase: LONG  */
#line 810 "c-exp.y"
                        { (yyval.tval) = builtin_type (current_gdbarch)->builtin_long; }
#line 2397 "c-exp.c.tmp"
    break;

  case 102: /* typebase: SHORT  */
#line 812 "c-exp.y"
                        { (yyval.tval) = builtin_type (current_gdbarch)->builtin_short; }
#line 2403 "c-exp.c.tmp"
    break;

  case 103: /* typebase: LONG INT_KEYWORD  */
#line 814 "c-exp.y"
                        { (yyval.tval) = builtin_type (current_gdbarch)->builtin_long; }
#line 2409 "c-exp.c.tmp"
    break;

  case 104: /* typebase: LONG SIGNED_KEYWORD INT_KEYWORD  */
#line 816 "c-exp.y"
                        { (yyval.tval) = builtin_type (current_gdbarch)->builtin_long; }
#line 2415 "c-exp.c.tmp"
    break;

  case 105: /* typebase: LONG SIGNED_KEYWORD  */
#line 818 "c-exp.y"
                        { (yyval.tval) = builtin_type (current_gdbarch)->builtin_long; }
#line 2421 "c-exp.c.tmp"
    break;

  case 106: /* typebase: SIGNED_KEYWORD LONG INT_KEYWORD  */
#line 820 "c-exp.y"
                        { (yyval.tval) = builtin_type (current_gdbarch)->builtin_long; }
#line 2427 "c-exp.c.tmp"
    break;

  case 107: /* typebase: UNSIGNED LONG INT_KEYWORD  */
#line 822 "c-exp.y"
                        { (yyval.tval) = builtin_type (current_gdbarch)->builtin_unsigned_long; }
#line 2433 "c-exp.c.tmp"
    break;

  case 108: /* typebase: LONG UNSIGNED INT_KEYWORD  */
#line 824 "c-exp.y"
                        { (yyval.tval) = builtin_type (current_gdbarch)->builtin_unsigned_long; }
#line 2439 "c-exp.c.tmp"
    break;

  case 109: /* typebase: LONG UNSIGNED  */
#line 826 "c-exp.y"
                        { (yyval.tval) = builtin_type (current_gdbarch)->builtin_unsigned_long; }
#line 2445 "c-exp.c.tmp"
    break;

  case 110: /* typebase: LONG LONG  */
#line 828 "c-exp.y"
                        { (yyval.tval) = builtin_type (current_gdbarch)->builtin_long_long; }
#line 2451 "c-exp.c.tmp"
    break;

  case 111: /* typebase: LONG LONG INT_KEYWORD  */
#line 830 "c-exp.y"
                        { (yyval.tval) = builtin_type (current_gdbarch)->builtin_long_long; }
#line 2457 "c-exp.c.tmp"
    break;

  case 112: /* typebase: LONG LONG SIGNED_KEYWORD INT_KEYWORD  */
#line 832 "c-exp.y"
                        { (yyval.tval) = builtin_type (current_gdbarch)->builtin_long_long; }
#line 2463 "c-exp.c.tmp"
    break;

  case 113: /* typebase: LONG LONG SIGNED_KEYWORD  */
#line 834 "c-exp.y"
                        { (yyval.tval) = builtin_type (current_gdbarch)->builtin_long_long; }
#line 2469 "c-exp.c.tmp"
    break;

  case 114: /* typebase: SIGNED_KEYWORD LONG LONG  */
#line 836 "c-exp.y"
                        { (yyval.tval) = builtin_type (current_gdbarch)->builtin_long_long; }
#line 2475 "c-exp.c.tmp"
    break;

  case 115: /* typebase: SIGNED_KEYWORD LONG LONG INT_KEYWORD  */
#line 838 "c-exp.y"
                        { (yyval.tval) = builtin_type (current_gdbarch)->builtin_long_long; }
#line 2481 "c-exp.c.tmp"
    break;

  case 116: /* typebase: UNSIGNED LONG LONG  */
#line 840 "c-exp.y"
                        { (yyval.tval) = builtin_type (current_gdbarch)->builtin_unsigned_long_long; }
#line 2487 "c-exp.c.tmp"
    break;

  case 117: /* typebase: UNSIGNED LONG LONG INT_KEYWORD  */
#line 842 "c-exp.y"
                        { (yyval.tval) = builtin_type (current_gdbarch)->builtin_unsigned_long_long; }
#line 2493 "c-exp.c.tmp"
    break;

  case 118: /* typebase: LONG LONG UNSIGNED  */
#line 844 "c-exp.y"
                        { (yyval.tval) = builtin_type (current_gdbarch)->builtin_unsigned_long_long; }
#line 2499 "c-exp.c.tmp"
    break;

  case 119: /* typebase: LONG LONG UNSIGNED INT_KEYWORD  */
#line 846 "c-exp.y"
                        { (yyval.tval) = builtin_type (current_gdbarch)->builtin_unsigned_long_long; }
#line 2505 "c-exp.c.tmp"
    break;

  case 120: /* typebase: SHORT INT_KEYWORD  */
#line 848 "c-exp.y"
                        { (yyval.tval) = builtin_type (current_gdbarch)->builtin_short; }
#line 2511 "c-exp.c.tmp"
    break;

  case 121: /* typebase: SHORT SIGNED_KEYWORD INT_KEYWORD  */
#line 850 "c-exp.y"
                        { (yyval.tval) = builtin_type (current_gdbarch)->builtin_short; }
#line 2517 "c-exp.c.tmp"
    break;

  case 122: /* typebase: SHORT SIGNED_KEYWORD  */
#line 852 "c-exp.y"
                        { (yyval.tval) = builtin_type (current_gdbarch)->builtin_short; }
#line 2523 "c-exp.c.tmp"
    break;

  case 123: /* typebase: UNSIGNED SHORT INT_KEYWORD  */
#line 854 "c-exp.y"
                        { (yyval.tval) = builtin_type (current_gdbarch)->builtin_unsigned_short; }
#line 2529 "c-exp.c.tmp"
    break;

  case 124: /* typebase: SHORT UNSIGNED  */
#line 856 "c-exp.y"
                        { (yyval.tval) = builtin_type (current_gdbarch)->builtin_unsigned_short; }
#line 2535 "c-exp.c.tmp"
    break;

  case 125: /* typebase: SHORT UNSIGNED INT_KEYWORD  */
#line 858 "c-exp.y"
                        { (yyval.tval) = builtin_type (current_gdbarch)->builtin_unsigned_short; }
#line 2541 "c-exp.c.tmp"
    break;

  case 126: /* typebase: DOUBLE_KEYWORD  */
#line 860 "c-exp.y"
                        { (yyval.tval) = builtin_type (current_gdbarch)->builtin_double; }
#line 2547 "c-exp.c.tmp"
    break;

  case 127: /* typebase: LONG DOUBLE_KEYWORD  */
#line 862 "c-exp.y"
                        { (yyval.tval) = builtin_type (current_gdbarch)->builtin_long_double; }
#line 2553 "c-exp.c.tmp"
    break;

  case 128: /* typebase: STRUCT name  */
#line 864 "c-exp.y"
                        { (yyval.tval) = lookup_struct (copy_name ((yyvsp[0].sval)),
					      expression_context_block); }
#line 2560 "c-exp.c.tmp"
    break;

  case 129: /* typebase: CLASS name  */
#line 867 "c-exp.y"
                        { (yyval.tval) = lookup_struct (copy_name ((yyvsp[0].sval)),
					      expression_context_block); }
#line 2567 "c-exp.c.tmp"
    break;

  case 130: /* typebase: UNION name  */
#line 870 "c-exp.y"
                        { (yyval.tval) = lookup_union (copy_name ((yyvsp[0].sval)),
					     expression_context_block); }
#line 2574 "c-exp.c.tmp"
    break;

  case 131: /* typebase: ENUM name  */
#line 873 "c-exp.y"
                        { (yyval.tval) = lookup_enum (copy_name ((yyvsp[0].sval)),
					    expression_context_block); }
#line 2581 "c-exp.c.tmp"
    break;

  case 132: /* typebase: UNSIGNED typename  */
#line 876 "c-exp.y"
                        { (yyval.tval) = lookup_unsigned_typename (TYPE_NAME((yyvsp[0].tsym).type)); }
#line 2587 "c-exp.c.tmp"
    break;

  case 133: /* typebase: UNSIGNED  */
#line 878 "c-exp.y"
                        { (yyval.tval) = builtin_type (current_gdbarch)->builtin_unsigned_int; }
#line 2593 "c-exp.c.tmp"
    break;

  case 134: /* typebase: SIGNED_KEYWORD typename  */
#line 880 "c-exp.y"
                        { (yyval.tval) = lookup_signed_typename (TYPE_NAME((yyvsp[0].tsym).type)); }
#line 2599 "c-exp.c.tmp"
    break;

  case 135: /* typebase: SIGNED_KEYWORD  */
#line 882 "c-exp.y"
                        { (yyval.tval) = builtin_type (current_gdbarch)->builtin_int; }
#line 2605 "c-exp.c.tmp"
    break;

  case 136: /* typebase: TEMPLATE name '<' type '>'  */
#line 887 "c-exp.y"
                        { (yyval.tval) = lookup_template_type(copy_name((yyvsp[-3].sval)), (yyvsp[-1].tval),
						    expression_context_block);
			}
#line 2613 "c-exp.c.tmp"
    break;

  case 137: /* typebase: const_or_volatile_or_space_identifier_noopt typebase  */
#line 891 "c-exp.y"
                        { (yyval.tval) = follow_types ((yyvsp[0].tval)); }
#line 2619 "c-exp.c.tmp"
    break;

  case 138: /* typebase: typebase const_or_volatile_or_space_identifier_noopt  */
#line 893 "c-exp.y"
                        { (yyval.tval) = follow_types ((yyvsp[-1].tval)); }
#line 2625 "c-exp.c.tmp"
    break;

  case 140: /* qualified_type: typebase COLONCOLON name  */
#line 943 "c-exp.y"
                {
		  struct type *type = (yyvsp[-2].tval);
		  struct type *new_type;
		  char *ncopy = alloca ((yyvsp[0].sval).length + 1);

		  memcpy (ncopy, (yyvsp[0].sval).ptr, (yyvsp[0].sval).length);
		  ncopy[(yyvsp[0].sval).length] = '\0';

		  if (TYPE_CODE (type) != TYPE_CODE_STRUCT
		      && TYPE_CODE (type) != TYPE_CODE_UNION
		      && TYPE_CODE (type) != TYPE_CODE_NAMESPACE)
		    error ("`%s' is not defined as an aggregate type.",
			   TYPE_NAME (type));

		  new_type = cp_lookup_nested_type (type, ncopy,
						    expression_context_block);
		  if (new_type == NULL)
		    error ("No type \"%s\" within class or namespace \"%s\".",
			   ncopy, TYPE_NAME (type));
		  
		  (yyval.tval) = new_type;
		}
#line 2652 "c-exp.c.tmp"
    break;

  case 142: /* typename: INT_KEYWORD  */
#line 969 "c-exp.y"
                {
		  (yyval.tsym).stoken.ptr = "int";
		  (yyval.tsym).stoken.length = 3;
		  (yyval.tsym).type = builtin_type (current_gdbarch)->builtin_int;
		}
#line 2662 "c-exp.c.tmp"
    break;

  case 143: /* typename: LONG  */
#line 975 "c-exp.y"
                {
		  (yyval.tsym).stoken.ptr = "long";
		  (yyval.tsym).stoken.length = 4;
		  (yyval.tsym).type = builtin_type (current_gdbarch)->builtin_long;
		}
#line 2672 "c-exp.c.tmp"
    break;

  case 144: /* typename: SHORT  */
#line 981 "c-exp.y"
                {
		  (yyval.tsym).stoken.ptr = "short";
		  (yyval.tsym).stoken.length = 5;
		  (yyval.tsym).type = builtin_type (current_gdbarch)->builtin_short;
		}
#line 2682 "c-exp.c.tmp"
    break;

  case 145: /* nonempty_typelist: type  */
#line 990 "c-exp.y"
                { (yyval.tvec) = (struct type **) xmalloc (sizeof (struct type *) * 2);
		  (yyval.ivec)[0] = 1;	/* Number of types in vector */
		  (yyval.tvec)[1] = (yyvsp[0].tval);
		}
#line 2691 "c-exp.c.tmp"
    break;

  case 146: /* nonempty_typelist: nonempty_typelist ',' type  */
#line 995 "c-exp.y"
                { int len = sizeof (struct type *) * (++((yyvsp[-2].ivec)[0]) + 1);
		  (yyval.tvec) = (struct type **) xrealloc ((char *) (yyvsp[-2].tvec), len);
		  (yyval.tvec)[(yyval.ivec)[0]] = (yyvsp[0].tval);
		}
#line 2700 "c-exp.c.tmp"
    break;

  case 148: /* ptype: ptype const_or_volatile_or_space_identifier abs_decl const_or_volatile_or_space_identifier  */
#line 1003 "c-exp.y"
                { (yyval.tval) = follow_types ((yyvsp[-3].tval)); }
#line 2706 "c-exp.c.tmp"
    break;

  case 151: /* const_or_volatile_noopt: const_and_volatile  */
#line 1011 "c-exp.y"
                        { push_type (tp_const);
			  push_type (tp_volatile); 
			}
#line 2714 "c-exp.c.tmp"
    break;

  case 152: /* const_or_volatile_noopt: CONST_KEYWORD  */
#line 1015 "c-exp.y"
                        { push_type (tp_const); }
#line 2720 "c-exp.c.tmp"
    break;

  case 153: /* const_or_volatile_noopt: VOLATILE_KEYWORD  */
#line 1017 "c-exp.y"
                        { push_type (tp_volatile); }
#line 2726 "c-exp.c.tmp"
    break;

  case 154: /* name: NAME  */
#line 1020 "c-exp.y"
                     { (yyval.sval) = (yyvsp[0].ssym).stoken; }
#line 2732 "c-exp.c.tmp"
    break;

  case 155: /* name: BLOCKNAME  */
#line 1021 "c-exp.y"
                          { (yyval.sval) = (yyvsp[0].ssym).stoken; }
#line 2738 "c-exp.c.tmp"
    break;

  case 156: /* name: TYPENAME  */
#line 1022 "c-exp.y"
                         { (yyval.sval) = (yyvsp[0].tsym).stoken; }
#line 2744 "c-exp.c.tmp"
    break;

  case 157: /* name: NAME_OR_INT  */
#line 1023 "c-exp.y"
                             { (yyval.sval) = (yyvsp[0].ssym).stoken; }
#line 2750 "c-exp.c.tmp"
    break;


#line 2754 "c-exp.c.tmp"

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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

#line 1037 "c-exp.y"


/* Take care of parsing a number (anything that starts with a digit).
   Set yylval and return the token type; update lexptr.
   LEN is the number of characters in it.  */

/*** Needs some error checking for the float case ***/

static int
parse_number (p, len, parsed_float, putithere)
     char *p;
     int len;
     int parsed_float;
     YYSTYPE *putithere;
{
  /* FIXME: Shouldn't these be unsigned?  We don't deal with negative values
     here, and we do kind of silly things like cast to unsigned.  */
  LONGEST n = 0;
  LONGEST prevn = 0;
  ULONGEST un;

  int i = 0;
  int c;
  int base = input_radix;
  int unsigned_p = 0;

  /* Number of "L" suffixes encountered.  */
  int long_p = 0;

  /* We have found a "L" or "U" suffix.  */
  int found_suffix = 0;

  ULONGEST high_bit;
  struct type *signed_type;
  struct type *unsigned_type;

  if (parsed_float)
    {
      /* It's a float since it contains a point or an exponent.  */
      char *s = xmalloc (len);
      int num = 0;	/* number of tokens scanned by scanf */
      char saved_char = p[len];

      p[len] = 0;	/* null-terminate the token */
      num = sscanf (p, DOUBLEST_SCAN_FORMAT "%s",
		    &putithere->typed_val_float.dval, s);
      p[len] = saved_char;	/* restore the input stream */

      if (num == 1)
	putithere->typed_val_float.type = 
	  builtin_type (current_gdbarch)->builtin_double;

      if (num == 2 )
	{
	  /* See if it has any float suffix: 'f' for float, 'l' for long 
	     double.  */
	  if (!strcasecmp (s, "f"))
	    putithere->typed_val_float.type = 
	      builtin_type (current_gdbarch)->builtin_float;
	  else if (!strcasecmp (s, "l"))
	    putithere->typed_val_float.type = 
	      builtin_type (current_gdbarch)->builtin_long_double;
	  else
	    return ERROR;
	}

      return FLOAT;
    }

  /* Handle base-switching prefixes 0x, 0t, 0d, 0 */
  if (p[0] == '0')
    switch (p[1])
      {
      case 'x':
      case 'X':
	if (len >= 3)
	  {
	    p += 2;
	    base = 16;
	    len -= 2;
	  }
	break;

      case 't':
      case 'T':
      case 'd':
      case 'D':
	if (len >= 3)
	  {
	    p += 2;
	    base = 10;
	    len -= 2;
	  }
	break;

      default:
	base = 8;
	break;
      }

  while (len-- > 0)
    {
      c = *p++;
      if (c >= 'A' && c <= 'Z')
	c += 'a' - 'A';
      if (c != 'l' && c != 'u')
	n *= base;
      if (c >= '0' && c <= '9')
	{
	  if (found_suffix)
	    return ERROR;
	  n += i = c - '0';
	}
      else
	{
	  if (base > 10 && c >= 'a' && c <= 'f')
	    {
	      if (found_suffix)
		return ERROR;
	      n += i = c - 'a' + 10;
	    }
	  else if (c == 'l')
	    {
	      ++long_p;
	      found_suffix = 1;
	    }
	  else if (c == 'u')
	    {
	      unsigned_p = 1;
	      found_suffix = 1;
	    }
	  else
	    return ERROR;	/* Char not a digit */
	}
      if (i >= base)
	return ERROR;		/* Invalid digit in this base */

      /* Portably test for overflow (only works for nonzero values, so make
	 a second check for zero).  FIXME: Can't we just make n and prevn
	 unsigned and avoid this?  */
      if (c != 'l' && c != 'u' && (prevn >= n) && n != 0)
	unsigned_p = 1;		/* Try something unsigned */

      /* Portably test for unsigned overflow.
	 FIXME: This check is wrong; for example it doesn't find overflow
	 on 0x123456789 when LONGEST is 32 bits.  */
      if (c != 'l' && c != 'u' && n != 0)
	{	
	  if ((unsigned_p && (ULONGEST) prevn >= (ULONGEST) n))
	    error ("Numeric constant too large.");
	}
      prevn = n;
    }

  /* An integer constant is an int, a long, or a long long.  An L
     suffix forces it to be long; an LL suffix forces it to be long
     long.  If not forced to a larger size, it gets the first type of
     the above that it fits in.  To figure out whether it fits, we
     shift it right and see whether anything remains.  Note that we
     can't shift sizeof (LONGEST) * HOST_CHAR_BIT bits or more in one
     operation, because many compilers will warn about such a shift
     (which always produces a zero result).  Sometimes TARGET_INT_BIT
     or TARGET_LONG_BIT will be that big, sometimes not.  To deal with
     the case where it is we just always shift the value more than
     once, with fewer bits each time.  */

  un = (ULONGEST)n >> 2;
  if (long_p == 0
      && (un >> (TARGET_INT_BIT - 2)) == 0)
    {
      high_bit = ((ULONGEST)1) << (TARGET_INT_BIT-1);

      /* A large decimal (not hex or octal) constant (between INT_MAX
	 and UINT_MAX) is a long or unsigned long, according to ANSI,
	 never an unsigned int, but this code treats it as unsigned
	 int.  This probably should be fixed.  GCC gives a warning on
	 such constants.  */

      unsigned_type = builtin_type (current_gdbarch)->builtin_unsigned_int;
      signed_type = builtin_type (current_gdbarch)->builtin_int;
    }
  else if (long_p <= 1
	   && (un >> (TARGET_LONG_BIT - 2)) == 0)
    {
      high_bit = ((ULONGEST)1) << (TARGET_LONG_BIT-1);
      unsigned_type = builtin_type (current_gdbarch)->builtin_unsigned_long;
      signed_type = builtin_type (current_gdbarch)->builtin_long;
    }
  else
    {
      int shift;
      if (sizeof (ULONGEST) * HOST_CHAR_BIT < TARGET_LONG_LONG_BIT)
	/* A long long does not fit in a LONGEST.  */
	shift = (sizeof (ULONGEST) * HOST_CHAR_BIT - 1);
      else
	shift = (TARGET_LONG_LONG_BIT - 1);
      high_bit = (ULONGEST) 1 << shift;
      unsigned_type = builtin_type (current_gdbarch)->builtin_unsigned_long_long;
      signed_type = builtin_type (current_gdbarch)->builtin_long_long;
    }

   putithere->typed_val_int.val = n;

   /* If the high bit of the worked out type is set then this number
      has to be unsigned. */

   if (unsigned_p || (n & high_bit)) 
     {
       putithere->typed_val_int.type = unsigned_type;
     }
   else 
     {
       putithere->typed_val_int.type = signed_type;
     }

   return INT;
}

struct token
{
  char *operator;
  int token;
  enum exp_opcode opcode;
};

static const struct token tokentab3[] =
  {
    {">>=", ASSIGN_MODIFY, BINOP_RSH},
    {"<<=", ASSIGN_MODIFY, BINOP_LSH}
  };

static const struct token tokentab2[] =
  {
    {"+=", ASSIGN_MODIFY, BINOP_ADD},
    {"-=", ASSIGN_MODIFY, BINOP_SUB},
    {"*=", ASSIGN_MODIFY, BINOP_MUL},
    {"/=", ASSIGN_MODIFY, BINOP_DIV},
    {"%=", ASSIGN_MODIFY, BINOP_REM},
    {"|=", ASSIGN_MODIFY, BINOP_BITWISE_IOR},
    {"&=", ASSIGN_MODIFY, BINOP_BITWISE_AND},
    {"^=", ASSIGN_MODIFY, BINOP_BITWISE_XOR},
    {"++", INCREMENT, BINOP_END},
    {"--", DECREMENT, BINOP_END},
    {"->", ARROW, BINOP_END},
    {"&&", ANDAND, BINOP_END},
    {"||", OROR, BINOP_END},
    {"::", COLONCOLON, BINOP_END},
    {"<<", LSH, BINOP_END},
    {">>", RSH, BINOP_END},
    {"==", EQUAL, BINOP_END},
    {"!=", NOTEQUAL, BINOP_END},
    {"<=", LEQ, BINOP_END},
    {">=", GEQ, BINOP_END}
  };

/* Read one token, getting characters through lexptr.  */

static int
yylex ()
{
  int c;
  int namelen;
  unsigned int i;
  char *tokstart;
  char *tokptr;
  int tempbufindex;
  static char *tempbuf;
  static int tempbufsize;
  struct symbol * sym_class = NULL;
  char * token_string = NULL;
  int class_prefix = 0;
  int unquoted_expr;
   
 retry:

  /* Check if this is a macro invocation that we need to expand.  */
  if (! scanning_macro_expansion ())
    {
      char *expanded = macro_expand_next (&lexptr,
                                          expression_macro_lookup_func,
                                          expression_macro_lookup_baton);

      if (expanded)
        scan_macro_expansion (expanded);
    }

  prev_lexptr = lexptr;
  unquoted_expr = 1;

  tokstart = lexptr;
  /* See if it is a special token of length 3.  */
  for (i = 0; i < sizeof tokentab3 / sizeof tokentab3[0]; i++)
    if (strncmp (tokstart, tokentab3[i].operator, 3) == 0)
      {
	lexptr += 3;
	yylval.opcode = tokentab3[i].opcode;
	return tokentab3[i].token;
      }

  /* See if it is a special token of length 2.  */
  for (i = 0; i < sizeof tokentab2 / sizeof tokentab2[0]; i++)
    if (strncmp (tokstart, tokentab2[i].operator, 2) == 0)
      {
	lexptr += 2;
	yylval.opcode = tokentab2[i].opcode;
	return tokentab2[i].token;
      }

  switch (c = *tokstart)
    {
    case 0:
      /* If we were just scanning the result of a macro expansion,
         then we need to resume scanning the original text.
         Otherwise, we were already scanning the original text, and
         we're really done.  */
      if (scanning_macro_expansion ())
        {
          finished_macro_expansion ();
          goto retry;
        }
      else
        return 0;

    case ' ':
    case '\t':
    case '\n':
      lexptr++;
      goto retry;

    case '\'':
      /* We either have a character constant ('0' or '\177' for example)
	 or we have a quoted symbol reference ('foo(int,int)' in C++
	 for example). */
      lexptr++;
      c = *lexptr++;
      if (c == '\\')
	c = parse_escape (&lexptr);
      else if (c == '\'')
	error ("Empty character constant.");
      else if (! host_char_to_target (c, &c))
        {
          int toklen = lexptr - tokstart + 1;
          char *tok = alloca (toklen + 1);
          memcpy (tok, tokstart, toklen);
          tok[toklen] = '\0';
          error ("There is no character corresponding to %s in the target "
                 "character set `%s'.", tok, target_charset ());
        }

      yylval.typed_val_int.val = c;
      yylval.typed_val_int.type = builtin_type (current_gdbarch)->builtin_char;

      c = *lexptr++;
      if (c != '\'')
	{
	  namelen = skip_quoted (tokstart) - tokstart;
	  if (namelen > 2)
	    {
	      lexptr = tokstart + namelen;
              unquoted_expr = 0;
	      if (lexptr[-1] != '\'')
		error ("Unmatched single quote.");
	      namelen -= 2;
	      tokstart++;
	      goto tryname;
	    }
	  error ("Invalid character constant.");
	}
      return INT;

    case '(':
      paren_depth++;
      lexptr++;
      return c;

    case ')':
      if (paren_depth == 0)
	return 0;
      paren_depth--;
      lexptr++;
      return c;

    case ',':
      if (comma_terminates
          && paren_depth == 0
          && ! scanning_macro_expansion ())
	return 0;
      lexptr++;
      return c;

    case '.':
      /* Might be a floating point number.  */
      if (lexptr[1] < '0' || lexptr[1] > '9')
	goto symbol;		/* Nope, must be a symbol. */
      /* FALL THRU into number case.  */

    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      {
	/* It's a number.  */
	int got_dot = 0, got_e = 0, toktype;
	char *p = tokstart;
	int hex = input_radix > 10;

	if (c == '0' && (p[1] == 'x' || p[1] == 'X'))
	  {
	    p += 2;
	    hex = 1;
	  }
	else if (c == '0' && (p[1]=='t' || p[1]=='T' || p[1]=='d' || p[1]=='D'))
	  {
	    p += 2;
	    hex = 0;
	  }

	for (;; ++p)
	  {
	    /* This test includes !hex because 'e' is a valid hex digit
	       and thus does not indicate a floating point number when
	       the radix is hex.  */
	    if (!hex && !got_e && (*p == 'e' || *p == 'E'))
	      got_dot = got_e = 1;
	    /* This test does not include !hex, because a '.' always indicates
	       a decimal floating point number regardless of the radix.  */
	    else if (!got_dot && *p == '.')
	      got_dot = 1;
	    else if (got_e && (p[-1] == 'e' || p[-1] == 'E')
		     && (*p == '-' || *p == '+'))
	      /* This is the sign of the exponent, not the end of the
		 number.  */
	      continue;
	    /* We will take any letters or digits.  parse_number will
	       complain if past the radix, or if L or U are not final.  */
	    else if ((*p < '0' || *p > '9')
		     && ((*p < 'a' || *p > 'z')
				  && (*p < 'A' || *p > 'Z')))
	      break;
	  }
	toktype = parse_number (tokstart, p - tokstart, got_dot|got_e, &yylval);
        if (toktype == ERROR)
	  {
	    char *err_copy = (char *) alloca (p - tokstart + 1);

	    memcpy (err_copy, tokstart, p - tokstart);
	    err_copy[p - tokstart] = 0;
	    error ("Invalid number \"%s\".", err_copy);
	  }
	lexptr = p;
	return toktype;
      }

    case '+':
    case '-':
    case '*':
    case '/':
    case '%':
    case '|':
    case '&':
    case '^':
    case '~':
    case '!':
    case '@':
    case '<':
    case '>':
    case '[':
    case ']':
    case '?':
    case ':':
    case '=':
    case '{':
    case '}':
    symbol:
      lexptr++;
      return c;

    case '"':

      /* Build the gdb internal form of the input string in tempbuf,
	 translating any standard C escape forms seen.  Note that the
	 buffer is null byte terminated *only* for the convenience of
	 debugging gdb itself and printing the buffer contents when
	 the buffer contains no embedded nulls.  Gdb does not depend
	 upon the buffer being null byte terminated, it uses the length
	 string instead.  This allows gdb to handle C strings (as well
	 as strings in other languages) with embedded null bytes */

      tokptr = ++tokstart;
      tempbufindex = 0;

      do {
        char *char_start_pos = tokptr;

	/* Grow the static temp buffer if necessary, including allocating
	   the first one on demand. */
	if (tempbufindex + 1 >= tempbufsize)
	  {
	    tempbuf = (char *) xrealloc (tempbuf, tempbufsize += 64);
	  }
	switch (*tokptr)
	  {
	  case '\0':
	  case '"':
	    /* Do nothing, loop will terminate. */
	    break;
	  case '\\':
	    tokptr++;
	    c = parse_escape (&tokptr);
	    if (c == -1)
	      {
		continue;
	      }
	    tempbuf[tempbufindex++] = c;
	    break;
	  default:
	    c = *tokptr++;
            if (! host_char_to_target (c, &c))
              {
                int len = tokptr - char_start_pos;
                char *copy = alloca (len + 1);
                memcpy (copy, char_start_pos, len);
                copy[len] = '\0';

                error ("There is no character corresponding to `%s' "
                       "in the target character set `%s'.",
                       copy, target_charset ());
              }
            tempbuf[tempbufindex++] = c;
	    break;
	  }
      } while ((*tokptr != '"') && (*tokptr != '\0'));
      if (*tokptr++ != '"')
	{
	  error ("Unterminated string in expression.");
	}
      tempbuf[tempbufindex] = '\0';	/* See note above */
      yylval.sval.ptr = tempbuf;
      yylval.sval.length = tempbufindex;
      lexptr = tokptr;
      return (STRING);
    }

  if (!(c == '_' || c == '$'
	|| (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
    /* We must have come across a bad character (e.g. ';').  */
    error ("Invalid character '%c' in expression.", c);

  /* It's a name.  See how long it is.  */
  namelen = 0;
  for (c = tokstart[namelen];
       (c == '_' || c == '$' || (c >= '0' && c <= '9')
	|| (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == '<');)
    {
      /* Template parameter lists are part of the name.
	 FIXME: This mishandles `print $a<4&&$a>3'.  */

      if (c == '<')
	{ 
               /* Scan ahead to get rest of the template specification.  Note
                  that we look ahead only when the '<' adjoins non-whitespace
                  characters; for comparison expressions, e.g. "a < b > c",
                  there must be spaces before the '<', etc. */
               
               char * p = find_template_name_end (tokstart + namelen);
               if (p)
                 namelen = p - tokstart;
               break;
	}
      c = tokstart[++namelen];
    }

  /* The token "if" terminates the expression and is NOT removed from
     the input stream.  It doesn't count if it appears in the
     expansion of a macro.  */
  if (namelen == 2
      && tokstart[0] == 'i'
      && tokstart[1] == 'f'
      && ! scanning_macro_expansion ())
    {
      return 0;
    }

  lexptr += namelen;

  tryname:

  /* Catch specific keywords.  Should be done with a data structure.  */
  switch (namelen)
    {
    case 8:
      if (strncmp (tokstart, "unsigned", 8) == 0)
	return UNSIGNED;
      if (current_language->la_language == language_cplus
	  && strncmp (tokstart, "template", 8) == 0)
	return TEMPLATE;
      if (strncmp (tokstart, "volatile", 8) == 0)
	return VOLATILE_KEYWORD;
      break;
    case 6:
      if (strncmp (tokstart, "struct", 6) == 0)
	return STRUCT;
      if (strncmp (tokstart, "signed", 6) == 0)
	return SIGNED_KEYWORD;
      if (strncmp (tokstart, "sizeof", 6) == 0)
	return SIZEOF;
      if (strncmp (tokstart, "double", 6) == 0)
	return DOUBLE_KEYWORD;
      break;
    case 5:
      if (current_language->la_language == language_cplus)
        {
          if (strncmp (tokstart, "false", 5) == 0)
            return FALSEKEYWORD;
          if (strncmp (tokstart, "class", 5) == 0)
            return CLASS;
        }
      if (strncmp (tokstart, "union", 5) == 0)
	return UNION;
      if (strncmp (tokstart, "short", 5) == 0)
	return SHORT;
      if (strncmp (tokstart, "const", 5) == 0)
	return CONST_KEYWORD;
      break;
    case 4:
      if (strncmp (tokstart, "enum", 4) == 0)
	return ENUM;
      if (strncmp (tokstart, "long", 4) == 0)
	return LONG;
      if (current_language->la_language == language_cplus)
          {
            if (strncmp (tokstart, "true", 4) == 0)
              return TRUEKEYWORD;
          }
      break;
    case 3:
      if (strncmp (tokstart, "int", 3) == 0)
	return INT_KEYWORD;
      break;
    default:
      break;
    }

  yylval.sval.ptr = tokstart;
  yylval.sval.length = namelen;

  if (*tokstart == '$')
    {
      write_dollar_variable (yylval.sval);
      return VARIABLE;
    }
  
  /* Look ahead and see if we can consume more of the input
     string to get a reasonable class/namespace spec or a
     fully-qualified name.  This is a kludge to get around the
     HP aCC compiler's generation of symbol names with embedded
     colons for namespace and nested classes. */

  /* NOTE: carlton/2003-09-24: I don't entirely understand the
     HP-specific code, either here or in linespec.  Having said that,
     I suspect that we're actually moving towards their model: we want
     symbols whose names are fully qualified, which matches the
     description above.  */
  if (unquoted_expr)
    {
      /* Only do it if not inside single quotes */ 
      sym_class = parse_nested_classes_for_hpacc (yylval.sval.ptr, yylval.sval.length,
                                                  &token_string, &class_prefix, &lexptr);
      if (sym_class)
        {
          /* Replace the current token with the bigger one we found */ 
          yylval.sval.ptr = token_string;
          yylval.sval.length = strlen (token_string);
        }
    }
  
  /* Use token-type BLOCKNAME for symbols that happen to be defined as
     functions or symtabs.  If this is not so, then ...
     Use token-type TYPENAME for symbols that happen to be defined
     currently as names of types; NAME for other symbols.
     The caller is not constrained to care about the distinction.  */
  {
    char *tmp = copy_name (yylval.sval);
    struct symbol *sym;
    int is_a_field_of_this = 0;
    int hextype;

    sym = lookup_symbol (tmp, expression_context_block,
			 VAR_DOMAIN,
			 current_language->la_language == language_cplus
			 ? &is_a_field_of_this : (int *) NULL,
			 (struct symtab **) NULL);
    /* Call lookup_symtab, not lookup_partial_symtab, in case there are
       no psymtabs (coff, xcoff, or some future change to blow away the
       psymtabs once once symbols are read).  */
    if (sym && SYMBOL_CLASS (sym) == LOC_BLOCK)
      {
	yylval.ssym.sym = sym;
	yylval.ssym.is_a_field_of_this = is_a_field_of_this;
	return BLOCKNAME;
      }
    else if (!sym)
      {				/* See if it's a file name. */
	struct symtab *symtab;

	symtab = lookup_symtab (tmp);

	if (symtab)
	  {
	    yylval.bval = BLOCKVECTOR_BLOCK (BLOCKVECTOR (symtab), STATIC_BLOCK);
	    return FILENAME;
	  }
      }

    if (sym && SYMBOL_CLASS (sym) == LOC_TYPEDEF)
        {
	  /* NOTE: carlton/2003-09-25: There used to be code here to
	     handle nested types.  It didn't work very well.  See the
	     comment before qualified_type for more info.  */
	  yylval.tsym.type = SYMBOL_TYPE (sym);
	  return TYPENAME;
        }
    yylval.tsym.type
      = language_lookup_primitive_type_by_name (current_language,
						current_gdbarch, tmp);
    if (yylval.tsym.type != NULL)
      return TYPENAME;

    /* Input names that aren't symbols but ARE valid hex numbers,
       when the input radix permits them, can be names or numbers
       depending on the parse.  Note we support radixes > 16 here.  */
    if (!sym && 
        ((tokstart[0] >= 'a' && tokstart[0] < 'a' + input_radix - 10) ||
         (tokstart[0] >= 'A' && tokstart[0] < 'A' + input_radix - 10)))
      {
 	YYSTYPE newlval;	/* Its value is ignored.  */
	hextype = parse_number (tokstart, namelen, 0, &newlval);
	if (hextype == INT)
	  {
	    yylval.ssym.sym = sym;
	    yylval.ssym.is_a_field_of_this = is_a_field_of_this;
	    return NAME_OR_INT;
	  }
      }

    /* Any other kind of symbol */
    yylval.ssym.sym = sym;
    yylval.ssym.is_a_field_of_this = is_a_field_of_this;
    return NAME;
  }
}

void
yyerror (msg)
     char *msg;
{
  if (prev_lexptr)
    lexptr = prev_lexptr;

  error ("A %s in expression, near `%s'.", (msg ? msg : "error"), lexptr);
}

/* A Bison parser, made by GNU Bison 3.5.1.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         HSQL_STYPE
#define YYLTYPE         HSQL_LTYPE
/* Substitute the variable and function names.  */
#define yyparse         hsql_parse
#define yylex           hsql_lex
#define yyerror         hsql_error
#define yydebug         hsql_debug
#define yynerrs         hsql_nerrs

/* First part of user prologue.  */
#line 1 "bison_parser.y"

/**
 * bison_parser.y
 * defines bison_parser.h
 * outputs bison_parser.c
 *
 * Grammar File Spec: http://dinosaur.compilertools.net/bison/bison_6.html
 *
 */
/*********************************
 ** Section 1: C Declarations
 *********************************/

#include "../msvc_hack.h"
#include "bison_parser.h"
#include "flex_lexer.h"

#include <stdio.h>
#include <string.h>

using namespace hsql;

int yyerror(YYLTYPE* llocp, SQLParserResult* result, yyscan_t scanner, const char *msg) {
	result->setIsValid(false);
	result->setErrorDetails(strdup(msg), llocp->first_line, llocp->first_column);
	return 0;
}


#line 107 "bison_parser.cpp"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_HSQL_BISON_PARSER_H_INCLUDED
# define YY_HSQL_BISON_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef HSQL_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define HSQL_DEBUG 1
#  else
#   define HSQL_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define HSQL_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined HSQL_DEBUG */
#if HSQL_DEBUG
extern int hsql_debug;
#endif
/* "%code requires" blocks.  */
#line 36 "bison_parser.y"

// %code requires block

#include "sql/statements.h"
#include "SQLParserResult.h"
#include "parser_typedef.h"

// Auto update column and line number
#define YY_USER_ACTION \
		yylloc->first_line = yylloc->last_line; \
		yylloc->first_column = yylloc->last_column; \
		for(int i = 0; yytext[i] != '\0'; i++) { \
			yylloc->total_column++; \
			yylloc->string_length++; \
				if(yytext[i] == '\n') { \
						yylloc->last_line++; \
						yylloc->last_column = 0; \
				} \
				else { \
						yylloc->last_column++; \
				} \
		}

#line 182 "bison_parser.cpp"

/* Token type.  */
#ifndef HSQL_TOKENTYPE
# define HSQL_TOKENTYPE
  enum hsql_tokentype
  {
    SQL_IDENTIFIER = 258,
    SQL_STRING = 259,
    SQL_FLOATVAL = 260,
    SQL_INTVAL = 261,
    SQL_DEALLOCATE = 262,
    SQL_PARAMETERS = 263,
    SQL_INTERSECT = 264,
    SQL_TEMPORARY = 265,
    SQL_TIMESTAMP = 266,
    SQL_DISTINCT = 267,
    SQL_NVARCHAR = 268,
    SQL_RESTRICT = 269,
    SQL_TRUNCATE = 270,
    SQL_ANALYZE = 271,
    SQL_BETWEEN = 272,
    SQL_CASCADE = 273,
    SQL_COLUMNS = 274,
    SQL_CONTROL = 275,
    SQL_DEFAULT = 276,
    SQL_EXECUTE = 277,
    SQL_EXPLAIN = 278,
    SQL_INTEGER = 279,
    SQL_NATURAL = 280,
    SQL_PREPARE = 281,
    SQL_PRIMARY = 282,
    SQL_SCHEMAS = 283,
    SQL_SPATIAL = 284,
    SQL_VARCHAR = 285,
    SQL_VIRTUAL = 286,
    SQL_DESCRIBE = 287,
    SQL_BEFORE = 288,
    SQL_COLUMN = 289,
    SQL_CREATE = 290,
    SQL_DELETE = 291,
    SQL_DIRECT = 292,
    SQL_DOUBLE = 293,
    SQL_ESCAPE = 294,
    SQL_EXCEPT = 295,
    SQL_EXISTS = 296,
    SQL_EXTRACT = 297,
    SQL_CAST = 298,
    SQL_FORMAT = 299,
    SQL_GLOBAL = 300,
    SQL_HAVING = 301,
    SQL_IMPORT = 302,
    SQL_INSERT = 303,
    SQL_ISNULL = 304,
    SQL_OFFSET = 305,
    SQL_RENAME = 306,
    SQL_SCHEMA = 307,
    SQL_SELECT = 308,
    SQL_SORTED = 309,
    SQL_TABLES = 310,
    SQL_UNIQUE = 311,
    SQL_UNLOAD = 312,
    SQL_UPDATE = 313,
    SQL_VALUES = 314,
    SQL_AFTER = 315,
    SQL_ALTER = 316,
    SQL_CROSS = 317,
    SQL_DELTA = 318,
    SQL_FLOAT = 319,
    SQL_GROUP = 320,
    SQL_INDEX = 321,
    SQL_INNER = 322,
    SQL_LIMIT = 323,
    SQL_LOCAL = 324,
    SQL_MERGE = 325,
    SQL_MINUS = 326,
    SQL_ORDER = 327,
    SQL_OUTER = 328,
    SQL_RIGHT = 329,
    SQL_TABLE = 330,
    SQL_UNION = 331,
    SQL_USING = 332,
    SQL_WHERE = 333,
    SQL_CALL = 334,
    SQL_CASE = 335,
    SQL_CHAR = 336,
    SQL_COPY = 337,
    SQL_DATE = 338,
    SQL_DATETIME = 339,
    SQL_DESC = 340,
    SQL_DROP = 341,
    SQL_ELSE = 342,
    SQL_FILE = 343,
    SQL_FROM = 344,
    SQL_FULL = 345,
    SQL_HASH = 346,
    SQL_HINT = 347,
    SQL_INTO = 348,
    SQL_JOIN = 349,
    SQL_LEFT = 350,
    SQL_LIKE = 351,
    SQL_LOAD = 352,
    SQL_LONG = 353,
    SQL_NULL = 354,
    SQL_PLAN = 355,
    SQL_SHOW = 356,
    SQL_TEXT = 357,
    SQL_THEN = 358,
    SQL_TIME = 359,
    SQL_VIEW = 360,
    SQL_WHEN = 361,
    SQL_WITH = 362,
    SQL_ADD = 363,
    SQL_ALL = 364,
    SQL_AND = 365,
    SQL_ASC = 366,
    SQL_END = 367,
    SQL_FOR = 368,
    SQL_INT = 369,
    SQL_KEY = 370,
    SQL_NOT = 371,
    SQL_OFF = 372,
    SQL_SET = 373,
    SQL_TOP = 374,
    SQL_AS = 375,
    SQL_BY = 376,
    SQL_IF = 377,
    SQL_IN = 378,
    SQL_IS = 379,
    SQL_OF = 380,
    SQL_ON = 381,
    SQL_OR = 382,
    SQL_TO = 383,
    SQL_ARRAY = 384,
    SQL_CONCAT = 385,
    SQL_ILIKE = 386,
    SQL_SECOND = 387,
    SQL_MINUTE = 388,
    SQL_HOUR = 389,
    SQL_DAY = 390,
    SQL_MONTH = 391,
    SQL_YEAR = 392,
    SQL_TRUE = 393,
    SQL_FALSE = 394,
    SQL_TRANSACTION = 395,
    SQL_BEGIN = 396,
    SQL_COMMIT = 397,
    SQL_ROLLBACK = 398,
    SQL_EQUALS = 399,
    SQL_NOTEQUALS = 400,
    SQL_LESS = 401,
    SQL_GREATER = 402,
    SQL_LESSEQ = 403,
    SQL_GREATEREQ = 404,
    SQL_NOTNULL = 405,
    SQL_UMINUS = 406
  };
#endif

/* Value type.  */
#if ! defined HSQL_STYPE && ! defined HSQL_STYPE_IS_DECLARED
union HSQL_STYPE
{
#line 96 "bison_parser.y"

	double fval;
	int64_t ival;
	char* sval;
	uintmax_t uval;
	bool bval;

	hsql::SQLStatement* statement;
	hsql::SelectStatement* 	select_stmt;
	hsql::ImportStatement* 	import_stmt;
	hsql::ExportStatement* 	export_stmt;
	hsql::CreateStatement* 	create_stmt;
	hsql::InsertStatement* 	insert_stmt;
	hsql::DeleteStatement* 	delete_stmt;
	hsql::UpdateStatement* 	update_stmt;
	hsql::DropStatement*   	drop_stmt;
	hsql::PrepareStatement* prep_stmt;
	hsql::ExecuteStatement* exec_stmt;
	hsql::ShowStatement*    show_stmt;
	hsql::TransactionStatement* transaction_stmt;

	hsql::TableName table_name;
	hsql::TableRef* table;
	hsql::Expr* expr;
	hsql::OrderDescription* order;
	hsql::OrderType order_type;
	hsql::WithDescription* with_description_t;
	hsql::DatetimeField datetime_field;
	hsql::LimitDescription* limit;
	hsql::ColumnDefinition* column_t;
	hsql::ColumnType column_type_t;
	hsql::ImportType import_type_t;
	hsql::GroupByDescription* group_t;
	hsql::UpdateClause* update_t;
	hsql::Alias* alias_t;
	hsql::SetOperation* set_operator_t;

	std::vector<hsql::SQLStatement*>* stmt_vec;

	std::vector<char*>* str_vec;
	std::vector<hsql::TableRef*>* table_vec;
	std::vector<hsql::ColumnDefinition*>* column_vec;
	std::vector<hsql::UpdateClause*>* update_vec;
	std::vector<hsql::Expr*>* expr_vec;
	std::vector<hsql::OrderDescription*>* order_vec;
	std::vector<hsql::WithDescription*>* with_description_vec;

#line 393 "bison_parser.cpp"

};
typedef union HSQL_STYPE HSQL_STYPE;
# define HSQL_STYPE_IS_TRIVIAL 1
# define HSQL_STYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined HSQL_LTYPE && ! defined HSQL_LTYPE_IS_DECLARED
typedef struct HSQL_LTYPE HSQL_LTYPE;
struct HSQL_LTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define HSQL_LTYPE_IS_DECLARED 1
# define HSQL_LTYPE_IS_TRIVIAL 1
#endif



int hsql_parse (hsql::SQLParserResult* result, yyscan_t scanner);

#endif /* !YY_HSQL_BISON_PARSER_H_INCLUDED  */



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
         || (defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL \
             && defined HSQL_STYPE_IS_TRIVIAL && HSQL_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  62
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   721

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  169
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  106
/* YYNRULES -- Number of rules.  */
#define YYNRULES  262
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  474

#define YYUNDEFTOK  2
#define YYMAXUTOK   406


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   158,     2,     2,
     163,   164,   156,   154,   167,   155,   165,   157,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   166,
     147,   144,   148,   168,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   161,     2,   162,   159,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   145,
     146,   149,   150,   151,   152,   153,   160
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   270,   270,   291,   297,   306,   310,   314,   317,   320,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   344,
     345,   350,   351,   355,   359,   371,   374,   377,   383,   384,
     391,   398,   401,   405,   419,   425,   434,   451,   455,   458,
     467,   481,   484,   489,   503,   516,   523,   530,   541,   542,
     546,   547,   551,   557,   558,   559,   560,   561,   562,   563,
     564,   565,   566,   570,   571,   572,   582,   588,   594,   602,
     603,   612,   621,   634,   641,   652,   653,   663,   672,   673,
     677,   689,   693,   697,   711,   712,   715,   716,   727,   728,
     732,   742,   755,   762,   766,   770,   777,   780,   786,   798,
     799,   803,   807,   808,   812,   817,   818,   822,   827,   831,
     832,   836,   837,   841,   842,   846,   850,   851,   852,   858,
     859,   863,   864,   865,   866,   867,   868,   875,   876,   880,
     881,   885,   886,   890,   900,   901,   902,   903,   904,   908,
     909,   910,   911,   912,   913,   914,   915,   916,   917,   918,
     922,   923,   927,   928,   929,   930,   931,   935,   936,   937,
     938,   939,   940,   941,   942,   943,   944,   945,   949,   950,
     954,   955,   956,   957,   963,   964,   965,   966,   970,   971,
     975,   976,   980,   981,   982,   983,   984,   985,   986,   990,
     991,   995,   999,  1003,  1004,  1005,  1006,  1007,  1008,  1012,
    1016,  1020,  1024,  1025,  1026,  1027,  1031,  1032,  1033,  1034,
    1035,  1039,  1043,  1044,  1048,  1049,  1053,  1057,  1061,  1073,
    1074,  1084,  1085,  1089,  1090,  1099,  1100,  1105,  1116,  1125,
    1126,  1131,  1132,  1137,  1138,  1143,  1144,  1149,  1150,  1159,
    1160,  1164,  1168,  1172,  1179,  1192,  1200,  1210,  1229,  1230,
    1231,  1232,  1233,  1234,  1235,  1236,  1237,  1238,  1243,  1252,
    1253,  1258,  1259
};
#endif

#if HSQL_DEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING", "FLOATVAL",
  "INTVAL", "DEALLOCATE", "PARAMETERS", "INTERSECT", "TEMPORARY",
  "TIMESTAMP", "DISTINCT", "NVARCHAR", "RESTRICT", "TRUNCATE", "ANALYZE",
  "BETWEEN", "CASCADE", "COLUMNS", "CONTROL", "DEFAULT", "EXECUTE",
  "EXPLAIN", "INTEGER", "NATURAL", "PREPARE", "PRIMARY", "SCHEMAS",
  "SPATIAL", "VARCHAR", "VIRTUAL", "DESCRIBE", "BEFORE", "COLUMN",
  "CREATE", "DELETE", "DIRECT", "DOUBLE", "ESCAPE", "EXCEPT", "EXISTS",
  "EXTRACT", "CAST", "FORMAT", "GLOBAL", "HAVING", "IMPORT", "INSERT",
  "ISNULL", "OFFSET", "RENAME", "SCHEMA", "SELECT", "SORTED", "TABLES",
  "UNIQUE", "UNLOAD", "UPDATE", "VALUES", "AFTER", "ALTER", "CROSS",
  "DELTA", "FLOAT", "GROUP", "INDEX", "INNER", "LIMIT", "LOCAL", "MERGE",
  "MINUS", "ORDER", "OUTER", "RIGHT", "TABLE", "UNION", "USING", "WHERE",
  "CALL", "CASE", "CHAR", "COPY", "DATE", "DATETIME", "DESC", "DROP",
  "ELSE", "FILE", "FROM", "FULL", "HASH", "HINT", "INTO", "JOIN", "LEFT",
  "LIKE", "LOAD", "LONG", "NULL", "PLAN", "SHOW", "TEXT", "THEN", "TIME",
  "VIEW", "WHEN", "WITH", "ADD", "ALL", "AND", "ASC", "END", "FOR", "INT",
  "KEY", "NOT", "OFF", "SET", "TOP", "AS", "BY", "IF", "IN", "IS", "OF",
  "ON", "OR", "TO", "ARRAY", "CONCAT", "ILIKE", "SECOND", "MINUTE", "HOUR",
  "DAY", "MONTH", "YEAR", "TRUE", "FALSE", "TRANSACTION", "BEGIN",
  "COMMIT", "ROLLBACK", "'='", "EQUALS", "NOTEQUALS", "'<'", "'>'", "LESS",
  "GREATER", "LESSEQ", "GREATEREQ", "NOTNULL", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'^'", "UMINUS", "'['", "']'", "'('", "')'", "'.'", "';'", "','",
  "'?'", "$accept", "input", "statement_list", "statement",
  "preparable_statement", "opt_hints", "hint_list", "hint",
  "transaction_statement", "opt_transaction_keyword", "prepare_statement",
  "prepare_target_query", "execute_statement", "import_statement",
  "file_type", "file_path", "opt_file_type", "export_statement",
  "show_statement", "create_statement", "opt_not_exists",
  "column_def_commalist", "column_def", "column_type",
  "opt_column_nullable", "drop_statement", "opt_exists",
  "delete_statement", "truncate_statement", "insert_statement",
  "opt_column_list", "update_statement", "update_clause_commalist",
  "update_clause", "select_statement", "select_within_set_operation",
  "select_within_set_operation_no_parentheses", "select_with_paren",
  "select_no_paren", "set_operator", "set_type", "opt_all",
  "select_clause", "opt_distinct", "select_list", "opt_from_clause",
  "from_clause", "opt_where", "opt_group", "opt_having", "opt_order",
  "order_list", "order_desc", "opt_order_type", "opt_top", "opt_limit",
  "expr_list", "opt_literal_list", "literal_list", "expr_alias", "expr",
  "operand", "scalar_expr", "unary_expr", "binary_expr", "logic_expr",
  "in_expr", "case_expr", "case_list", "exists_expr", "comp_expr",
  "function_expr", "extract_expr", "cast_expr", "datetime_field",
  "array_expr", "array_index", "between_expr", "column_name", "literal",
  "string_literal", "bool_literal", "num_literal", "int_literal",
  "null_literal", "param_expr", "table_ref", "table_ref_atomic",
  "nonjoin_table_ref_atomic", "table_ref_commalist", "table_ref_name",
  "table_ref_name_no_alias", "table_name", "table_alias",
  "opt_table_alias", "alias", "opt_alias", "opt_with_clause",
  "with_clause", "with_description_list", "with_description",
  "join_clause", "opt_join_type", "join_condition", "opt_semicolon",
  "ident_commalist", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,    61,   399,   400,    60,    62,   401,
     402,   403,   404,   405,    43,    45,    42,    47,    37,    94,
     406,    91,    93,    40,    41,    46,    59,    44,    63
};
# endif

#define YYPACT_NINF (-318)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-260)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     511,     7,    39,   125,   147,    39,   -37,    71,    95,   103,
      39,    39,   -19,     6,   225,    96,    96,    96,   237,    72,
    -318,   150,  -318,   150,  -318,  -318,  -318,  -318,  -318,  -318,
    -318,  -318,  -318,  -318,  -318,    10,  -318,   246,   135,  -318,
      98,   190,  -318,   179,   179,    39,   307,    39,   195,  -318,
     -63,   192,   192,    39,  -318,   200,   158,  -318,  -318,  -318,
    -318,  -318,  -318,   506,  -318,   245,  -318,  -318,   219,    10,
      20,  -318,    26,  -318,   338,     9,   341,   226,    39,    39,
     268,  -318,   261,   189,   350,   351,   351,   313,    39,    39,
    -318,   194,   225,  -318,   196,   352,   349,   198,   199,  -318,
    -318,  -318,    10,   264,   254,    10,    45,  -318,  -318,  -318,
    -318,  -318,  -318,  -318,  -318,   212,   211,  -318,  -318,  -318,
    -318,  -318,  -318,  -318,  -318,  -318,   339,   -62,   189,   248,
    -318,   351,   378,    66,   240,   -57,  -318,   278,  -318,   278,
    -318,  -318,  -318,  -318,  -318,   385,  -318,  -318,   248,  -318,
    -318,   320,  -318,  -318,    20,  -318,  -318,   248,   320,   248,
      79,  -318,  -318,     9,  -318,   394,   291,   396,   281,  -122,
     242,   244,   247,   149,   280,   239,   326,  -318,   227,     2,
     353,  -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,
    -318,  -318,  -318,  -318,  -318,  -318,  -318,   321,  -318,   -86,
     250,  -318,   248,   350,  -318,   371,  -318,  -318,   257,    30,
    -318,   328,   255,  -318,    36,    45,    10,   256,  -318,   -34,
      45,     2,   377,   -16,  -318,   333,  -318,   310,    58,  -318,
     291,     8,    14,   375,   161,   248,   248,   117,   133,   266,
     326,   541,   248,    44,   269,   -55,   248,   248,   326,  -318,
     326,    -8,   267,   -54,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   352,
      39,  -318,   429,     9,     2,  -318,   307,     9,  -318,   385,
      13,   268,  -318,   248,  -318,   431,  -318,  -318,  -318,  -318,
     248,  -318,  -318,  -318,  -318,   248,   248,   351,  -318,   276,
    -318,  -318,   282,  -318,  -318,  -318,  -318,  -318,    90,  -318,
     396,  -318,  -318,   248,  -318,  -318,   283,  -318,  -318,  -318,
    -318,  -318,  -318,   357,   172,    77,   134,   248,   248,  -318,
     375,   344,    97,  -318,  -318,  -318,   340,   475,   560,   326,
     288,   227,  -318,   354,   295,   560,   560,   560,   560,   425,
     425,   425,   425,    44,    44,    55,    55,    55,   -94,   290,
    -318,  -318,   108,  -318,   142,  -318,   291,  -318,    -3,  -318,
     293,  -318,    29,  -318,   392,  -318,  -318,  -318,     2,     2,
    -318,   452,   455,  -318,   363,  -318,  -318,   144,  -318,   248,
     310,   248,   248,  -318,   114,   140,   299,  -318,   326,   560,
     227,   302,   151,  -318,  -318,  -318,  -318,   303,   374,  -318,
    -318,  -318,   397,   398,   399,   379,    13,   472,  -318,  -318,
    -318,   358,  -318,   314,   316,  -318,  -318,    48,   322,     2,
     146,  -318,   248,  -318,   541,   323,   152,  -318,  -318,    29,
      13,  -318,  -318,  -318,    13,   277,   325,   248,  -318,  -318,
    -318,  -318,  -318,     2,  -318,  -318,  -318,  -318,   364,   378,
     -22,   329,   248,   160,   248,  -318,    15,     2,  -318,  -318,
       2,   330,   327,  -318
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     240,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,    29,    29,     0,   260,
       3,    20,    18,    20,    17,     8,     9,     7,    11,    16,
      13,    14,    12,    15,    10,     0,   239,     0,   229,    72,
      32,     0,    43,    49,    49,     0,     0,     0,     0,   228,
       0,    70,    70,     0,    41,     0,   241,   242,    28,    25,
      27,    26,     1,   240,     2,     0,     6,     5,   120,     0,
      81,    82,   112,    68,     0,   130,     0,     0,     0,     0,
     106,    36,     0,    76,     0,     0,     0,     0,     0,     0,
      42,     0,     0,     4,     0,     0,   100,     0,     0,    94,
      95,    93,     0,    97,     0,     0,   126,   230,   211,   214,
     216,   217,   212,   213,   218,     0,   129,   131,   206,   207,
     208,   215,   209,   210,    31,    30,     0,     0,    76,     0,
      71,     0,     0,     0,     0,   106,    78,    39,    37,    39,
      69,    66,    67,   244,   243,     0,   119,    99,     0,    89,
      88,   112,    85,    84,    86,    96,    92,     0,   112,     0,
       0,    90,    33,     0,    48,     0,   240,     0,     0,   202,
       0,     0,     0,     0,     0,     0,     0,   204,     0,   105,
     134,   141,   142,   143,   136,   138,   144,   137,   157,   145,
     146,   147,   148,   140,   135,   150,   151,     0,   261,     0,
       0,    74,     0,     0,    77,     0,    35,    40,    23,     0,
      21,   103,   101,   127,   238,   126,     0,   111,   113,   118,
     126,   122,   124,   121,   132,     0,    46,     0,     0,    50,
     240,   100,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   153,     0,   152,     0,     0,     0,     0,     0,   154,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    75,     0,     0,    80,    79,     0,     0,    19,     0,
       0,   106,   102,     0,   236,     0,   237,   133,    83,    87,
       0,   117,   116,   115,    91,     0,     0,     0,    54,     0,
      57,    56,     0,    62,    61,    55,    60,    53,    65,    45,
       0,    47,   189,     0,   203,   205,     0,   193,   194,   195,
     196,   197,   198,     0,     0,     0,     0,     0,     0,   176,
       0,     0,     0,   149,   139,   168,   169,     0,   164,     0,
       0,     0,   155,     0,   167,   166,   182,   183,   184,   185,
     186,   187,   188,   159,   158,   161,   160,   162,   163,     0,
      34,   262,     0,    38,     0,    22,   240,   104,   219,   221,
       0,   223,   234,   222,   108,   128,   235,   114,   125,   123,
      44,     0,     0,    63,     0,    52,    51,     0,   180,     0,
       0,     0,     0,   174,     0,     0,     0,   199,     0,   165,
       0,     0,     0,   156,   200,    73,    24,     0,     0,   256,
     248,   254,   252,   255,   250,     0,     0,     0,   233,   227,
     231,     0,    98,     0,     0,    64,   190,     0,     0,   178,
       0,   177,     0,   181,   201,     0,     0,   172,   170,   234,
       0,   251,   253,   249,     0,   220,   235,     0,    58,    59,
     191,   192,   175,   179,   173,   171,   224,   245,   257,     0,
     110,     0,     0,     0,     0,   107,     0,   258,   246,   232,
     109,   202,     0,   247
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -318,  -318,  -318,   422,  -318,   470,  -318,   217,  -318,   166,
    -318,  -318,  -318,  -318,   241,   -78,   376,  -318,  -318,  -318,
     458,  -318,   193,   126,  -318,  -318,   467,  -318,  -318,  -318,
     395,  -318,  -318,   317,  -156,   -48,  -318,    88,   -64,   -49,
    -318,  -318,   -65,   294,  -318,  -318,  -318,  -116,  -318,  -318,
      35,  -318,   232,  -318,  -318,    61,  -238,  -318,  -173,   251,
    -129,  -124,  -318,  -318,  -318,  -318,  -318,  -318,   292,  -318,
    -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,    64,   -66,
     -84,  -318,  -318,   -88,  -318,  -318,  -318,  -317,    87,  -318,
    -318,  -318,     1,  -318,    92,   331,  -318,  -318,  -318,  -318,
     443,  -318,  -318,  -318,  -318,    80
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    18,    19,    20,    21,    66,   209,   210,    22,    59,
      23,   125,    24,    25,    82,   137,   206,    26,    27,    28,
      78,   228,   229,   308,   385,    29,    88,    30,    31,    32,
     133,    33,   135,   136,    34,   151,   152,   153,    71,   102,
     103,   156,    72,   148,   211,   281,   282,   130,   422,   465,
     106,   217,   218,   293,    96,   161,   212,   115,   116,   213,
     214,   180,   181,   182,   183,   184,   185,   186,   238,   187,
     188,   189,   190,   191,   323,   192,   193,   194,   195,   196,
     118,   119,   120,   121,   122,   123,   367,   368,   369,   370,
     371,    48,   372,   418,   419,   420,   287,    35,    36,    56,
      57,   373,   415,   468,    64,   199
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     179,   138,   138,    39,   332,    98,    42,   146,   139,   117,
     226,    49,    50,   108,   109,   110,    38,   314,   471,   204,
     147,   129,   408,   105,   464,    53,    85,   165,   219,    99,
     221,   223,   284,    37,   296,    99,   254,   154,    43,   284,
     154,   231,    38,   232,   237,   342,    80,   138,    83,   245,
     241,   291,   243,   197,    90,   246,    51,   158,   166,   409,
     100,    54,   343,    68,   410,    86,   100,   269,    44,   201,
     411,   412,   247,   274,   311,   387,   246,   292,   271,   127,
     128,   272,   169,   108,   109,   110,    52,   413,   339,   141,
     142,  -257,   414,   247,   246,   159,   101,   224,   104,   445,
     362,   167,   101,   402,   364,   216,   324,   325,   111,   334,
     203,   247,   246,   160,   244,   340,   241,   335,   336,    68,
     170,   171,   172,    70,   337,   200,   338,   458,    40,   247,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   283,   246,   112,   113,   417,
      41,   154,   169,   108,   109,   110,   285,    97,   246,   173,
      45,   219,   436,   247,  -225,   374,   378,   379,   289,   316,
     315,   177,   312,    69,   254,   247,   366,   114,   111,   143,
     391,   359,    60,    61,    46,   254,   215,   246,   222,   383,
     170,   171,   172,   220,   278,   174,    47,   279,   394,   395,
     265,   266,   267,   268,   247,   269,   384,   117,   175,   460,
     407,   117,   450,   138,   268,   399,   269,   112,   113,   380,
     327,   392,   309,   236,   246,   310,   431,   246,    55,   173,
     169,   108,   109,   110,   176,   177,    58,    62,    63,   328,
     328,   247,   178,   432,   247,   329,   393,   114,   111,    73,
     246,   169,   108,   109,   110,   236,   246,    65,   452,   397,
     427,    75,   429,   430,   283,   174,   396,   247,   170,   171,
     172,   360,   405,   247,   434,   163,   288,   401,   175,    76,
      68,   294,   246,   169,   108,   109,   110,   112,   113,   170,
     171,   172,   390,   317,   318,   319,   320,   321,   322,   247,
      74,    77,   408,   453,   176,   177,   406,   173,   426,   163,
      81,   283,   178,    84,    87,   438,   455,   114,   283,   283,
      91,   239,   171,   172,   469,    92,   111,   272,   173,   169,
     108,   109,   110,   467,   298,   470,   435,    94,    95,   409,
     299,   107,   126,   174,   410,   124,   129,   111,   300,   131,
     411,   412,   132,   134,   140,   108,   175,    69,   110,   145,
     173,   147,   149,   150,   174,   112,   113,   413,   171,   172,
     248,  -257,   414,   155,   301,   157,   162,   175,   163,   111,
     164,   198,   176,   177,   202,   205,   112,   113,   208,   408,
     178,   302,   104,   303,   304,   114,   240,   225,    14,   227,
     242,   230,   249,   176,   177,   233,   173,   234,   305,   175,
     235,   178,   306,   273,   270,   276,   114,   280,   112,   113,
     277,   297,   283,   290,   307,   111,   409,   295,    68,   330,
     341,   410,   361,   333,   376,   176,   177,   411,   412,   381,
     339,   461,   240,   178,  -226,   382,   389,   388,   114,   250,
     246,   400,   404,   403,   413,   175,   269,   421,   423,   414,
     416,   424,   425,   433,   112,   113,   437,   439,   440,   251,
     441,   442,   443,   444,   249,   446,   252,   253,   448,   447,
     449,   176,   177,   254,   255,    93,   451,   454,   459,   178,
     462,   473,   466,    67,   114,   232,   365,   256,   257,   258,
     259,   260,    79,   386,   261,   262,  -259,   263,   264,   265,
     266,   267,   268,     1,   269,   207,   428,   363,     1,    89,
     275,     2,   377,   168,   249,   313,     2,   457,     3,   326,
     472,   456,     4,     3,   375,   144,     0,     4,     5,   463,
       0,     6,     7,     5,     0,   286,     6,     7,     0,   253,
       0,     0,     0,     8,     9,   254,     0,     0,     8,     9,
       0,     0,     0,     0,    10,     0,     0,     0,     0,    10,
       0,   250,  -260,  -260,     0,     0,  -260,  -260,     0,   263,
     264,   265,   266,   267,   268,   398,   269,     0,    11,     0,
     249,   331,    12,    11,     0,     0,     0,    12,     0,   253,
       0,     0,     0,     0,     0,   254,   255,    13,     0,   249,
       0,     0,    13,    14,     0,     0,     0,     0,    14,   256,
     257,   258,   259,   260,     0,     0,   261,   262,     0,   263,
     264,   265,   266,   267,   268,     0,   269,   250,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    15,    16,    17,
       0,     0,    15,    16,    17,     0,  -260,   331,     0,     0,
       0,     0,     0,     0,     0,   253,     0,     0,     0,     0,
       0,   254,   255,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   253,   256,   257,   258,   259,   260,
     254,  -260,   261,   262,     0,   263,   264,   265,   266,   267,
     268,     0,   269,     0,  -260,  -260,  -260,   259,   260,     0,
       0,   261,   262,     0,   263,   264,   265,   266,   267,   268,
       0,   269
};

static const yytype_int16 yycheck[] =
{
     129,    85,    86,     2,   242,    69,     5,    95,    86,    75,
     166,    10,    11,     4,     5,     6,     3,     3,     3,   135,
      12,    78,    25,    72,    46,    19,    89,    89,   157,     9,
     159,   160,     3,    26,    50,     9,   130,   102,    75,     3,
     105,   163,     3,   165,   173,    99,    45,   131,    47,   178,
     174,    85,   176,   131,    53,   110,    75,   105,   120,    62,
      40,    55,   116,    53,    67,   128,    40,   161,   105,   133,
      73,    74,   127,   202,   230,   313,   110,   111,   164,    78,
      79,   167,     3,     4,     5,     6,   105,    90,    96,    88,
      89,    94,    95,   127,   110,    50,    76,   163,    72,   416,
     273,   163,    76,   341,   277,   154,   235,   236,    99,   164,
     167,   127,   110,    68,   178,   123,   240,   246,   247,    53,
      41,    42,    43,    35,   248,    59,   250,   444,     3,   127,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   167,   110,   138,   139,   120,
       3,   216,     3,     4,     5,     6,   120,    69,   110,    80,
      89,   290,   400,   127,   167,   281,   295,   296,   216,   233,
     156,   156,   164,   163,   130,   127,   163,   168,    99,    91,
     103,   269,    16,    17,    89,   130,   151,   110,   109,    99,
      41,    42,    43,   158,   164,   116,    93,   167,   327,   328,
     156,   157,   158,   159,   127,   161,   116,   273,   129,   447,
     366,   277,   164,   297,   159,   339,   161,   138,   139,   297,
      87,    87,   164,   106,   110,   167,   112,   110,     3,    80,
       3,     4,     5,     6,   155,   156,   140,     0,   166,   106,
     106,   127,   163,   103,   127,   112,   112,   168,    99,     3,
     110,     3,     4,     5,     6,   106,   110,   107,   112,   162,
     389,   163,   391,   392,   167,   116,   330,   127,    41,    42,
      43,   270,   164,   127,   398,   167,   215,   341,   129,    89,
      53,   220,   110,     3,     4,     5,     6,   138,   139,    41,
      42,    43,   120,   132,   133,   134,   135,   136,   137,   127,
     165,   122,    25,   432,   155,   156,   164,    80,   164,   167,
       3,   167,   163,   118,   122,   164,   164,   168,   167,   167,
     120,    41,    42,    43,   164,   167,    99,   167,    80,     3,
       4,     5,     6,   462,    24,   464,   400,    92,   119,    62,
      30,     3,   116,   116,    67,     4,    78,    99,    38,    88,
      73,    74,   163,     3,    41,     4,   129,   163,     6,   163,
      80,    12,   164,   164,   116,   138,   139,    90,    42,    43,
      17,    94,    95,   109,    64,   121,   164,   129,   167,    99,
      41,     3,   155,   156,   144,   107,   138,   139,     3,    25,
     163,    81,    72,    83,    84,   168,   116,     3,   107,     3,
     161,   120,    49,   155,   156,   163,    80,   163,    98,   129,
     163,   163,   102,   163,    93,    44,   168,    89,   138,   139,
     163,    88,   167,   167,   114,    99,    62,    50,    53,   163,
     163,    67,     3,   164,     3,   155,   156,    73,    74,   163,
      96,    77,   116,   163,   167,   163,    89,   164,   168,    96,
     110,   163,   162,    99,    90,   129,   161,    65,     6,    95,
     167,     6,    99,   164,   138,   139,   164,   164,    94,   116,
      73,    73,    73,    94,    49,     3,   123,   124,   164,   121,
     164,   155,   156,   130,   131,    63,   164,   164,   163,   163,
     126,   164,   163,    23,   168,   165,   279,   144,   145,   146,
     147,   148,    44,   310,   151,   152,     0,   154,   155,   156,
     157,   158,   159,     7,   161,   139,   390,   276,     7,    52,
     203,    15,   290,   128,    49,   231,    15,   440,    22,   237,
     466,   439,    26,    22,   283,    92,    -1,    26,    32,   459,
      -1,    35,    36,    32,    -1,   214,    35,    36,    -1,   124,
      -1,    -1,    -1,    47,    48,   130,    -1,    -1,    47,    48,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    58,
      -1,    96,   147,   148,    -1,    -1,   151,   152,    -1,   154,
     155,   156,   157,   158,   159,   110,   161,    -1,    82,    -1,
      49,   116,    86,    82,    -1,    -1,    -1,    86,    -1,   124,
      -1,    -1,    -1,    -1,    -1,   130,   131,   101,    -1,    49,
      -1,    -1,   101,   107,    -1,    -1,    -1,    -1,   107,   144,
     145,   146,   147,   148,    -1,    -1,   151,   152,    -1,   154,
     155,   156,   157,   158,   159,    -1,   161,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,
      -1,    -1,   141,   142,   143,    -1,    96,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      -1,   130,   131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   124,   144,   145,   146,   147,   148,
     130,   131,   151,   152,    -1,   154,   155,   156,   157,   158,
     159,    -1,   161,    -1,   144,   145,   146,   147,   148,    -1,
      -1,   151,   152,    -1,   154,   155,   156,   157,   158,   159,
      -1,   161
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    15,    22,    26,    32,    35,    36,    47,    48,
      58,    82,    86,   101,   107,   141,   142,   143,   170,   171,
     172,   173,   177,   179,   181,   182,   186,   187,   188,   194,
     196,   197,   198,   200,   203,   266,   267,    26,     3,   261,
       3,     3,   261,    75,   105,    89,    89,    93,   260,   261,
     261,    75,   105,    19,    55,     3,   268,   269,   140,   178,
     178,   178,     0,   166,   273,   107,   174,   174,    53,   163,
     206,   207,   211,     3,   165,   163,    89,   122,   189,   189,
     261,     3,   183,   261,   118,    89,   128,   122,   195,   195,
     261,   120,   167,   172,    92,   119,   223,   206,   207,     9,
      40,    76,   208,   209,    72,   208,   219,     3,     4,     5,
       6,    99,   138,   139,   168,   226,   227,   248,   249,   250,
     251,   252,   253,   254,     4,   180,   116,   261,   261,    78,
     216,    88,   163,   199,     3,   201,   202,   184,   249,   184,
      41,   261,   261,   206,   269,   163,   252,    12,   212,   164,
     164,   204,   205,   206,   211,   109,   210,   121,   204,    50,
      68,   224,   164,   167,    41,    89,   120,   163,   199,     3,
      41,    42,    43,    80,   116,   129,   155,   156,   163,   229,
     230,   231,   232,   233,   234,   235,   236,   238,   239,   240,
     241,   242,   244,   245,   246,   247,   248,   184,     3,   274,
      59,   207,   144,   167,   216,   107,   185,   185,     3,   175,
     176,   213,   225,   228,   229,   219,   208,   220,   221,   229,
     219,   229,   109,   229,   248,     3,   203,     3,   190,   191,
     120,   163,   165,   163,   163,   163,   106,   229,   237,    41,
     116,   230,   161,   230,   207,   229,   110,   127,    17,    49,
      96,   116,   123,   124,   130,   131,   144,   145,   146,   147,
     148,   151,   152,   154,   155,   156,   157,   158,   159,   161,
      93,   164,   167,   163,   229,   202,    44,   163,   164,   167,
      89,   214,   215,   167,     3,   120,   264,   265,   224,   204,
     167,    85,   111,   222,   224,    50,    50,    88,    24,    30,
      38,    64,    81,    83,    84,    98,   102,   114,   192,   164,
     167,   203,   164,   212,     3,   156,   207,   132,   133,   134,
     135,   136,   137,   243,   229,   229,   237,    87,   106,   112,
     163,   116,   225,   164,   164,   229,   229,   230,   230,    96,
     123,   163,    99,   116,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   252,
     261,     3,   227,   183,   227,   176,   163,   255,   256,   257,
     258,   259,   261,   270,   216,   228,     3,   221,   229,   229,
     184,   163,   163,    99,   116,   193,   191,   225,   164,    89,
     120,   103,    87,   112,   229,   229,   207,   162,   110,   230,
     163,   207,   225,    99,   162,   164,   164,   203,    25,    62,
      67,    73,    74,    90,    95,   271,   167,   120,   262,   263,
     264,    65,   217,     6,     6,    99,   164,   229,   192,   229,
     229,   112,   103,   164,   230,   207,   225,   164,   164,   164,
      94,    73,    73,    73,    94,   256,     3,   121,   164,   164,
     164,   164,   112,   229,   164,   164,   263,   257,   256,   163,
     225,    77,   126,   274,    46,   218,   163,   229,   272,   164,
     229,     3,   247,   164
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   169,   170,   171,   171,   172,   172,   172,   172,   172,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   174,
     174,   175,   175,   176,   176,   177,   177,   177,   178,   178,
     179,   180,   181,   181,   182,   182,   183,   184,   185,   185,
     186,   187,   187,   187,   188,   188,   188,   188,   189,   189,
     190,   190,   191,   192,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   193,   193,   193,   194,   194,   194,   195,
     195,   196,   197,   198,   198,   199,   199,   200,   201,   201,
     202,   203,   203,   203,   204,   204,   205,   205,   206,   206,
     207,   207,   208,   209,   209,   209,   210,   210,   211,   212,
     212,   213,   214,   214,   215,   216,   216,   217,   217,   218,
     218,   219,   219,   220,   220,   221,   222,   222,   222,   223,
     223,   224,   224,   224,   224,   224,   224,   225,   225,   226,
     226,   227,   227,   228,   229,   229,   229,   229,   229,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     231,   231,   232,   232,   232,   232,   232,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   234,   234,
     235,   235,   235,   235,   236,   236,   236,   236,   237,   237,
     238,   238,   239,   239,   239,   239,   239,   239,   239,   240,
     240,   241,   242,   243,   243,   243,   243,   243,   243,   244,
     245,   246,   247,   247,   247,   247,   248,   248,   248,   248,
     248,   249,   250,   250,   251,   251,   252,   253,   254,   255,
     255,   256,   256,   257,   257,   258,   258,   259,   260,   261,
     261,   262,   262,   263,   263,   264,   264,   265,   265,   266,
     266,   267,   268,   268,   269,   270,   270,   270,   271,   271,
     271,   271,   271,   271,   271,   271,   271,   271,   272,   273,
     273,   274,   274
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       0,     1,     3,     1,     4,     2,     2,     2,     1,     0,
       4,     1,     2,     5,     7,     5,     1,     1,     3,     0,
       5,     2,     3,     2,     8,     7,     6,     7,     3,     0,
       1,     3,     3,     1,     1,     1,     1,     1,     4,     4,
       1,     1,     1,     1,     2,     0,     4,     4,     3,     2,
       0,     4,     2,     8,     5,     3,     0,     5,     1,     3,
       3,     2,     2,     6,     1,     1,     1,     3,     3,     3,
       3,     5,     2,     1,     1,     1,     1,     0,     7,     1,
       0,     1,     1,     0,     2,     2,     0,     4,     0,     2,
       0,     3,     0,     1,     3,     2,     1,     1,     0,     2,
       0,     2,     2,     4,     2,     4,     0,     1,     3,     1,
       0,     1,     3,     2,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     2,     2,     2,     3,     4,     1,     3,     3,
       3,     3,     3,     3,     3,     4,     3,     3,     3,     3,
       5,     6,     5,     6,     4,     6,     3,     5,     4,     5,
       4,     5,     3,     3,     3,     3,     3,     3,     3,     3,
       5,     6,     6,     1,     1,     1,     1,     1,     1,     4,
       4,     5,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     4,     1,     3,     2,     1,     1,
       3,     1,     5,     1,     0,     2,     1,     1,     0,     1,
       0,     2,     1,     3,     3,     4,     6,     8,     1,     2,
       1,     2,     1,     2,     1,     1,     1,     0,     1,     1,
       0,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

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
        yyerror (&yylloc, result, scanner, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if HSQL_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, result, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp, result, scanner);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, hsql::SQLParserResult* result, yyscan_t scanner)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , result, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, result, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !HSQL_DEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !HSQL_DEBUG */


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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
    case 3: /* IDENTIFIER  */
#line 150 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1847 "bison_parser.cpp"
        break;

    case 4: /* STRING  */
#line 150 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1853 "bison_parser.cpp"
        break;

    case 5: /* FLOATVAL  */
#line 148 "bison_parser.y"
            { }
#line 1859 "bison_parser.cpp"
        break;

    case 6: /* INTVAL  */
#line 148 "bison_parser.y"
            { }
#line 1865 "bison_parser.cpp"
        break;

    case 171: /* statement_list  */
#line 151 "bison_parser.y"
            {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 1878 "bison_parser.cpp"
        break;

    case 172: /* statement  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 1884 "bison_parser.cpp"
        break;

    case 173: /* preparable_statement  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 1890 "bison_parser.cpp"
        break;

    case 174: /* opt_hints  */
#line 151 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1903 "bison_parser.cpp"
        break;

    case 175: /* hint_list  */
#line 151 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1916 "bison_parser.cpp"
        break;

    case 176: /* hint  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 1922 "bison_parser.cpp"
        break;

    case 177: /* transaction_statement  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).transaction_stmt)); }
#line 1928 "bison_parser.cpp"
        break;

    case 179: /* prepare_statement  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).prep_stmt)); }
#line 1934 "bison_parser.cpp"
        break;

    case 180: /* prepare_target_query  */
#line 150 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1940 "bison_parser.cpp"
        break;

    case 181: /* execute_statement  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).exec_stmt)); }
#line 1946 "bison_parser.cpp"
        break;

    case 182: /* import_statement  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).import_stmt)); }
#line 1952 "bison_parser.cpp"
        break;

    case 183: /* file_type  */
#line 148 "bison_parser.y"
            { }
#line 1958 "bison_parser.cpp"
        break;

    case 184: /* file_path  */
#line 150 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1964 "bison_parser.cpp"
        break;

    case 185: /* opt_file_type  */
#line 148 "bison_parser.y"
            { }
#line 1970 "bison_parser.cpp"
        break;

    case 186: /* export_statement  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).export_stmt)); }
#line 1976 "bison_parser.cpp"
        break;

    case 187: /* show_statement  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).show_stmt)); }
#line 1982 "bison_parser.cpp"
        break;

    case 188: /* create_statement  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).create_stmt)); }
#line 1988 "bison_parser.cpp"
        break;

    case 189: /* opt_not_exists  */
#line 148 "bison_parser.y"
            { }
#line 1994 "bison_parser.cpp"
        break;

    case 190: /* column_def_commalist  */
#line 151 "bison_parser.y"
            {
	if ((((*yyvaluep).column_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 2007 "bison_parser.cpp"
        break;

    case 191: /* column_def  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).column_t)); }
#line 2013 "bison_parser.cpp"
        break;

    case 192: /* column_type  */
#line 148 "bison_parser.y"
            { }
#line 2019 "bison_parser.cpp"
        break;

    case 193: /* opt_column_nullable  */
#line 148 "bison_parser.y"
            { }
#line 2025 "bison_parser.cpp"
        break;

    case 194: /* drop_statement  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).drop_stmt)); }
#line 2031 "bison_parser.cpp"
        break;

    case 195: /* opt_exists  */
#line 148 "bison_parser.y"
            { }
#line 2037 "bison_parser.cpp"
        break;

    case 196: /* delete_statement  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2043 "bison_parser.cpp"
        break;

    case 197: /* truncate_statement  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2049 "bison_parser.cpp"
        break;

    case 198: /* insert_statement  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).insert_stmt)); }
#line 2055 "bison_parser.cpp"
        break;

    case 199: /* opt_column_list  */
#line 151 "bison_parser.y"
            {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2068 "bison_parser.cpp"
        break;

    case 200: /* update_statement  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).update_stmt)); }
#line 2074 "bison_parser.cpp"
        break;

    case 201: /* update_clause_commalist  */
#line 151 "bison_parser.y"
            {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 2087 "bison_parser.cpp"
        break;

    case 202: /* update_clause  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).update_t)); }
#line 2093 "bison_parser.cpp"
        break;

    case 203: /* select_statement  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2099 "bison_parser.cpp"
        break;

    case 204: /* select_within_set_operation  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2105 "bison_parser.cpp"
        break;

    case 205: /* select_within_set_operation_no_parentheses  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2111 "bison_parser.cpp"
        break;

    case 206: /* select_with_paren  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2117 "bison_parser.cpp"
        break;

    case 207: /* select_no_paren  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2123 "bison_parser.cpp"
        break;

    case 208: /* set_operator  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2129 "bison_parser.cpp"
        break;

    case 209: /* set_type  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2135 "bison_parser.cpp"
        break;

    case 210: /* opt_all  */
#line 148 "bison_parser.y"
            { }
#line 2141 "bison_parser.cpp"
        break;

    case 211: /* select_clause  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2147 "bison_parser.cpp"
        break;

    case 212: /* opt_distinct  */
#line 148 "bison_parser.y"
            { }
#line 2153 "bison_parser.cpp"
        break;

    case 213: /* select_list  */
#line 151 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2166 "bison_parser.cpp"
        break;

    case 214: /* opt_from_clause  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2172 "bison_parser.cpp"
        break;

    case 215: /* from_clause  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2178 "bison_parser.cpp"
        break;

    case 216: /* opt_where  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2184 "bison_parser.cpp"
        break;

    case 217: /* opt_group  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).group_t)); }
#line 2190 "bison_parser.cpp"
        break;

    case 218: /* opt_having  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2196 "bison_parser.cpp"
        break;

    case 219: /* opt_order  */
#line 151 "bison_parser.y"
            {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2209 "bison_parser.cpp"
        break;

    case 220: /* order_list  */
#line 151 "bison_parser.y"
            {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2222 "bison_parser.cpp"
        break;

    case 221: /* order_desc  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).order)); }
#line 2228 "bison_parser.cpp"
        break;

    case 222: /* opt_order_type  */
#line 148 "bison_parser.y"
            { }
#line 2234 "bison_parser.cpp"
        break;

    case 223: /* opt_top  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2240 "bison_parser.cpp"
        break;

    case 224: /* opt_limit  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2246 "bison_parser.cpp"
        break;

    case 225: /* expr_list  */
#line 151 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2259 "bison_parser.cpp"
        break;

    case 226: /* opt_literal_list  */
#line 151 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2272 "bison_parser.cpp"
        break;

    case 227: /* literal_list  */
#line 151 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2285 "bison_parser.cpp"
        break;

    case 228: /* expr_alias  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2291 "bison_parser.cpp"
        break;

    case 229: /* expr  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2297 "bison_parser.cpp"
        break;

    case 230: /* operand  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2303 "bison_parser.cpp"
        break;

    case 231: /* scalar_expr  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2309 "bison_parser.cpp"
        break;

    case 232: /* unary_expr  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2315 "bison_parser.cpp"
        break;

    case 233: /* binary_expr  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2321 "bison_parser.cpp"
        break;

    case 234: /* logic_expr  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2327 "bison_parser.cpp"
        break;

    case 235: /* in_expr  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2333 "bison_parser.cpp"
        break;

    case 236: /* case_expr  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2339 "bison_parser.cpp"
        break;

    case 237: /* case_list  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2345 "bison_parser.cpp"
        break;

    case 238: /* exists_expr  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2351 "bison_parser.cpp"
        break;

    case 239: /* comp_expr  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2357 "bison_parser.cpp"
        break;

    case 240: /* function_expr  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2363 "bison_parser.cpp"
        break;

    case 241: /* extract_expr  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2369 "bison_parser.cpp"
        break;

    case 242: /* cast_expr  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2375 "bison_parser.cpp"
        break;

    case 243: /* datetime_field  */
#line 148 "bison_parser.y"
            { }
#line 2381 "bison_parser.cpp"
        break;

    case 244: /* array_expr  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2387 "bison_parser.cpp"
        break;

    case 245: /* array_index  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2393 "bison_parser.cpp"
        break;

    case 246: /* between_expr  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2399 "bison_parser.cpp"
        break;

    case 247: /* column_name  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2405 "bison_parser.cpp"
        break;

    case 248: /* literal  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2411 "bison_parser.cpp"
        break;

    case 249: /* string_literal  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2417 "bison_parser.cpp"
        break;

    case 250: /* bool_literal  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2423 "bison_parser.cpp"
        break;

    case 251: /* num_literal  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2429 "bison_parser.cpp"
        break;

    case 252: /* int_literal  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2435 "bison_parser.cpp"
        break;

    case 253: /* null_literal  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2441 "bison_parser.cpp"
        break;

    case 254: /* param_expr  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2447 "bison_parser.cpp"
        break;

    case 255: /* table_ref  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2453 "bison_parser.cpp"
        break;

    case 256: /* table_ref_atomic  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2459 "bison_parser.cpp"
        break;

    case 257: /* nonjoin_table_ref_atomic  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2465 "bison_parser.cpp"
        break;

    case 258: /* table_ref_commalist  */
#line 151 "bison_parser.y"
            {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2478 "bison_parser.cpp"
        break;

    case 259: /* table_ref_name  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2484 "bison_parser.cpp"
        break;

    case 260: /* table_ref_name_no_alias  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2490 "bison_parser.cpp"
        break;

    case 261: /* table_name  */
#line 149 "bison_parser.y"
            { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2496 "bison_parser.cpp"
        break;

    case 262: /* table_alias  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2502 "bison_parser.cpp"
        break;

    case 263: /* opt_table_alias  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2508 "bison_parser.cpp"
        break;

    case 264: /* alias  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2514 "bison_parser.cpp"
        break;

    case 265: /* opt_alias  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2520 "bison_parser.cpp"
        break;

    case 266: /* opt_with_clause  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2526 "bison_parser.cpp"
        break;

    case 267: /* with_clause  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2532 "bison_parser.cpp"
        break;

    case 268: /* with_description_list  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2538 "bison_parser.cpp"
        break;

    case 269: /* with_description  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).with_description_t)); }
#line 2544 "bison_parser.cpp"
        break;

    case 270: /* join_clause  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2550 "bison_parser.cpp"
        break;

    case 271: /* opt_join_type  */
#line 148 "bison_parser.y"
            { }
#line 2556 "bison_parser.cpp"
        break;

    case 272: /* join_condition  */
#line 159 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2562 "bison_parser.cpp"
        break;

    case 274: /* ident_commalist  */
#line 151 "bison_parser.y"
            {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2575 "bison_parser.cpp"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (hsql::SQLParserResult* result, yyscan_t scanner)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

/* User initialization code.  */
#line 74 "bison_parser.y"
{
	// Initialize
	yylloc.first_column = 0;
	yylloc.last_column = 0;
	yylloc.first_line = 0;
	yylloc.last_line = 0;
	yylloc.total_column = 0;
	yylloc.string_length = 0;
}

#line 2693 "bison_parser.cpp"

  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, &yylloc, scanner);
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 270 "bison_parser.y"
                                             {
			for (SQLStatement* stmt : *(yyvsp[-1].stmt_vec)) {
				// Transfers ownership of the statement.
				result->addStatement(stmt);
			}

			unsigned param_id = 0;
			for (void* param : yyloc.param_list) {
				if (param != nullptr) {
					Expr* expr = (Expr*) param;
					expr->ival = param_id;
					result->addParameter(expr);
					++param_id;
				}
			}
			delete (yyvsp[-1].stmt_vec);
		}
#line 2908 "bison_parser.cpp"
    break;

  case 3:
#line 291 "bison_parser.y"
                          {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 2919 "bison_parser.cpp"
    break;

  case 4:
#line 297 "bison_parser.y"
                                             {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 2930 "bison_parser.cpp"
    break;

  case 5:
#line 306 "bison_parser.y"
                                            {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2939 "bison_parser.cpp"
    break;

  case 6:
#line 310 "bison_parser.y"
                                               {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2948 "bison_parser.cpp"
    break;

  case 7:
#line 314 "bison_parser.y"
                               {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 2956 "bison_parser.cpp"
    break;

  case 8:
#line 317 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].import_stmt);
		 }
#line 2964 "bison_parser.cpp"
    break;

  case 9:
#line 320 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].export_stmt);
		 }
#line 2972 "bison_parser.cpp"
    break;

  case 10:
#line 327 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 2978 "bison_parser.cpp"
    break;

  case 11:
#line 328 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 2984 "bison_parser.cpp"
    break;

  case 12:
#line 329 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 2990 "bison_parser.cpp"
    break;

  case 13:
#line 330 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2996 "bison_parser.cpp"
    break;

  case 14:
#line 331 "bison_parser.y"
                                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3002 "bison_parser.cpp"
    break;

  case 15:
#line 332 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3008 "bison_parser.cpp"
    break;

  case 16:
#line 333 "bison_parser.y"
                               { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3014 "bison_parser.cpp"
    break;

  case 17:
#line 334 "bison_parser.y"
                                  { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3020 "bison_parser.cpp"
    break;

  case 18:
#line 335 "bison_parser.y"
                                      { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3026 "bison_parser.cpp"
    break;

  case 19:
#line 344 "bison_parser.y"
                                { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3032 "bison_parser.cpp"
    break;

  case 20:
#line 345 "bison_parser.y"
                { (yyval.expr_vec) = nullptr; }
#line 3038 "bison_parser.cpp"
    break;

  case 21:
#line 350 "bison_parser.y"
               { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3044 "bison_parser.cpp"
    break;

  case 22:
#line 351 "bison_parser.y"
                             { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3050 "bison_parser.cpp"
    break;

  case 23:
#line 355 "bison_parser.y"
                           {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 3059 "bison_parser.cpp"
    break;

  case 24:
#line 359 "bison_parser.y"
                                          {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 3069 "bison_parser.cpp"
    break;

  case 25:
#line 371 "bison_parser.y"
                                  {
            (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction);
        }
#line 3077 "bison_parser.cpp"
    break;

  case 26:
#line 374 "bison_parser.y"
                                       {
            (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction);
        }
#line 3085 "bison_parser.cpp"
    break;

  case 27:
#line 377 "bison_parser.y"
                                     {
            (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction);
        }
#line 3093 "bison_parser.cpp"
    break;

  case 30:
#line 391 "bison_parser.y"
                                                             {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 3103 "bison_parser.cpp"
    break;

  case 32:
#line 401 "bison_parser.y"
                                   {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 3112 "bison_parser.cpp"
    break;

  case 33:
#line 405 "bison_parser.y"
                                                            {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 3122 "bison_parser.cpp"
    break;

  case 34:
#line 419 "bison_parser.y"
                                                                     {
			(yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3133 "bison_parser.cpp"
    break;

  case 35:
#line 425 "bison_parser.y"
                                                             {
			(yyval.import_stmt) = new ImportStatement((yyvsp[0].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.import_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3144 "bison_parser.cpp"
    break;

  case 36:
#line 434 "bison_parser.y"
                           {
			if (strcasecmp((yyvsp[0].sval), "csv") == 0) {
				(yyval.import_type_t) = kImportCSV;
			} else if (strcasecmp((yyvsp[0].sval), "tbl") == 0) {
				(yyval.import_type_t) = kImportTbl;
			} else if (strcasecmp((yyvsp[0].sval), "binary") == 0 || strcasecmp((yyvsp[0].sval), "bin") == 0) {
				(yyval.import_type_t) = kImportBinary;
			} else {
				free((yyvsp[0].sval));
				yyerror(&yyloc, result, scanner, "File type is unknown.");
				YYERROR;
			}
			free((yyvsp[0].sval));
		}
#line 3163 "bison_parser.cpp"
    break;

  case 37:
#line 451 "bison_parser.y"
                               { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 3169 "bison_parser.cpp"
    break;

  case 38:
#line 455 "bison_parser.y"
                                      {
			(yyval.import_type_t) = (yyvsp[0].import_type_t);
		}
#line 3177 "bison_parser.cpp"
    break;

  case 39:
#line 458 "bison_parser.y"
                             { (yyval.import_type_t) = kImportAuto; }
#line 3183 "bison_parser.cpp"
    break;

  case 40:
#line 467 "bison_parser.y"
                                                           {
			(yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
			(yyval.export_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3194 "bison_parser.cpp"
    break;

  case 41:
#line 481 "bison_parser.y"
                            {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 3202 "bison_parser.cpp"
    break;

  case 42:
#line 484 "bison_parser.y"
                                        {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3212 "bison_parser.cpp"
    break;

  case 43:
#line 489 "bison_parser.y"
                                    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3222 "bison_parser.cpp"
    break;

  case 44:
#line 503 "bison_parser.y"
                                                                                      {
			(yyval.create_stmt) = new CreateStatement(kCreateTableFromTbl);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
			(yyval.create_stmt)->schema = (yyvsp[-4].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-4].table_name).name;
			if (strcasecmp((yyvsp[-2].sval), "tbl") != 0) {
				free((yyvsp[-2].sval));
				yyerror(&yyloc, result, scanner, "File type is unknown.");
			 	YYERROR;
			}
			free((yyvsp[-2].sval));
			(yyval.create_stmt)->filePath = (yyvsp[0].sval);
		}
#line 3240 "bison_parser.cpp"
    break;

  case 45:
#line 516 "bison_parser.y"
                                                                                    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-1].column_vec);
		}
#line 3252 "bison_parser.cpp"
    break;

  case 46:
#line 523 "bison_parser.y"
                                                                           {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
			(yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3264 "bison_parser.cpp"
    break;

  case 47:
#line 530 "bison_parser.y"
                                                                                          {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3277 "bison_parser.cpp"
    break;

  case 48:
#line 541 "bison_parser.y"
                              { (yyval.bval) = true; }
#line 3283 "bison_parser.cpp"
    break;

  case 49:
#line 542 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3289 "bison_parser.cpp"
    break;

  case 50:
#line 546 "bison_parser.y"
                           { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 3295 "bison_parser.cpp"
    break;

  case 51:
#line 547 "bison_parser.y"
                                                    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 3301 "bison_parser.cpp"
    break;

  case 52:
#line 551 "bison_parser.y"
                                                           {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].bval));
		}
#line 3309 "bison_parser.cpp"
    break;

  case 53:
#line 557 "bison_parser.y"
                    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3315 "bison_parser.cpp"
    break;

  case 54:
#line 558 "bison_parser.y"
                        { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3321 "bison_parser.cpp"
    break;

  case 55:
#line 559 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3327 "bison_parser.cpp"
    break;

  case 56:
#line 560 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3333 "bison_parser.cpp"
    break;

  case 57:
#line 561 "bison_parser.y"
                       { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3339 "bison_parser.cpp"
    break;

  case 58:
#line 562 "bison_parser.y"
                                       { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3345 "bison_parser.cpp"
    break;

  case 59:
#line 563 "bison_parser.y"
                                    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3351 "bison_parser.cpp"
    break;

  case 60:
#line 564 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3357 "bison_parser.cpp"
    break;

  case 61:
#line 565 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3363 "bison_parser.cpp"
    break;

  case 62:
#line 566 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3369 "bison_parser.cpp"
    break;

  case 63:
#line 570 "bison_parser.y"
                     { (yyval.bval) = true; }
#line 3375 "bison_parser.cpp"
    break;

  case 64:
#line 571 "bison_parser.y"
                         { (yyval.bval) = false; }
#line 3381 "bison_parser.cpp"
    break;

  case 65:
#line 572 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3387 "bison_parser.cpp"
    break;

  case 66:
#line 582 "bison_parser.y"
                                                 {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3398 "bison_parser.cpp"
    break;

  case 67:
#line 588 "bison_parser.y"
                                                {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3409 "bison_parser.cpp"
    break;

  case 68:
#line 594 "bison_parser.y"
                                              {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3419 "bison_parser.cpp"
    break;

  case 69:
#line 602 "bison_parser.y"
                            { (yyval.bval) = true; }
#line 3425 "bison_parser.cpp"
    break;

  case 70:
#line 603 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3431 "bison_parser.cpp"
    break;

  case 71:
#line 612 "bison_parser.y"
                                                 {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3442 "bison_parser.cpp"
    break;

  case 72:
#line 621 "bison_parser.y"
                                    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3452 "bison_parser.cpp"
    break;

  case 73:
#line 634 "bison_parser.y"
                                                                                   {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3464 "bison_parser.cpp"
    break;

  case 74:
#line 641 "bison_parser.y"
                                                                       {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3476 "bison_parser.cpp"
    break;

  case 75:
#line 652 "bison_parser.y"
                                        { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3482 "bison_parser.cpp"
    break;

  case 76:
#line 653 "bison_parser.y"
                            { (yyval.str_vec) = nullptr; }
#line 3488 "bison_parser.cpp"
    break;

  case 77:
#line 663 "bison_parser.y"
                                                                             {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3499 "bison_parser.cpp"
    break;

  case 78:
#line 672 "bison_parser.y"
                              { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3505 "bison_parser.cpp"
    break;

  case 79:
#line 673 "bison_parser.y"
                                                          { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3511 "bison_parser.cpp"
    break;

  case 80:
#line 677 "bison_parser.y"
                                    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3521 "bison_parser.cpp"
    break;

  case 81:
#line 689 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3530 "bison_parser.cpp"
    break;

  case 82:
#line 693 "bison_parser.y"
                                                {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3539 "bison_parser.cpp"
    break;

  case 83:
#line 697 "bison_parser.y"
                                                                                                               {
			(yyval.select_stmt) = (yyvsp[-4].select_stmt);
			if ((yyval.select_stmt)->setOperations == nullptr) {
				(yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
			}
			(yyval.select_stmt)->setOperations->push_back((yyvsp[-3].set_operator_t));
			(yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->setOperations->back()->resultOrder = (yyvsp[-1].order_vec);
			(yyval.select_stmt)->setOperations->back()->resultLimit = (yyvsp[0].limit);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-5].with_description_vec);
		}
#line 3555 "bison_parser.cpp"
    break;

  case 86:
#line 715 "bison_parser.y"
                              { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 3561 "bison_parser.cpp"
    break;

  case 87:
#line 716 "bison_parser.y"
                                                                       {
		(yyval.select_stmt) = (yyvsp[-2].select_stmt);
		if ((yyval.select_stmt)->setOperations == nullptr) {
			(yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
		}
		(yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
		(yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
	}
#line 3574 "bison_parser.cpp"
    break;

  case 88:
#line 727 "bison_parser.y"
                                        { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3580 "bison_parser.cpp"
    break;

  case 89:
#line 728 "bison_parser.y"
                                          { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3586 "bison_parser.cpp"
    break;

  case 90:
#line 732 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3601 "bison_parser.cpp"
    break;

  case 91:
#line 742 "bison_parser.y"
                                                                                           {
			(yyval.select_stmt) = (yyvsp[-4].select_stmt);
			if ((yyval.select_stmt)->setOperations == nullptr) {
				(yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
			}
			(yyval.select_stmt)->setOperations->push_back((yyvsp[-3].set_operator_t));
			(yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->setOperations->back()->resultOrder = (yyvsp[-1].order_vec);
			(yyval.select_stmt)->setOperations->back()->resultLimit = (yyvsp[0].limit);
		}
#line 3616 "bison_parser.cpp"
    break;

  case 92:
#line 755 "bison_parser.y"
                                 {
		(yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
		(yyval.set_operator_t)->isAll = (yyvsp[0].bval);
		}
#line 3625 "bison_parser.cpp"
    break;

  case 93:
#line 762 "bison_parser.y"
                      {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetUnion;
		}
#line 3634 "bison_parser.cpp"
    break;

  case 94:
#line 766 "bison_parser.y"
                          {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetIntersect;
	}
#line 3643 "bison_parser.cpp"
    break;

  case 95:
#line 770 "bison_parser.y"
                       {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetExcept;
	}
#line 3652 "bison_parser.cpp"
    break;

  case 96:
#line 777 "bison_parser.y"
                    {
			(yyval.bval) = true;
		}
#line 3660 "bison_parser.cpp"
    break;

  case 97:
#line 780 "bison_parser.y"
                            {
		(yyval.bval) = false;
	}
#line 3668 "bison_parser.cpp"
    break;

  case 98:
#line 786 "bison_parser.y"
                                                                                            {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 3682 "bison_parser.cpp"
    break;

  case 99:
#line 798 "bison_parser.y"
                         { (yyval.bval) = true; }
#line 3688 "bison_parser.cpp"
    break;

  case 100:
#line 799 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3694 "bison_parser.cpp"
    break;

  case 102:
#line 807 "bison_parser.y"
                     { (yyval.table) = (yyvsp[0].table); }
#line 3700 "bison_parser.cpp"
    break;

  case 103:
#line 808 "bison_parser.y"
                     { (yyval.table) = nullptr; }
#line 3706 "bison_parser.cpp"
    break;

  case 104:
#line 812 "bison_parser.y"
                               { (yyval.table) = (yyvsp[0].table); }
#line 3712 "bison_parser.cpp"
    break;

  case 105:
#line 817 "bison_parser.y"
                           { (yyval.expr) = (yyvsp[0].expr); }
#line 3718 "bison_parser.cpp"
    break;

  case 106:
#line 818 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 3724 "bison_parser.cpp"
    break;

  case 107:
#line 822 "bison_parser.y"
                                              {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3734 "bison_parser.cpp"
    break;

  case 108:
#line 827 "bison_parser.y"
                            { (yyval.group_t) = nullptr; }
#line 3740 "bison_parser.cpp"
    break;

  case 109:
#line 831 "bison_parser.y"
                            { (yyval.expr) = (yyvsp[0].expr); }
#line 3746 "bison_parser.cpp"
    break;

  case 110:
#line 832 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 3752 "bison_parser.cpp"
    break;

  case 111:
#line 836 "bison_parser.y"
                                    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 3758 "bison_parser.cpp"
    break;

  case 112:
#line 837 "bison_parser.y"
                            { (yyval.order_vec) = nullptr; }
#line 3764 "bison_parser.cpp"
    break;

  case 113:
#line 841 "bison_parser.y"
                           { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 3770 "bison_parser.cpp"
    break;

  case 114:
#line 842 "bison_parser.y"
                                          { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 3776 "bison_parser.cpp"
    break;

  case 115:
#line 846 "bison_parser.y"
                                    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 3782 "bison_parser.cpp"
    break;

  case 116:
#line 850 "bison_parser.y"
                    { (yyval.order_type) = kOrderAsc; }
#line 3788 "bison_parser.cpp"
    break;

  case 117:
#line 851 "bison_parser.y"
                     { (yyval.order_type) = kOrderDesc; }
#line 3794 "bison_parser.cpp"
    break;

  case 118:
#line 852 "bison_parser.y"
                            { (yyval.order_type) = kOrderAsc; }
#line 3800 "bison_parser.cpp"
    break;

  case 119:
#line 858 "bison_parser.y"
                                { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3806 "bison_parser.cpp"
    break;

  case 120:
#line 859 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 3812 "bison_parser.cpp"
    break;

  case 121:
#line 863 "bison_parser.y"
                           { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3818 "bison_parser.cpp"
    break;

  case 122:
#line 864 "bison_parser.y"
                            { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3824 "bison_parser.cpp"
    break;

  case 123:
#line 865 "bison_parser.y"
                                       { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3830 "bison_parser.cpp"
    break;

  case 124:
#line 866 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 3836 "bison_parser.cpp"
    break;

  case 125:
#line 867 "bison_parser.y"
                                      { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3842 "bison_parser.cpp"
    break;

  case 126:
#line 868 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 3848 "bison_parser.cpp"
    break;

  case 127:
#line 875 "bison_parser.y"
                           { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3854 "bison_parser.cpp"
    break;

  case 128:
#line 876 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3860 "bison_parser.cpp"
    break;

  case 129:
#line 880 "bison_parser.y"
                             { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 3866 "bison_parser.cpp"
    break;

  case 130:
#line 881 "bison_parser.y"
                            { (yyval.expr_vec) = nullptr; }
#line 3872 "bison_parser.cpp"
    break;

  case 131:
#line 885 "bison_parser.y"
                        { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3878 "bison_parser.cpp"
    break;

  case 132:
#line 886 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3884 "bison_parser.cpp"
    break;

  case 133:
#line 890 "bison_parser.y"
                               {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 3896 "bison_parser.cpp"
    break;

  case 139:
#line 908 "bison_parser.y"
                             { (yyval.expr) = (yyvsp[-1].expr); }
#line 3902 "bison_parser.cpp"
    break;

  case 149:
#line 918 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 3908 "bison_parser.cpp"
    break;

  case 152:
#line 927 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 3914 "bison_parser.cpp"
    break;

  case 153:
#line 928 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 3920 "bison_parser.cpp"
    break;

  case 154:
#line 929 "bison_parser.y"
                               { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 3926 "bison_parser.cpp"
    break;

  case 155:
#line 930 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 3932 "bison_parser.cpp"
    break;

  case 156:
#line 931 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 3938 "bison_parser.cpp"
    break;

  case 158:
#line 936 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 3944 "bison_parser.cpp"
    break;

  case 159:
#line 937 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 3950 "bison_parser.cpp"
    break;

  case 160:
#line 938 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 3956 "bison_parser.cpp"
    break;

  case 161:
#line 939 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 3962 "bison_parser.cpp"
    break;

  case 162:
#line 940 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 3968 "bison_parser.cpp"
    break;

  case 163:
#line 941 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 3974 "bison_parser.cpp"
    break;

  case 164:
#line 942 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 3980 "bison_parser.cpp"
    break;

  case 165:
#line 943 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 3986 "bison_parser.cpp"
    break;

  case 166:
#line 944 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 3992 "bison_parser.cpp"
    break;

  case 167:
#line 945 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 3998 "bison_parser.cpp"
    break;

  case 168:
#line 949 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4004 "bison_parser.cpp"
    break;

  case 169:
#line 950 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4010 "bison_parser.cpp"
    break;

  case 170:
#line 954 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4016 "bison_parser.cpp"
    break;

  case 171:
#line 955 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4022 "bison_parser.cpp"
    break;

  case 172:
#line 956 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4028 "bison_parser.cpp"
    break;

  case 173:
#line 957 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4034 "bison_parser.cpp"
    break;

  case 174:
#line 963 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4040 "bison_parser.cpp"
    break;

  case 175:
#line 964 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4046 "bison_parser.cpp"
    break;

  case 176:
#line 965 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4052 "bison_parser.cpp"
    break;

  case 177:
#line 966 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4058 "bison_parser.cpp"
    break;

  case 178:
#line 970 "bison_parser.y"
                                                 { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4064 "bison_parser.cpp"
    break;

  case 179:
#line 971 "bison_parser.y"
                                                 { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4070 "bison_parser.cpp"
    break;

  case 180:
#line 975 "bison_parser.y"
                                               { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4076 "bison_parser.cpp"
    break;

  case 181:
#line 976 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4082 "bison_parser.cpp"
    break;

  case 182:
#line 980 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4088 "bison_parser.cpp"
    break;

  case 183:
#line 981 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4094 "bison_parser.cpp"
    break;

  case 184:
#line 982 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4100 "bison_parser.cpp"
    break;

  case 185:
#line 983 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4106 "bison_parser.cpp"
    break;

  case 186:
#line 984 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4112 "bison_parser.cpp"
    break;

  case 187:
#line 985 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4118 "bison_parser.cpp"
    break;

  case 188:
#line 986 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4124 "bison_parser.cpp"
    break;

  case 189:
#line 990 "bison_parser.y"
                                  { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 4130 "bison_parser.cpp"
    break;

  case 190:
#line 991 "bison_parser.y"
                                                         { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 4136 "bison_parser.cpp"
    break;

  case 191:
#line 995 "bison_parser.y"
                                                     { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4142 "bison_parser.cpp"
    break;

  case 192:
#line 999 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 4148 "bison_parser.cpp"
    break;

  case 193:
#line 1003 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeSecond; }
#line 4154 "bison_parser.cpp"
    break;

  case 194:
#line 1004 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeMinute; }
#line 4160 "bison_parser.cpp"
    break;

  case 195:
#line 1005 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeHour; }
#line 4166 "bison_parser.cpp"
    break;

  case 196:
#line 1006 "bison_parser.y"
            { (yyval.datetime_field) = kDatetimeDay; }
#line 4172 "bison_parser.cpp"
    break;

  case 197:
#line 1007 "bison_parser.y"
              { (yyval.datetime_field) = kDatetimeMonth; }
#line 4178 "bison_parser.cpp"
    break;

  case 198:
#line 1008 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeYear; }
#line 4184 "bison_parser.cpp"
    break;

  case 199:
#line 1012 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 4190 "bison_parser.cpp"
    break;

  case 200:
#line 1016 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 4196 "bison_parser.cpp"
    break;

  case 201:
#line 1020 "bison_parser.y"
                                                    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4202 "bison_parser.cpp"
    break;

  case 202:
#line 1024 "bison_parser.y"
                           { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4208 "bison_parser.cpp"
    break;

  case 203:
#line 1025 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4214 "bison_parser.cpp"
    break;

  case 204:
#line 1026 "bison_parser.y"
                    { (yyval.expr) = Expr::makeStar(); }
#line 4220 "bison_parser.cpp"
    break;

  case 205:
#line 1027 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4226 "bison_parser.cpp"
    break;

  case 211:
#line 1039 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4232 "bison_parser.cpp"
    break;

  case 212:
#line 1043 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral(true); }
#line 4238 "bison_parser.cpp"
    break;

  case 213:
#line 1044 "bison_parser.y"
                      { (yyval.expr) = Expr::makeLiteral(false); }
#line 4244 "bison_parser.cpp"
    break;

  case 214:
#line 1048 "bison_parser.y"
                         { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 4250 "bison_parser.cpp"
    break;

  case 216:
#line 1053 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 4256 "bison_parser.cpp"
    break;

  case 217:
#line 1057 "bison_parser.y"
                     { (yyval.expr) = Expr::makeNullLiteral(); }
#line 4262 "bison_parser.cpp"
    break;

  case 218:
#line 1061 "bison_parser.y"
                    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 4272 "bison_parser.cpp"
    break;

  case 220:
#line 1074 "bison_parser.y"
                                                         {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 4283 "bison_parser.cpp"
    break;

  case 224:
#line 1090 "bison_parser.y"
                                                         {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4294 "bison_parser.cpp"
    break;

  case 225:
#line 1099 "bison_parser.y"
                                 { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 4300 "bison_parser.cpp"
    break;

  case 226:
#line 1100 "bison_parser.y"
                                                         { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 4306 "bison_parser.cpp"
    break;

  case 227:
#line 1105 "bison_parser.y"
                                           {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4318 "bison_parser.cpp"
    break;

  case 228:
#line 1116 "bison_parser.y"
                           {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 4328 "bison_parser.cpp"
    break;

  case 229:
#line 1125 "bison_parser.y"
                                          { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 4334 "bison_parser.cpp"
    break;

  case 230:
#line 1126 "bison_parser.y"
                                          { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 4340 "bison_parser.cpp"
    break;

  case 232:
#line 1132 "bison_parser.y"
                                                      { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4346 "bison_parser.cpp"
    break;

  case 234:
#line 1138 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4352 "bison_parser.cpp"
    break;

  case 235:
#line 1143 "bison_parser.y"
                              { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4358 "bison_parser.cpp"
    break;

  case 236:
#line 1144 "bison_parser.y"
                           { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4364 "bison_parser.cpp"
    break;

  case 238:
#line 1150 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4370 "bison_parser.cpp"
    break;

  case 240:
#line 1160 "bison_parser.y"
                            { (yyval.with_description_vec) = nullptr; }
#line 4376 "bison_parser.cpp"
    break;

  case 241:
#line 1164 "bison_parser.y"
                                           { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 4382 "bison_parser.cpp"
    break;

  case 242:
#line 1168 "bison_parser.y"
                                 {
			(yyval.with_description_vec) = new std::vector<WithDescription*>();
			(yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
		}
#line 4391 "bison_parser.cpp"
    break;

  case 243:
#line 1172 "bison_parser.y"
                                                           {
			(yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
                        (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
		}
#line 4400 "bison_parser.cpp"
    break;

  case 244:
#line 1179 "bison_parser.y"
                                                {
			(yyval.with_description_t) = new WithDescription();
			(yyval.with_description_t)->alias = (yyvsp[-2].sval);
			(yyval.with_description_t)->select = (yyvsp[0].select_stmt);
		}
#line 4410 "bison_parser.cpp"
    break;

  case 245:
#line 1193 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 4422 "bison_parser.cpp"
    break;

  case 246:
#line 1201 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 4435 "bison_parser.cpp"
    break;

  case 247:
#line 1211 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-6].uval);
			(yyval.table)->join->left = (yyvsp[-7].table);
			(yyval.table)->join->right = (yyvsp[-4].table);
			auto left_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
			if ((yyvsp[-1].expr)->alias != nullptr) left_col->alias = strdup((yyvsp[-1].expr)->alias);
			if ((yyvsp[-7].table)->getName() != nullptr) left_col->table = strdup((yyvsp[-7].table)->getName());
			auto right_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
			if ((yyvsp[-1].expr)->alias != nullptr) right_col->alias = strdup((yyvsp[-1].expr)->alias);
			if ((yyvsp[-4].table)->getName() != nullptr) right_col->table = strdup((yyvsp[-4].table)->getName());
			(yyval.table)->join->condition = Expr::makeOpBinary(left_col, kOpEquals, right_col);
			delete (yyvsp[-1].expr);
		}
#line 4455 "bison_parser.cpp"
    break;

  case 248:
#line 1229 "bison_parser.y"
                                { (yyval.uval) = kJoinInner; }
#line 4461 "bison_parser.cpp"
    break;

  case 249:
#line 1230 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4467 "bison_parser.cpp"
    break;

  case 250:
#line 1231 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4473 "bison_parser.cpp"
    break;

  case 251:
#line 1232 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4479 "bison_parser.cpp"
    break;

  case 252:
#line 1233 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4485 "bison_parser.cpp"
    break;

  case 253:
#line 1234 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4491 "bison_parser.cpp"
    break;

  case 254:
#line 1235 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4497 "bison_parser.cpp"
    break;

  case 255:
#line 1236 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4503 "bison_parser.cpp"
    break;

  case 256:
#line 1237 "bison_parser.y"
                                { (yyval.uval) = kJoinCross; }
#line 4509 "bison_parser.cpp"
    break;

  case 257:
#line 1238 "bison_parser.y"
                                        { (yyval.uval) = kJoinInner; }
#line 4515 "bison_parser.cpp"
    break;

  case 261:
#line 1258 "bison_parser.y"
                           { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4521 "bison_parser.cpp"
    break;

  case 262:
#line 1259 "bison_parser.y"
                                               { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4527 "bison_parser.cpp"
    break;


#line 4531 "bison_parser.cpp"

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
  *++yylsp = yyloc;

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, result, scanner, YY_("syntax error"));
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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
        yyerror (&yylloc, result, scanner, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc, result, scanner);
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
  yyerror (&yylloc, result, scanner, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, result, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp, yylsp, result, scanner);
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
#line 1262 "bison_parser.y"

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */

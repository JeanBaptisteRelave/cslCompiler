/* A Bison parser, made by GNU Bison 3.7.4.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_CSLCOMPIL_TAB_H_INCLUDED
# define YY_YY_CSLCOMPIL_TAB_H_INCLUDED
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
    DEBUT = 258,                   /* DEBUT  */
    PAR_OU = 259,                  /* PAR_OU  */
    PAR_FER = 260,                 /* PAR_FER  */
    FIN = 261,                     /* FIN  */
    ENTIER = 262,                  /* ENTIER  */
    BOOLEN = 263,                  /* BOOLEN  */
    ENTIER_NATUREL = 264,          /* ENTIER_NATUREL  */
    RETURN = 265,                  /* RETURN  */
    REEL = 266,                    /* REEL  */
    ID = 267,                      /* ID  */
    AF = 268,                      /* AF  */
    PV = 269,                      /* PV  */
    PLUS = 270,                    /* PLUS  */
    MOINS = 271,                   /* MOINS  */
    FOIS = 272,                    /* FOIS  */
    DIV = 273,                     /* DIV  */
    MOD = 274,                     /* MOD  */
    ALGO = 275,                    /* ALGO  */
    DEC = 276,                     /* DEC  */
    DP = 277,                      /* DP  */
    TYPE = 278,                    /* TYPE  */
    BOOLEEN = 279,                 /* BOOLEEN  */
    VIRGL = 280,                   /* VIRGL  */
    CONSTANCE = 281,               /* CONSTANCE  */
    COMPARATIF = 282,              /* COMPARATIF  */
    OPERATEUR_LOGIQUE = 283,       /* OPERATEUR_LOGIQUE  */
    TABLEAU_DE = 284,              /* TABLEAU_DE  */
    PROCEDURE = 285,               /* PROCEDURE  */
    BREAK = 286,                   /* BREAK  */
    FOR = 287,                     /* FOR  */
    VARIANT_OF = 288,              /* VARIANT_OF  */
    TO = 289,                      /* TO  */
    FONCTION = 290,                /* FONCTION  */
    WHILE_TRUE = 291,              /* WHILE_TRUE  */
    END_WHILE_TRUE = 292,          /* END_WHILE_TRUE  */
    IF = 293,                      /* IF  */
    ELSE_IF = 294,                 /* ELSE_IF  */
    ELSE = 295,                    /* ELSE  */
    ENDIF = 296,                   /* ENDIF  */
    WHILE = 297,                   /* WHILE  */
    DO = 298,                      /* DO  */
    END_DO = 299,                  /* END_DO  */
    REPEAT = 300,                  /* REPEAT  */
    UP_TO = 301                    /* UP_TO  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CSLCOMPIL_TAB_H_INCLUDED  */

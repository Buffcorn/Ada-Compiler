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
#line 27 "ada.y" /* yacc.c:1909  */

    int integer;
    char * var;
    struct LL_node * head;
    struct LLNum_node * headNum;
    struct node * node_p;
    struct record * record_p;
    struct LL_RW * RW;

#line 158 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

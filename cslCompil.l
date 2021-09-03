%{
#include "cslCompil.tab.h"
%}
%option noyywrap
%option yylineno
entier ("+"|"-")?[0-9]+
reel ("+"|"-")?[0-9]+"."[0-9]+
id [a-zA-Z][a-zA-Z0-9_]*
%%
"algorithme" return ALGO;
"debut" return DEBUT;
"fin" return FIN;
"<-" return AF;
"declarer" return DEC ;
":" return DP;
"bool"|"reel" return TYPE;
"vrai"|"faux" return BOOLEEN;
{entier} yylval = atoi(yytext); return ENTIER;
{reel} yylval = atoi(yytext); return REEL;
{id} return ID;
";" return PV;
"+" return PLUS;
"-" return MOINS;
"*" return FOIS;
"/" return DIV;
"/*"(.|"\n")+"*/" /* ignorer les commentaires */
"//"(.)+
[ \t\n] /* ignorer les espaces et les retours à la ligne */
. printf("(%s|l%d) Erreur lexicale.\n", yytext, yylineno);
%%
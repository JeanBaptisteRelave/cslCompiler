%{
#include "cslCompil.tab.h"
%}
%option noyywrap
%option yylineno
entier_naturel ("+")?[0-9]+
entier ("+"|"-")?[0-9]+
reel ("+"|"-")?[0-9]+"."[0-9]+
id [a-zA-Z][a-zA-Z0-9_]*
%%
"algorithme" return ALGO;
"debut" return DEBUT;
"fin" return FIN;
"<-" return AF;
"declarer" return DEC;
"bool"|"reel"|"entier_naturel"|"entier" return TYPE;
"vrai"|"faux" return BOOLEN;
"in"|"out"|"in_out" return CONSTANCE;
"ET_ALORS"|"OU_SINON" return OPERATEUR_LOGIQUE;
"renvoie" return RETURN;
":" return DP;
";" return PV;
"+" return PLUS;
"-" return MOINS;
"*" return FOIS;
"/" return DIV;
"%" return MOD;
"," return VIRGL;
"(" return PAR_OU;
")" return PAR_FER;
"pour" return FOR;
"variant_de" return VARIANT_OF;
"a" return TO;
"sortie" return BREAK;
"boucle" return WHILE_TRUE;
"fboucle" return END_WHILE_TRUE;
"repeter" return REPEAT; 
"jusqua" return UP_TO;
"tant_que" return WHILE;
"faire" return DO;
"ffaire" return END_DO;
"si" return IF;
"sinon_si" return ELSE_IF;
"sinon" return ELSE;
"fsi" return ENDIF;
"procedure" return PROCEDURE;
"fonction" return FONCTION;
"vaut"|"ne_vaut_pas"|">"|"<"|"<="|">=" return COMPARATIF;
"tableau_de" return TABLEAU_DE;
{entier_naturel} yylval = atoi(yytext); return ENTIER_NATUREL;
{entier} yylval = atoi(yytext); return ENTIER;
{reel} yylval = atoi(yytext); return REEL;
{id} return ID;
"/*"(.|"\n")+"*/" /* ignorer les commentaires */
"//"(.)+
[ \t\n] /* ignorer les espaces et les retours à la ligne */
. printf("(%s|l%d) Erreur lexicale.\n", yytext, yylineno);
%%
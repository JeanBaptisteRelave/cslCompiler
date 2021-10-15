%{
int yyerror(char* s);
#include "cslCompil.c"
%}
%token DEBUT FIN ENTIER REEL ID AF PV PLUS MOINS FOIS DIV ALGO DEC DP TYPE BOOLEEN
%start S
%%
S : ALGO ID DEBUT Corps FIN;
Corps : ListeDec ListeOper;
ListeDec : Dec ListeDec | Dec;
Dec : DEC ID DP TYPE PV {printf("Declaration a la ligne %d\n", yylineno);};
ListeOper : Afect ListeOper | Afect;
Afect : ID AF Res PV {printf("Operation a la ligne %d\n Res = %d\n", yylineno, $3);};

/*
    ############# Opérations arithmétiques #############
*/
Res : Val PLUS Res {$$ = $1 + $$;}
| Val MOINS Res {$$ = $1 - $$;}
| Val FOIS Res {$$ = $1 * $$;} 
| Val DIV Res {$$ = $1 / $$;};

Val : ENTIER | REEL | ID;
%%
int yyerror(char* S)
{
    printf("Erreur syntaxique a la ligne %d\n", yylineno);
}
void main()
{
    if(!yyparse())
        printf("Fin de l'analyse syntaxique\n");
}
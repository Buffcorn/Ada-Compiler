%{
#include "y.tab.h"
int lineno = 1;
char linebuf[500];
%}

%%

[ \t]*                     /* ignores all spaces and tabs */
is                         {return IS		;}
end                        {return END		;}
\n.*                       {strcpy(linebuf, yytext+1);
                            lineno++;
                            yyless(1)            ;}
"--".*                     {lineno++            ;}
of                         {return OF		;}
begin                      {return BEG		;}
".."                       {return DOTDOT	;}
"'"                        {return TICK	        ;}
procedure                  {return PROCEDURE	;}
type                       {return TYPE    	;}
array                      {return ARRAY	;}
in                         {return IN		;}
out                        {return OUT		;}
range                      {return RANGE	;}
constant                   {return CONSTANT	;}
":="                       {return ASSIGN	;}
record                     {return RECORD       ;}
exception                  {return EXCEPTION	;}
null                       {return NULLWORD	;}
loop                       {return LOOP         ;}
if                         {return IF		;}
then                       {return THEN	        ;}
elsif                     {return ELSEIF	;}
else                       {return ELSE         ;}
case                       {return CASE         ;}
exit                       {return EXIT	        ;}
when                       {return WHEN	        ;}
and                        {return AND		;}
or                         {return OR		;}
not                        {return NOT		;}
"="                        {return EQ		;}
"/="                       {return NEQ		;}
">"                        {return GT		;}
"<"                        {return LT		;}
">="                       {return GTE		;}
"<="                       {return LTE		;}
"**"                       {return EXP          ;}
raise                      {return RAISE        ;}
others                     {return OTHERS	;}
"=>"                       {return ARROW        ;}
"end if"                   {return ENDIF        ;}
"end record"               {return ENDREC       ;}
"end loop"                 {return ENDLOOP      ;}
"end case"                 {return ENDCASE      ;}
"exit when"                {return EXITWHEN     ;}
[a-zA-Z][a-zA-Z0-9_]*      {yylval.var = strdup(yytext);
                           return ID            ;}
[0-9]+                 	   {yylval.integer = atoi(yytext); 
			   return NUMBER;}
.                          {return yytext[0]    ;}
%%
int yyerror(char *s) {
  printf("%d: %s at the '%s' in the line:\n%s\n", lineno, s, yytext, linebuf);
}

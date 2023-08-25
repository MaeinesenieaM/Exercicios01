#include <stdio.h>
#include <locale.h>
#include <time.h>

int main ()
{
//pega os valores da data no presente. (Isso demorou um pouquinho para entender)
   struct tm *tempo_atual;
   time_t segundos;                   // -- basicamente transforma os valores do
   time (&segundos);                  // tempo em algo legivel.
   tempo_atual = localtime(&segundos);

//valores da data
   int anoatual = tempo_atual->tm_year + 1900;
   int diaatual = tempo_atual->tm_yday; // -- mostra qual dia do ano estamos.

   int vano = 365; // -- dias em cada ano.
   int vmes = 30;  // -- dias a cada mes.
//valores do usuário
   int uano;
   int umes;
   int udia;

   int diastotais; // --O Valor ja diz seu proposito.

   setlocale (LC_ALL, "Portuguese");

   printf ("<<Analisador de idade>> \n\n");

   printf (" Insira sua data de nascimento.\n  Ano: "); scanf ("%d", &uano);
   printf ("  Mês: "); scanf ("%d", &umes);
   printf ("  Dia: "); scanf ("%d", &udia);

   //calcula os dias
   diastotais = diaatual + (vano * (anoatual - uano - 1)) + ( vmes * (12 - umes));

   printf ("<Parabéns, tem %d dias desde que você nasceu!>", diastotais);

   printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n");

   return 0;
}
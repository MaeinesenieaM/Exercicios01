#include <stdio.h>
#include <locale.h>

int main ()
{

   int reais;
   float valdolar = (4.87); //valor atual do dolar.
   float temdolar;          //quantidade de dolares.

   setlocale (LC_ALL, "Portuguese");

   printf ("======Conversor para d�lar======\n\n");
   printf (" Quantos reais voc� possui?: "); scanf ("%d", &reais);

   temdolar = reais / valdolar;

   printf (" .\n .\n Voc� teria %.2f dolares!", temdolar);

   printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");

   return 0;
}
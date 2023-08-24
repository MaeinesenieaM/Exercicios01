#include <stdio.h>
#include <locale.h>


int main ()
{
   int num01; //valor do número.
   int res;   //resultado.

   setlocale (LC_ALL, "Portuguese");

   printf ("======Dobrador======\n\n");

   printf (" Insire o número: "); scanf ("%d", &num01); //Recebe o valor númerico.

   res = num01 * 2;

   printf ("\n O Dobro do número: %d", res);

   return 0;
}
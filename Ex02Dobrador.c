#include <stdio.h>
#include <locale.h>


int main ()
{
   int num01; //valor do n�mero.
   int res;   //resultado.

   setlocale (LC_ALL, "Portuguese");

   printf ("======Dobrador======\n\n");

   printf (" Insire o n�mero: "); scanf ("%d", &num01); //Recebe o valor n�merico.

   res = num01 * 2;

   printf ("\n O Dobro do n�mero: %d", res);

   return 0;
}
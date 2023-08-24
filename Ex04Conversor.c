#include <stdio.h>
#include <locale.h>

int main ()
{

   int reais;
   float valdolar = (4.87); //valor atual do dolar.
   float temdolar;          //quantidade de dolares.

   setlocale (LC_ALL, "Portuguese");

   printf ("======Conversor para dólar======\n\n");
   printf (" Quantos reais você possui?: "); scanf ("%d", &reais);

   temdolar = reais / valdolar;

   printf (" .\n .\n Você teria %.2f dolares!", temdolar);

   return 0;
}
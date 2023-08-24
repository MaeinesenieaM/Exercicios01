#include <stdio.h>
#include <math.h>
#include <locale.h>

int main ()
{
   //Alocando valores.
   float raio;
   float area;
   double pi = M_PI;

   setlocale (LC_ALL, "Portuguese");

   printf ("======Calculador de área círcular======\n\n");
   printf (" Insire o raio do circulo: ");
   scanf  ("%f", &raio);

   area = pi * (pow (raio, 2)); // Calcula a área total do circulo usando PI.

   printf (" .\n A Área do circulo é [%.2f²]", area);

   printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  "); //BICI!!!

   return 0;
}
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

   printf ("======Calculador de �rea c�rcular======\n\n");
   printf (" Insire o raio do circulo: ");
   scanf  ("%f", &raio);

   area = pi * (pow (raio, 2)); // Calcula a �rea total do circulo usando PI.

   printf (" .\n A �rea do circulo � [%.2f�]", area);

   printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  "); //BICI!!!

   return 0;
}
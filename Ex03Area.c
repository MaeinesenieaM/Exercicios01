#include <stdio.h>
#include <locale.h>

int main ()
{
   float comprimento, largura;
   float res;

   setlocale (LC_ALL, "Portuguese");

   printf ("======Calculador de �rea======\n\n");

   printf (" Insira o comprimento da sala: "); scanf ("%f", &comprimento);
   printf (" Insire a largura da sala: "); scanf ("%f", &largura);

   res = comprimento * largura;

   printf (" .\n .\n .\n �rea da sala: %f�", res);

   printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");

   return 0;
}
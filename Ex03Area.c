#include <stdio.h>
#include <locale.h>

int main ()
{
   int comprimento, largura;
   int res;

   setlocale (LC_ALL, "Portuguese");

   printf ("======Calculador de �rea======\n\n");

   printf (" Insira o comprimento da sala: "); scanf ("%d", &comprimento);
   printf (" Insire a largura da sala: "); scanf ("%d", &largura);

   res = comprimento * largura;

   printf (" .\n .\n .\n �rea da sala: %d�", res);

   return 0;
}
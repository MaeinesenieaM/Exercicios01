#include <stdio.h>
#include <locale.h>

int main ()
{
   int comprimento, largura;
   int res;

   setlocale (LC_ALL, "Portuguese");

   printf ("======Calculador de área======\n\n");

   printf (" Insira o comprimento da sala: "); scanf ("%d", &comprimento);
   printf (" Insire a largura da sala: "); scanf ("%d", &largura);

   res = comprimento * largura;

   printf (" .\n .\n .\n Área da sala: %d²", res);

   return 0;
}
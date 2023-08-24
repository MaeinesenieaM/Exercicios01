#include <stdio.h>
#include <locale.h>

int main ()
{
   float dist = 0.28; //28% da distribuidora
   float imp = 0.45;  // 45% de imposto
   float pag;         // preço para a fabricar o carro
   float preco;       // preço total

   setlocale (LC_ALL, "Portuguese");

   printf ("----Fábrica De Carros----\n\n");
   printf (" Insira o dinheiro para fabricar o carro: "); scanf ("%f", &pag);
   printf (" .\n");

   preco = pag * (dist + imp + 1);

   printf (" .\n");
   printf (" Preço total do carro: R$ %.2f", preco);

   printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  "); //BICI!!!

   return 0;
}
#include <stdio.h>
#include <locale.h>

int main ()
{
   float dist = 0.28; //28% da distribuidora
   float imp = 0.45;  // 45% de imposto
   float pag;         // pre�o para a fabricar o carro
   float preco;       // pre�o total

   setlocale (LC_ALL, "Portuguese");

   printf ("----F�brica De Carros----\n\n");
   printf (" Insira o dinheiro para fabricar o carro: "); scanf ("%f", &pag);
   printf (" .\n");

   preco = pag * (dist + imp + 1);

   printf (" .\n");
   printf (" Pre�o total do carro: R$ %.2f", preco);

   printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  "); //BICI!!!

   return 0;
}
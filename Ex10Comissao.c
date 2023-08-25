#include <stdio.h>
#include <locale.h>

int main ()
{
   int carrov;    //Quantidade de carros vendidos.
   float carrop;  //Preço recebido a cada carro vendido.
   float salario;
   float vendat;  //Total de vendas.

   float salariofin; //Salario final.


   setlocale (LC_ALL, "Portuguese");

   printf ("****Calculadora De Comissão**** \n\n");

   printf (" Insire o salário atual: "); scanf ("%f", &salario);
   printf (" O Total de carros vendidos: "); scanf ("%d", &carrov);
   printf (" O Valor recebido por cada carro vendido: "); scanf ("%f", &carrop);
   printf (" Dinheiro total recebido com as vendas: "); scanf ("%f", &vendat);

   printf (" .\n");

   salariofin = salario + (carrop * carrov) + (vendat * 0.05);

   printf (" .\n");
   printf (" O Salário a ser recebido sera de R$ %.2f.", salariofin);

   printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  "); //BICI!!!

   return 0;
}
#include <stdio.h>
#include <locale.h>

int main ()
{
   float salario;
   float reajuste;

   setlocale (LC_ALL, "Portuguese");

   printf ("----Reajuste de sal�rio----\n\n");
   printf (" Insira o sal�rio atual: "); scanf ("%f", &salario);
   printf (" Insire o percentual de reajuste: "); scanf ("%f", &reajuste);

   //Calculo para o reajuste.
   reajuste = (reajuste / 100) + 1;
   salario = salario * reajuste;

   printf (" .\n .\n .\n O Sal�rio sera em torno de R$ %.2f", salario);

   printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  "); //BICI!!!

   return 0;
}
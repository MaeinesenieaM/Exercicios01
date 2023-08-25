#include <stdio.h>
#include <locale.h>

int main ()
{
   float vmercadoria, vtaxa, venda, gastos, ganhos;
   float porcentagem;

   setlocale (LC_ALL, "Portuguese");

   printf ("======Calculadora de ganhos do mercado======\n\n");

   printf (" O valor da mercadoria: "); scanf ("%f", &vmercadoria);
   printf (" O custo da taxa e despesas: "); scanf ("%f", &vtaxa);
   printf (" Agora insira o preço desejado do produto: "); scanf ("%f", &venda);

   gastos = vmercadoria + vtaxa;
   ganhos = venda - gastos;

   porcentagem = (ganhos * 100) / gastos;

   printf (" O Ganho pela venda do produto sera: %.2f%", porcentagem);

   printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");

   return 0;
}
#include <stdio.h>
#include <locale.h>

int main ()
{
   float vmercadoria, vtaxa, vdespesas, venda, gastos;
   float porcentagem;

   setlocale (LC_ALL, "Portuguese");

   printf ("======Calculadora de ganhos do mercado======\n\n");

   printf (" O valor da mercadoria: "); scanf ("%f", &vmercadoria);
   printf (" O custo da taxa: "); scanf ("%f", &vtaxa);
   printf (" O custo das despesas: "); scanf ("%f", &vdespesas);
   printf (" Insira o dinheiro ganho com as vendas: "); scanf ("%f", &venda);

   gastos = vmercadoria + vtaxa + vdespesas;

   porcentagem = ((gastos - venda) / gastos) * 100;

   printf (" O Ganho pela venda do produto sera: %.2f%%", porcentagem);

   printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");

   return 0;
}
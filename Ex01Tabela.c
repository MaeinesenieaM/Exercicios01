#include <stdio.h>
#include <math.h>
#include <locale.h>

int main ()
{
	
    int num01, num02, soma, sub, mult, pot;
    float div;

    setlocale (LC_ALL, "Portuguese");

    printf ("======Tabela Numerica======\n\n");
    printf (" Insira o primeiro n�mero: ");
    scanf ("%d", &num01);
    printf (" Insira o segundo n�mero: ");
    scanf ("%d", &num02);

    soma = num01 + num02;              //Calculador dos valores
    sub = num01 - num02;
    mult = num01 * num02;
    div = (float)num01 / (float)num02;
    pot = pow(num01,num02);

    printf (" ##\n ##\n Soma: %d \n Subtra��o: %d \n Multiplica��o: %d \n Divis�o: %.3f \n Potencia: %d \n Porcentagem: %.3f",
   	        soma, sub, mult, div, pot);

    printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");

    return 0;

}
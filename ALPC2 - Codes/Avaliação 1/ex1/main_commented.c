// Caio Marcelo da Silva de Jesus

#include <stdio.h>
#include <stdlib.h>

int mostraValores(int k)
{
    printf("%d ", k); // escreve na tela o primeiro termo
    if (k == 1) // Crit�rio de parada
    return printf(" \n"); // Quebra de linha
    if (k%2 == 0) // n�mero par
    k = k/2;
    else if (k%2 == 1) // n�mero �mpar
        k++;
    return mostraValores(k); // chama a fun��o recursivamente com o novo valor 'k'
}

int main()
{
    mostraValores(11); //chama a fun��o passando o valor inteiro 11 como par�metro
    mostraValores(18); //chama a fun��o passando o valor inteiro 18 como par�metro
    return 0;
}

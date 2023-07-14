// Caio Marcelo da Silva de Jesus

#include <stdio.h>
#include <stdlib.h>

int mostraValores(int k)
{
    printf("%d ", k); // escreve na tela o primeiro termo
    if (k == 1) // Critério de parada
    return printf(" \n"); // Quebra de linha
    if (k%2 == 0) // número par
    k = k/2;
    else if (k%2 == 1) // número ímpar
        k++;
    return mostraValores(k); // chama a função recursivamente com o novo valor 'k'
}

int main()
{
    mostraValores(11); //chama a função passando o valor inteiro 11 como parâmetro
    mostraValores(18); //chama a função passando o valor inteiro 18 como parâmetro
    return 0;
}

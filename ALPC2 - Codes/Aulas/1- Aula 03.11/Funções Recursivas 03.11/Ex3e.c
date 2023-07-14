#include <stdio.h>
#include <stdlib.h>

void binario(int n) //escreve n usando base 2 (binário)
{
    if(n==0)return;
    binario(n/2); //divide o número por 2
    printf("%d",n%2); //mostra na tela o resto da divisão por 2 (ou 1 ou 0)
}

void bin_0(int n) //Condição especial para n == 0
{
    if(n==0) printf("0");
    else binario(n);
}

int main()
{
    bin_0(80); // Número natural passado como parâmetro
    return 0;
}

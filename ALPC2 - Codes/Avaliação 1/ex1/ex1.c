// Caio Marcelo da Silva de Jesus

#include <stdio.h>
#include <stdlib.h>

void mostraValores(int k) //função void pois não retorna nada, apenas imprime na tela
{
    printf("%d ", k);
    if (k == 1)
    return printf(" \n");
    if (k%2 == 0)
    k = k/2;
    else
    k++;
    return mostraValores(k);
}

int main()
{
    mostraValores(11);
    mostraValores(18);
    return 0;
}

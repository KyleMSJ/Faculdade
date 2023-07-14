#include <stdio.h>
#include <stdlib.h>

int n, i;

int valorVet(int v[i])
{
        for (i=0; i<5; i++){
        if (n == v[i])
        return i;}
        return -1;
}

int main()
{
    int vet[5] = {0,3,6,2,7};
    printf("Valor para busca: ");
    scanf("%d", &n);
    printf("Indice: %d", valorVet(vet));
    return 0;
}

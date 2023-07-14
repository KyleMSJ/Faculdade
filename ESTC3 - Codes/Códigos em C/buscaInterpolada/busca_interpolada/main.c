#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int A[MAX] = { 10, 14, 19, 26, 27, 31, 33, 35, 42, 44 };

int busca_interpolada(int valor)
{
    int inf=0, sup= MAX-1, meio=-1;
    while(inf<=sup)
    {
        meio = inf + (((double)(sup - inf) / (A[sup] - A[inf])) * (valor - A[inf]));
        printf("Meio Interpolada: %d\n", meio);
        if (valor==A[meio])
            return(meio);
        else
            if (valor<A[meio])
                sup=meio-1;
            else
                inf=meio+1;
    }
    return(meio);
}

int main()
{
    busca_interpolada(26);
    return 0;
}

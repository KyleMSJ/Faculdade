#include<stdio.h>

void aumentaValores(int vet[4])
{
    int i;
    for(i=0;i<4;i++)
    {
        vet[i]++;
    }
}

void main()
{
    int meuVet[4] = {2,2,3,5};
    int i;
    aumentaValores(meuVet);
    for(i=0;i<4;i++)
    {
        printf("%d-", meuVet[i]);
    }
}

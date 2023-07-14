#include <stdio.h>
#include <stdlib.h>

void shell(int vetor[], int n)
{
    int i, j, salto;
    int aux;
    for(salto=0; salto<n; salto = 3*salto+1);
    while (salto > 0)
    {
        salto = (salto-1)/3;
        for (i=salto; i<n; i++)
    {
        aux = vetor[i];
        j=i;
        while(vetor[j-salto] > aux)
        {
            vetor[j] = vetor[j-salto];
            j -= salto;
            if (j < salto) break;
        }
        vetor[j]=aux;
    }
}
}
void imprime(int v[], int n){
    int i;
    for (i=0;i<n;i++){
        printf("%d ", v[i]);
        }
        printf("\n");
}
int main()
{
    int i;
    int vet[8]={6,5,3,1,8,7,2,4};
    shell(vet,8);
    imprime(vet,8);
    return 0;
}

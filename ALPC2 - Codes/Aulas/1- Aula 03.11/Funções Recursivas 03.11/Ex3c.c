#include <stdio.h>
#include <stdlib.h>
#define N 5 //constante válida para todo o código

int somaVetorRec(int v[], int n){
    if(n==0)return 0;
    return v[n-1] + somaVetor(v,n-1); //n-1 = última posição do vetor (no caso: 4)
}

int main()
{
    int numeros[N];
    int soma=0;
    int i;

    for(i=0;i<N;i++){
        numeros[i]=i/2; // 0/2, 1/2, 2/2, 3/2, 4/2 = 0, 0, 1, 1, 2
    }

    for(i=0;i<N;i++){
        printf("%d ",numeros[i]);
    }
    printf("\nsoma = %d", somaVetor(numeros,N));
    return 0;
}


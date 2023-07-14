#include<stdio.h>
#include<stdlib.h>

int Indice(int vet [], int n){
    int i, aux = 0; //invalid initializer
    for(i=1; i<n; i++){
        if (vet[i]>vet[aux])
            aux = i;
    }
    return aux;
}
int main()
{
    int v[] = {100, 200, 312, 43, 570, 123, 800};
    printf("%d", Indice(v, sizeof(v)/sizeof(int)));
    return 0;
}


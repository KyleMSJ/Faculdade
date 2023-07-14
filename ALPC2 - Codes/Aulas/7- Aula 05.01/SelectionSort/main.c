#include <stdio.h>
#include <stdlib.h>

void selectionSort(int v[], int n){
    int i, j, aux, iMenor; /// i: primeira *posição* do subvetor | j: começa do i+1 para procurar o menor elemento para trocar com o *i* depois | aux: faz a troca dos elementos
    for(i=0; i<n-1; i++){ // Neste caso o *i* chega até ao 6º elemento do vetor
        iMenor = i; // índice do menor valor
        for (j=i+1; j<n; j++){
            if(v[j]<v[iMenor]){
                iMenor=j;
            }
        }
        if(i!=iMenor){ //se estiver no mesmo índice não tem porque trocar
            aux = v[i];
            v[i] = v[iMenor];
            v[iMenor] = aux;
            imprime(v,n);
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
    int v[7] = {100,50,12,37,30,200,75};
    //selectionSort(v, sizeof(v)/sizeof(int)); Quanto ocupa o vetor / quanto ocupa um inteiro
    selectionSort(v,7);
    imprime(v,7);
    return 0;
}

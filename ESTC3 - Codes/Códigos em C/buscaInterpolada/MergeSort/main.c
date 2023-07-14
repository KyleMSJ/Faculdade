#include <stdio.h>
#include <stdlib.h>

void intercala(int *v, int esq, int meio, int dir)
{
int i, j, k;
int a_tam = meio-esq+1;
int b_tam = dir-meio;
int a[a_tam];
int b[b_tam];
for (i = 0; i < a_tam; i++) a[i] = v[i+esq];
for (i = 0; i < b_tam; i++) b[i] = v[i+meio+1];
for (i = 0, j = 0, k = esq; k <= dir; k++) {
if (i == a_tam) v[k] = b[j++];
else if (j == b_tam) v[k] = a[i++];
else if (a[i] < b[j]) v[k] = a[i++];
else v[k] = b[j++];
}
}

void mergeSort(int *v, int esq, int dir) {
if (esq == dir)
return;
int meio = (esq + dir) / 2;
mergeSort(v, esq, meio);
mergeSort(v, meio+1, dir);
intercala(v, esq, meio, dir);
return;
}
int main()
{
    int vet[8] = {6,5,3,1,8,7,2,4};
    int i;
    mergeSort(vet, 1, 8);
    for(i=0; i<=8;i++){
    printf("vetor ordenado: %d", vet);}
    return 0;
}

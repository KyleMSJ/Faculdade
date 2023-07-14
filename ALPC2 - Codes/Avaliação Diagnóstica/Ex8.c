#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float vet[10];
    int i;

    for(i=0; i<10; i++){
        printf("Número: ");
        scanf("%f", &vet[i]);
    }
    for(i=9; i>=0; i--){
        printf("\n %.2f", vet[i]);
    }
}

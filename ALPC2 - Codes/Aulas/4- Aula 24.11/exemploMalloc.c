#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int *valores;
    int n, i;
    printf("Quantos n�meros voc� quer armazenar?\n");
    scanf("%d", &n);

    valores = (int*) malloc (sizeof(int)*n);
    if (valores == NULL){
        printf("Mem�ria insuficiente\n");
        exit(1);
    }

    for(i=0;i<n;i++){
        valores[i] = 2*i;
    }

    for(i=0;i<n;i++){
        printf("%d, ", valores[i]);
    }

    free(valores);

    //printf("\nA mem�ria alocada � de %d bytes", n*sizeof(int));


    /*char *plv;
    plv = (char*) malloc(1000*sizeof(char));
    if(!plv) //plv � NULL
    {
        printf("Memoria insuficiente\n");
        exit(1);
    }
    sprintf(plv, "Muito legal!");
    printf(plv); */
}

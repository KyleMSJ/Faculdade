#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int *valores;
    int n, i;
    printf("Quantos números você quer armazenar?\n");
    scanf("%d", &n);

    valores = (int*) malloc (sizeof(int)*n);
    if (valores == NULL){
        printf("Memória insuficiente\n");
        exit(1);
    }

    for(i=0;i<n;i++){
        valores[i] = 2*i;
    }

    for(i=0;i<n;i++){
        printf("%d, ", valores[i]);
    }

    free(valores);

    //printf("\nA memória alocada é de %d bytes", n*sizeof(int));


    /*char *plv;
    plv = (char*) malloc(1000*sizeof(char));
    if(!plv) //plv é NULL
    {
        printf("Memoria insuficiente\n");
        exit(1);
    }
    sprintf(plv, "Muito legal!");
    printf(plv); */
}

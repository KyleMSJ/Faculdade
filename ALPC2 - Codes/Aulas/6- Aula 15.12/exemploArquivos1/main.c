#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * saida;
    int i;
    saida = fopen("dados.txt","w");

    if (saida == NULL){
        printf("Nao foi possivel abrir o arquivo dados.txt para escrita");
        exit(1);
    }
    for (i=0;i<10;i++)
    {
        fprintf(saida, "%f\t", pow(i,2));
    }
    fprintf(saida,"\n");

    fclose(saida);

    FILE * entrada;
    float n;

    entrada = fopen("dados.txt","r");
    if(!entrada){
        printf("Nao foi possivel abrir o arquivo dados.txt para leitura");
        exit(1);
    }
    while(fscanf(entrada, "%f", &n)!=EOF){;
        printf("%f ", n);
    }
    fclose(entrada);
    return 0;
}

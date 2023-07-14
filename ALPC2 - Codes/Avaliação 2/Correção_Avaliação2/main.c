#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * arq;
    int c1=0, c2=0, c3=0; // Contadores
    int cod;
    float valor;
    //só para testar o arquivo binário criado
    /*
    arq = fopen("resultados.txt", "rb");
    fread(&c1, sizeof(int), 1, arq);
    fread(&c2, sizeof(int), 1, arq);
    fread(&c3, sizeof(int), 1, arq);
    printf("%d %d %d", c1, c2, c3);
    fclose(arq);
    return 0;*/

    //Abrir arquivos de entrada
    arq = fopen("dados.txt", "r");
    if(!arq){
        printf("Erro ao abrir dados.txt para leitura");
        exit(1);
    }

    //Contar os valores de cada categoria
    while(fscanf(arq,"%d %f", &cod, &valor)!=EOF){
        if (valor<=50){
            c1++;
        }
        else if(valor <= 100){
            c2++;
        }
        else{
            c3++;
        }
    }
    //Fechar o arquivo de entrada
    fclose(arq);

    //Abrir o arquivo texto de saída
    arq = fopen("resultados.txt", "w");
    if(!arq){
        printf("Nao foi possível criar resultados.txt\n");
        exit(2);
    }

    //Escrever os valores calculados no arquivo
    fprintf(arq,"%d\n%d\n%d\n", c1, c2, c3);
    //Fechar o arquivo
    fclose(arq);

    //Abrir o arquivo binário de saída
    arq = fopen("resultados.bin", "wb");

    //Escrever os valores calculados
    fwrite(&c1, sizeof(int), 1, arq);
    fwrite(&c2, sizeof(int), 1, arq);
    fwrite(&c3, sizeof(int), 1, arq);

    //Fechar o arquivo
    fclose(arq);
    return 0;
}

#include<stdio.h>
#include<stdlib.h>

int main(void){

    FILE *file;
    file = fopen("dados.txt", "r");

    if(file == NULL){
        printf("Nao foi possivel encontrar o arquivo.\n");
        return 0;
    }

    int x, inf50 = 0, inf100 = 0, sup100 = 0;
    float y;
    while(fscanf(file,"%d%f",&x,&y)!=EOF)
{
    if(y<= 50){
        inf50 += 1;
    }
    if(y > 50 && y <= 100){
        inf100 += 1;
    }
    if(y > 100){
        sup100 += 1;
    }

}


    file = fopen("resultados.txt", "w");
    fprintf(file, "%d\n%d\n%d\n", inf50, inf100, sup100);

    file = fopen("resultados.bin", "wb");
    fprintf(file, "%d\n%d\n%d\n", inf50, inf100, sup100);

    printf("Arquivos criados com sucesso.");
    fclose(file);

}

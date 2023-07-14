#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq;
    int n;
    char c;

    char nome[] = "numeros.txt";
    arq = fopen(nome,"w+");

    if(!arq){
        printf("Falha ao abrir %s para escrita", nome);
        exit(1);
    }

    fprintf(arq,"1 23 45 80 12");

    rewind(arq);

    while(!feof(arq)){
        fscanf(arq, "%d", &n);
        printf("%d ", n);
    }
    fseek(arq, 1, SEEK_SET); // anda 1 byte (cada caractere = 1 byte)
    fscanf(arq,"%d", &n);

    fseek(arq, -4, SEEK_END); //retorna 4 bytes a partir do fim do arquivo
    fprintf(arq,"AB");
    fflush(arq);
    fscanf(arq, "%c", &c);
    printf("\n%c", c);

    printf("\naqui: %d", n);

    fclose(arq);
    return 0;
}

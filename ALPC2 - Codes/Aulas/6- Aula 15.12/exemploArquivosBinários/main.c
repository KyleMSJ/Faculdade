#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    float m = 0.187;
    float v[3] = {0.1, 0.2, 0.3};

    int n2;
    float m2;
    float v2[3];

    FILE * bin;
    /*
    bin = fopen("binario", "wb");
    if(!bin){
        printf("Erro");
        exit(1);
    }

    //para escrita em arquivos binários: fwrite
    //para leitura em arquivos binários: fread

    fwrite(&n, sizeof(int), 1, bin);
    fwrite(&m, sizeof(float), 1, bin);
    fwrite(v, sizeof(float),3, bin);*/

    //lendo do arquivo binário
    bin = fopen("binario", "rb");
    if(!bin){
        printf("Erro");
        exit(1);
    }

    fread(&n2, sizeof(int), 1, bin);
    fread(&m2, sizeof(float), 1, bin);
    fread(v2, sizeof(float), 3, bin);

    printf("n2 = %d\n", n2);
    printf("m2 = %f\n", m2);
    printf("v2 = {%.1f, %.1f, %.1f}", v2[0], v2[1], v2[2]);
    fclose(bin);
    return 0;
}

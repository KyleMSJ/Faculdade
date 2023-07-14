#include <stdio.h>
#include <stdlib.h>

float ** criaMatriz (int lar, int alt) {
    float **m;
    int i;
    m = (float **) malloc(sizeof(float *)*alt);
    if (m == NULL) {
        printf("Memoria Insufisciente");
        exit (1);
    }
    for (i=0;i<alt;i++){
        m[i] = (float *) malloc(sizeof(float)*lar);
        if (m[i]==NULL){
            printf("Memoria Insufisciente");
            exit(2);
        }
    }
    return m;
}

void preencheMatriz (float **m, int lar, int alt){
    int i, j;
    for (i=0; i<alt; i++){
        for (j=0; j<lar; j++){
           m[i][j] = 3;
        }
    }
}

void imprimeMatriz (float **m, int lar, int alt){
    int i, j;
    for (i=0; i<alt; i++){
        for (j=0; j<lar; j++){
           printf("%.1f ", m[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    float **m;

    m = criaMatriz(5,3);
    preencheMatriz(m,5,3);
    imprimeMatriz(m,5,3);
    return 0;
}

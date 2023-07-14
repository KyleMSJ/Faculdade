#include <stdio.h>
#include <stdlib.h>

void escrevaMatriz(int *m[5][5]){
    int i,j;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
                printf("%d ", *m[i][j]);
        }
        printf("\n");
    }
}

void altereMatriz (int *m[5][5], int n){
// n - escalar que vai multiplicar a matriz identidade
    *m[0][0]=n; // altera toda a matriz pois est� pegando como par�metro o *endere�o de mem�ria*
// logo qualquer regi�o que pegue o endere�o de "um" serve (poderia ser m[1][1] por exemplo)
}
int main()
{
    int *m[5][5];
    int um = 1, zero = 0;
    int i, j;

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(i==j) m[i][j] = &um; //se i = j, a matriz recebe o endere�o da vari�vel "um"
            else m[i][j] = &zero; // sen�o recebe o endere�o da vari�vel "zero"
        }
    }
    altereMatriz(m,3); // Diagonal principal valendo 3
    escrevaMatriz(m);
    return 0;
}

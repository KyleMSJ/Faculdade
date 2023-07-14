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
    *m[0][0]=n; // altera toda a matriz pois está pegando como parâmetro o *endereço de memória*
// logo qualquer região que pegue o endereço de "um" serve (poderia ser m[1][1] por exemplo)
}
int main()
{
    int *m[5][5];
    int um = 1, zero = 0;
    int i, j;

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(i==j) m[i][j] = &um; //se i = j, a matriz recebe o endereço da variável "um"
            else m[i][j] = &zero; // senão recebe o endereço da variável "zero"
        }
    }
    altereMatriz(m,3); // Diagonal principal valendo 3
    escrevaMatriz(m);
    return 0;
}

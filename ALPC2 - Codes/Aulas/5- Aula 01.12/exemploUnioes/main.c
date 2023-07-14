#include <stdio.h>
#include <stdlib.h>

typedef char letra; // typedef - da outro nome para o *tipo* de variável

typedef struct num { // pelo menos o nº de bytes para armazenar todos os campos simultaneamente (memória)
    int x;
    float y;
    double z;
    char a;
} numero;

union valor{ //a memória é compartilhada entre as variáveis
    int x;
    float y;
    double z;
};

int main()
{
    /*
    union valor v1;
    v1.x = 5;
    printf("x: %d\n", v1.x);
    v1.y = 3.4;
    printf("y: %f\n", v1.y);
    printf("x: %d\n", v1.x); //por isso o valor original de x se perde ao imprimir ele novamente na tela
    v1.z = 7.1;
    printf("z: %lf\n", v1.z);
    printf("y: %f\n", v1.y);
    printf("x: %d\n", v1.x);
    */
    char a = 'j';
    letra b = 'm';
    numero n1;
    n1.x=5;
    n1.y=3.6;
    printf("%d, %f\n", n1.x, n1.y);

    printf("tamanho de um int: %d\n", sizeof(int));
    printf("tamanho de um float: %d\n", sizeof(float));
    printf("tamanho de um char: %d\n", sizeof(char));
    printf("tamanho de um double: %d\n", sizeof(double));
    printf("tamanho de um struct num: %d\n", sizeof(numero)); // imprime "24" - desperdiça um pouco de memória em troca de velocidade de acesso


    return 0;
}

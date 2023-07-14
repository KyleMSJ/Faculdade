#include <stdio.h>
#include <stdlib.h>

struct circulo {
    float x, y; // coordenadas do ponto central
    float raio;
} ;

struct retangulo{
    float x,y; // coordenadas do ponto superior esquerdo
    float base, altura;
};

union formaGeometrica{
    struct circulo cir;
    struct retangulo ret;
};

void imprimeForma (union formaGeometrica f){
    printf("centro: (%d,%d)\n", f.cir.x);
    printf("raio: (%d,%d)\n", f.cir.x);
}

int main()
{
    struct circulo f1;
    struct retangulo f2;
    union formaGeometrica fGen;

    fGen.cir.x = 0
    fGen.cir.y = 10;
    fGen.cir.raio = 4;
    printf("%d ", sizeof(union formaGeometrica));
    f1.x = f1.y = 0;
    f1.raio = 3;

    f2.x = -10;
    f2.y = 5;
    f2.base = 10;
    f2.altura = 5;

    return 0;
}

#include<stdio.h>
#include<stdlib.h>

struct personagem{
    char nome[41];
    int forca;
    int inteligencia;
    int hp;
};

struct personagem novoPersonagem (char *nome, int forca, int intel, int hp){
    struct personagem aux;
    strcpy(aux.nome, nome);
    aux.forca = forca;
    aux.inteligencia = intel;
    aux.hp = hp;
    return aux;
};
int main()
{
    struct personagem p1, p2;
    struct personagem * p3, *p4;
    p3 = &p1;

    p1 = novoPersonagem("Chrono", 10, 8, 20);
    p2 = novoPersonagem("Marle", 8, 12, 22);

    //printf("%s\n\n", (*p3).nome);
    printf("%s\n", p3 -> nome); //equivalente ao de cima

    p4 = (struct personagem *) malloc(sizeof(struct personagem));
    p4 -> forca = 10;
    printf("%d\n\n", p4 -> forca);

    /*
    sprintf(p1.nome, "Chrono");
    p1.forca = 10;
    p1.inteligencia = 8;
    p1.hp = 20;

    sprintf(p2.nome, "Marle");
    p2.forca = 8;
    p2.inteligencia = 12;
    p2.hp = 22;
    */
    //p2=p1; copia dos valores de p1 para p2
    //p2.forca=1000;

    printf("%s\n %d\n %d\n %d\n\n", p1.nome, p1.forca, p1.inteligencia, p1.hp);
    printf("%s\n %d\n %d\n %d", p2.nome, p2.forca, p2.inteligencia, p2.hp);
}

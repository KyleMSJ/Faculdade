#include <stdio.h>
#include <stdlib.h>

struct aluno{
    char nome[51];
    char ra[51]; //registro acadêmico
    float n1, n2, media;
};

void imprimeAluno (struct aluno a){
    printf("%s\n", a.nome);
    printf("%s\n", a.ra);
    printf("%.1f\n", a.n1);
    printf("%.1f\n", a.n2);
    printf("%.1f\n", a.media);
    printf("\n");
}
struct aluno criaAluno(char nome[51], char ra[51], float n1, float n2){
    struct aluno a;
    strcpy(a.nome, nome);
    strcpy(a.ra, ra);
    a.n1 = n1;
    a.n2 = n2;
    a.media = (n1+n2)/2;
    return a;
};

int main()
{
    struct aluno a1, a2;
    /*
    sprintf(a1.nome, "Chaves");
    sprintf(a1.ra, "b1");
    a1.n1 = 0;
    a1.n2 = 2;
    a1.media = (a1.n1+a1.n2)/2;
    */
    a1 = criaAluno("Chaves", "b1", 0, 2);
    a2 = criaAluno("Quico", "c1", 2, 1);

    imprimeAluno(a1);
    imprimeAluno(a2);
    return 0;
}

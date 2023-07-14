#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char *nome;
    nome = "Natasha";
    char *nomes[] = {"Tony Stark", "Banner", "Logan"};
    /* Não é possível alterar a string dessa forma (constante)
    a linha abaixo resulta em erro */
    ///nome[0] = 't';
    printf(nome);

    printf("\n");

    for (i=0; i<3; i++){
        printf("%s\n", nomes[i]);
    }
    return 0;
}

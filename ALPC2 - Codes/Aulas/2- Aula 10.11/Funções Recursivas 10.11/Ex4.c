#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverteR(char vet[], int p, int u) //*p* inicia em 0 e *u* na �ltima posi��o da string digitada pelo usu�rio
{
    char aux;
    if (u <= p) return;
    //inverte as letras de posi��o
    aux = vet[p];
    vet[p] = vet[u];
    vet[u] = aux; //inverte os caracteres da string com a ajuda de uma vari�vel auxiliar
    inverteR(vet, p+1, u-1); //percorre a string
}

void inverte(char plv[]){
    inverteR(plv,0,strlen(plv)-1);
}

int main ()
{
    char plv[51];
    scanf("%s", plv);
    inverte(plv);
    printf(plv);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*Verifica se o valor "elem" se encontra no vetor v de tamanho tam.
Retorna o índice onde o elemento se encontra, ou -1 caso o vetor não
contenha o valor procurado*/
int buscaSeq(int v[], int tam, int elem){
    int i;
    for (i=0; i<tam; i++){
        if(v[i]==elem)
            return i;
        else
            return -1;
    }
}
int main()
{
    int num[] = {5,8,2,4,7,80,76};
    int n;
    scanf("%d", &n);
    printf("valor %d na posicao %d\n", n, buscaSeq(num,sizeof(num)/sizeof(int),n));

    return 0;
}

/*Quais são os elementos visitados e em qual ordem
    no vetor acima em uma busca sequencial pelo número 4?
    resposta 1: 5, 8, 2, 4
    resposta 2: 7, 4

    e pelo número 10?
    resposta 1: 5, 8, 2, 4 e 7
    resposta 2: 7, 4, 2, 8 e 5
    */

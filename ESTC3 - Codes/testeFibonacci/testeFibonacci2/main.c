#include <stdio.h>
#include <stdlib.h>

int maior_vetor(int vetor[], int tamanho)
{
    if(tamanho==1)
        return vetor[0]; // Primeiro termo de Fibonacci
    else
    {
        int x;
        x = maior_vetor (vetor,tamanho-1); // variável x recebe o vetor com tamanho reduzido
    if (x > vetor[tamanho-1]) // Se x for maior que o último elemento do vetor
        return x; // Retorna x
    else
        return vetor[tamanho-1]; // Senão retorna o último elemento
    }
}
int main()
{
    int vet [6]; // Declaração de um vetor com 6 elementos
    int i;
    maior_vetor(vet, 6); // vetor e tamanho 6 passados como parâmetro
    for (i=0;i<=6;i++){
    printf(" %d", vet[i]);} // imprime na tela o último elemento do vetor
    return 0;
}

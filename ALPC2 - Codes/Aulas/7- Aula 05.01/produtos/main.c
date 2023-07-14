#include <stdio.h>
#include <stdlib.h>
#define NP 1000

struct produto{
char nome[51];
int qtd;
float valor;
};

void exibeMenu(){
    system("cls");
    printf("1: Insere produto \n");
    printf("2: Lista produto \n");
    printf("3: Sair \n");
}

/** pede para um usuário digitar as informações de um produto a ser inserido no estoque
e armazena as informações do mesmo na própria posição vaga no vetor estoque
a variável referenciada por qtdProd indica o número de produtos armazenados atualmente
no vetor, e deve ser atualizada de acordo ao término da função */
void insereProduto (struct produto estoque [], int *qtdProd){
    if(*qtdProd == NP){
        printf("Impossivel inserir mais produtos\n");
        return;
    }
    //completar o código aqui
    system("cls");
    printf("nome: ");
    scanf("%s", estoque[*qtdProd].nome);
    printf("Valor por unidade: ");
    scanf("%f", &estoque[*qtdProd].valor);
    printf("quantidade: ");
    scanf("%d", &estoque[*qtdProd].qtd);
}
int main()
{
    printf("Hello world!\n");
    return 0;
}

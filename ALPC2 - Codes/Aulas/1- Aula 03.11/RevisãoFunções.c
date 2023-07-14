#include<stdio.h>
#include<stdlib.h>

int soma(int n1, int n2);
void digaOi();
void imprimeAteOquatro(int v[], int n);
void alt(int x);
void altVetor(int vetor[5]); //Exemplo de declaração das funções no ínicio do programa

int x;

void funcao1(){
    x=10;
    printf("%d\n", x);
}

void funcao2(){
    static int x = 0; //permanece existente durante toda a execução do programa (evitando neste caso inicializar sempre com valor "0")
    x++;
    printf("%d\n", x);
}

int soma(int n1, int n2){
    //printf("%d", n1 + n2);
    return n1+n2; //retorna a soma na função principal "int main ()"
}

void digaOi(){
        printf("Oi\n");
}

void imprimeAteOquatro (int v[], int n){
    int i;
    for (i=0; i<n; i++){
        printf("%d ", v[i]);
        if(v[i]==4) return;
    }
    printf("\nChegou no fim do vetor. \n");
}

int main(){
    funcao2(); //mostra na tela "1" + quebra de linha
    funcao2(); //mostra na tela "2" + quebra de linha
    funcao2(); //mostra na tela "3" + quebra de linha
    return 0;
    /**int v[] = {12, 23, 7, 4, 80, 100}; //mostra até o 4, caso não houvesse o 4, mostra todos os números
    imprimeAteOquatro(v, 6);
    printf("Programa continua executando\n");
    //printf("%d", 87+soma(2, soma(10,6))); //soma de 10 + 6, resultado + 2 -> resultado + 87
    return 0;*/
}

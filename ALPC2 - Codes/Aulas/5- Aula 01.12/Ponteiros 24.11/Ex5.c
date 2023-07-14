#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int tam = 5, qtd = 0, valor;
    int i;
    int *num = NULL, *aux = NULL;

    //alocar memória inicial
    num = (int *) malloc (tam * sizeof(int));
    //verificar se a memória foi alocada com sucesso
    if(!num){ //(if num == NULL)
        printf("Não foi possível reservar a memória desejada");
        exit(1);
    }

    //Repita
    do{
     //leia número
     scanf("%d", &valor);
     //se número não for negativo
     if(valor >= 0){
     //se não cabe no vetor
      if(qtd >= tam){
        //Aumento a memória reservada
        aux = (int *) malloc (2*tam * sizeof(int));
        for(i=0; i<qtd; i++) { //memcpy
            aux[i] = num[i];
        }
        free(num);
        num=aux;
        aux=NULL;
        tam=tam*2;
      }
     //armazeno número no vetor
     num[qtd] = valor;
     qtd++;
     }
    }while(valor >= 0);
    //ENQUANTO número lido não for negativo

    //Escrever valores armazenados
    for(i=0; i<qtd; i++){
        printf("%d ", num[i]);
    }
    printf("\nTamanho de num: %d\n", tam);
    //liberar memória
    free(num);
    return 0;
}

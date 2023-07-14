#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int tam = 5, qtd = 0, valor;
    int i;
    int *num = NULL, *aux = NULL;

    //alocar mem�ria inicial
    num = (int *) malloc (tam * sizeof(int));
    //verificar se a mem�ria foi alocada com sucesso
    if(!num){ //(if num == NULL)
        printf("N�o foi poss�vel reservar a mem�ria desejada");
        exit(1);
    }

    //Repita
    do{
     //leia n�mero
     scanf("%d", &valor);
     //se n�mero n�o for negativo
     if(valor >= 0){
     //se n�o cabe no vetor
      if(qtd >= tam){
        //Aumento a mem�ria reservada
        aux = (int *) malloc (2*tam * sizeof(int));
        for(i=0; i<qtd; i++) { //memcpy
            aux[i] = num[i];
        }
        free(num);
        num=aux;
        aux=NULL;
        tam=tam*2;
      }
     //armazeno n�mero no vetor
     num[qtd] = valor;
     qtd++;
     }
    }while(valor >= 0);
    //ENQUANTO n�mero lido n�o for negativo

    //Escrever valores armazenados
    for(i=0; i<qtd; i++){
        printf("%d ", num[i]);
    }
    printf("\nTamanho de num: %d\n", tam);
    //liberar mem�ria
    free(num);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define NJ 5

enum valores {cara, coroa};

enum valores moeda(){
    return rand()%2;
}
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i;
    int score = 0;
    int pontMax = 0;
    char resposta;
    enum valores palpite;
    FILE *arq;
    //carregar pontua��o m�xima do arquivo
    //arq = fopen("placar.txt", "r"); -- arquivo texto
    arq = fopen("placar", "rb");
    if(!arq){
        printf("N�o foi poss�vel abrir arquivo com placar. \n");
        printf("Um novo placar ser� criado, e sua �ltima pontua��o ser� perdida");
        pontMax = 0;
        printf("\nDeseja continuar? (0 - n�o, 1 - sim)\n");
        resposta = getch();
        if (resposta == '0') exit(1);
        system("cls");
    }
    else{
        //fscanf(arq,"%d",&pontMax); -- arquivo texto
        fread(&pontMax,sizeof(int),1,arq);
        fclose(arq);
    }

    srand(time(NULL)); //sequ�ncias variam a cada vez que o programa roda
    for(i=0;i<NJ;i++){
        //printf((moeda()==cara?"cara\n":"coroa\n"));
        printf("cara (0) ou coroa(1)?\n");
        scanf("%d", &palpite);
        if(palpite==moeda()){
            score++;
            printf("Acertou!\n");
        }
        else printf("Errou...\n");
    }
    printf("Sua pontua��o: %d/%d\n", score, NJ);
    if(score > pontMax){
        printf("Novo Recorde!!!\n");
        pontMax = score;
    }
    else
        fread(&pontMax, sizeof(int),1,arq);
        printf("Pontua��o M�xima at� o momento: %d/%d", pontMax, NJ);

    //atualizar arquivo com pontua��o m�xima
    //arq = fopen("placar.txt", "w"); -- arquivo texto
    arq = fopen("placar", "wb");
    if(!arq){
        printf("Erro ao salvar placar \n");
        exit(2);
    }
    fwrite(&pontMax, sizeof(int),1,arq);
    //fprintf(arq,"%d",pontMax); -- arquivo texto1
    fclose(arq);
    return 0;
}

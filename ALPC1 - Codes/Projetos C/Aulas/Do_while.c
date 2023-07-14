#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include<time.h>
#include<unistd.h>

int main()
{
    int volta, conta_volta = 0;
    setlocale(LC_ALL, "Portuguese");

    //inicialização da variável de controle antes do teste lógico
    volta = 10;

    do
    {
        volta+= 2; //incremento ou modificação da var. de controle tem que estar
        //dentro do bloco (laço de repetição)
        printf("\n Eu sei programar em linguagem C, volta %d", volta);
        sleep(1);
        conta_volta++;
    }while(volta < 10); //teste lógico no final

    printf("\n\n O laço while deu %d voltas\n\n", conta_volta);
}

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

    //inicializa��o da vari�vel de controle antes do teste l�gico
    volta = 10;

    do
    {
        volta+= 2; //incremento ou modifica��o da var. de controle tem que estar
        //dentro do bloco (la�o de repeti��o)
        printf("\n Eu sei programar em linguagem C, volta %d", volta);
        sleep(1);
        conta_volta++;
    }while(volta < 10); //teste l�gico no final

    printf("\n\n O la�o while deu %d voltas\n\n", conta_volta);
}

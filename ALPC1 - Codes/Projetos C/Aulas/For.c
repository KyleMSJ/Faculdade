#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<unistd.h>

int main()
{
    int volta, conta_volta = 0;
    setlocale(LC_ALL, "Portuguese");

    while (volta <= 10)
    {
        volta++;
        if (volta == 3)
            continue; // desvia para o teste l�gico
        printf("\n Eu sei programar em linguagem C, volta %d", volta);
        sleep(1);
        if (volta == 6)
            break; // sai do la�o de repeti��o
        conta_volta++;

    }

    printf("\n\n O la�o while deu %d voltas\n\n", conta_volta);
}

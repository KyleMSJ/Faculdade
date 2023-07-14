#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
    int secr_num[5], i;
    setlocale(LC_ALL, "Portuguese");
    printf("Informe o número secreto. Você tem 5 chances: ");

    for (i=1;i<=5;i++)
    {
        printf("\n\tDigite o número secreto: ");
        scanf("%d", &secr_num[i]);
       if(secr_num[i] == 13)
       {
            printf("\t\nVocê acertou o número secreto \n\n");
            printf("O número está na %dº posição", i);
            return 0;
       }
    }
    printf("\n\n\tVocê não acertou o número secreto\n\n");

    getche();
}


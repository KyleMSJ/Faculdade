#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
    int secr_num[5], i;
    setlocale(LC_ALL, "Portuguese");
    printf("Informe o n�mero secreto. Voc� tem 5 chances: ");

    for (i=1;i<=5;i++)
    {
        printf("\n\tDigite o n�mero secreto: ");
        scanf("%d", &secr_num[i]);
       if(secr_num[i] == 13)
       {
            printf("\t\nVoc� acertou o n�mero secreto \n\n");
            printf("O n�mero est� na %d� posi��o", i);
            return 0;
       }
    }
    printf("\n\n\tVoc� n�o acertou o n�mero secreto\n\n");

    getche();
}


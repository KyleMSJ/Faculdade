#include<stdio.h>
#include<locale.h>

int main()
{
    int num [8], i;

    setlocale(LC_ALL, "Portuguese");
    for(i=0;i<=7;i++)
    {
        printf("\nDigite um n�mero (%d/8): ", i+1);
        scanf("%d", &num[i]);
    }
    for(i=0;i<=7;i++)
    {
    if (num [i] % 2 == 0)
        printf("\nN�mero na posi��o %d:\t %d \t Este n�mero � par", i+1, num[i]);
    else
        printf("\nN�mero na posi��o %d:\t %d \t Este n�mero � �mpar", i+1, num[i]);
    }

}

#include<stdio.h>
#include<locale.h>
#include<conio.h>

int main()
{
    float numeros[5];
    int i;
    setlocale(LC_ALL, "Portuguese");
    for(i=0;i<=4;i++)
    {
    printf("Digite um número: ");
    scanf("%f", &numeros[i]);
    }
    printf("Os números digitados foram: ");
    for(i=0;i<=4;i++)
    {
    printf("\n\t %.2f", numeros[i]);
    }
    printf("\nOs números digitados na ordem inversa foram: ");
    for(i=4;i>=0;i--)
    {
        printf("\n\t %.2f", numeros[i]);
    }
    for(i=0;i<=4;i++)
    printf("\n\n\tO número na posição %d é: %.2f", i+1, numeros[i]);
    printf("\n\n");
    getch();
}

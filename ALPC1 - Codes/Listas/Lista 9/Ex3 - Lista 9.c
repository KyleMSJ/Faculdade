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
    printf("Digite um n�mero: ");
    scanf("%f", &numeros[i]);
    }
    printf("Os n�meros digitados foram: ");
    for(i=0;i<=4;i++)
    {
    printf("\n\t %.2f", numeros[i]);
    }
    printf("\nOs n�meros digitados na ordem inversa foram: ");
    for(i=4;i>=0;i--)
    {
        printf("\n\t %.2f", numeros[i]);
    }
    for(i=0;i<=4;i++)
    printf("\n\n\tO n�mero na posi��o %d �: %.2f", i+1, numeros[i]);
    printf("\n\n");
    getch();
}

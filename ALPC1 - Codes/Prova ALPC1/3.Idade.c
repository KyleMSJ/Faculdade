#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main()
{
    int i, idade[10], menores=0, maiores=0, idosos=0, idoso_novo, auxiliar=100, auxiliar2=0;
    float media, soma=0;
    setlocale(LC_ALL, "Portuguese");
    for (i=1; i<=10; i++)
    {
    printf("Digite a idade da %d� pessoa: ", i);
    scanf("%d", &idade[i]);
    soma += idade [i];
    if (idade[i]<18)
        menores++;
    if (idade[i]>=18)
        maiores++;
        if ((idade[i]>auxiliar2) && (idade[i]<60))
            auxiliar2 = idade[i];
    if (idade[i]>=60)
        idosos++;
        if ((idade[i]<auxiliar) && (idade[i]>=60))
            auxiliar = idade[i];
    }
    media = soma / 10;
    printf("\n A m�dia das idades � de: %.0f anos", media);
    printf("\n %d pessoas s�o menores de idade", menores);
    printf("\n %d pessoas s�o maiores de idade", maiores);
    printf("\n %d pessoas s�o idosas", idosos);
    printf("\n o idoso mais novo tem %d anos", auxiliar);
    printf("\n a pessoa mais velha, n�o idosa, tem %d anos", auxiliar2);

}

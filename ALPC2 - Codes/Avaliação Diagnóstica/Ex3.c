#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float num[3], auxiliar = 0;
    int i;

    for (i=0; i<3; i++)
    {
    printf("%d� N�mero: ", i+1);
    scanf("%f", &num[i]);
    if (num[i] > auxiliar)
        auxiliar = num[i];
    }

    printf("Maior n�mero digitado: %.0f", auxiliar);
}

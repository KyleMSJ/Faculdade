#include<stdio.h>
#include<locale.h>
int main()
{
    int i;
    float numeros[5], total=0;
    setlocale(LC_ALL, "Portuguese");

    for (i=0; i<5; i++)
    {
        printf("Digite o %dº número: ", i+1);
        scanf("%f", &numeros[i]);
    }

    for (i=0; i<5; i++)
    {
        total=total+numeros[i];
    }
    printf("Total: %.2f", total);
}

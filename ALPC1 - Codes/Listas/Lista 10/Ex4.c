#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main()
{
    float vetor1[10], vetor2[10], soma[10], multi[10];
    int i, opc;
    setlocale(LC_ALL, "Portuguese");
    while(opc != 7)
    {
    printf("\nVetores - IFSP");
    printf("\n 1. Cadastrar primeiro vetor");
    printf("\n 2. Cadastrar segundo vetor");
    printf("\n 3. Efetuar soma");
    printf("\n 4. Mostrar resultado da soma");
    printf("\n 5. Efetuar multiplicação");
    printf("\n 6. Mostrar resultado da multiplicação");
    printf("\n 7. Sair do programa\n");
    scanf("%d", &opc);

    switch(opc)
    {
    case 1:
        for (i=0;i<10;i++)
        {
        printf("valor para a %dª posição do vetor 1: ", i+1);
        scanf("%f", &vetor1[i]);
        }
    break;
    case 2:
        for (i=0;i<10;i++)
        {
        printf("valor para a %dª posição do vetor 2: ", i+1);
        scanf("%f", &vetor2[i]);
        }
    break;
    case 3:
        for (i=0;i<10;i++)
        {
        soma[i] = vetor1[i] + vetor2[i];
        }
        printf("\n\tSoma efetuada com sucesso");
    break;
    case 4:
        for (i=0;i<10;i++)
        printf("\n\n%.2f", soma[i]);
    break;
    case 5:
        for (i=0;i<10;i++)
        {
        multi[i] = vetor1[i] * vetor2[i];
        }
        printf("\n\t Multiplicação efetuada com sucesso");
    break;
    case 6:
        for (i=0;i<10;i++)
            printf("\n\n%.2f", multi[i]);
    }
    }
}


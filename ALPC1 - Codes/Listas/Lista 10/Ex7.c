#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main()
{
    float vetor1[10], vetor2[10], mult_inv[10];
    int i, opc;
    setlocale(LC_ALL, "Portuguese");
    while(opc != 5)
    {
    printf("\nVetores - IFSP");
    printf("\n 1. Cadastrar primeiro vetor");
    printf("\n 2. Cadastrar segundo vetor");
    printf("\n 3. Efetuar a multiplicação inversa");
    printf("\n 4. Mostrar resultado da mutiplicação");
    printf("\n 5. Sair do programa\n");
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
        mult_inv[i] = vetor1[i] * vetor2[9-i];
        }
        printf("\n\tMultiplicação inversa efetuada com sucesso");
    break;
    case 4:
        for (i=0;i<10;i++)
        printf("\n\n%.2f", mult_inv[i]);
    }
    }
}


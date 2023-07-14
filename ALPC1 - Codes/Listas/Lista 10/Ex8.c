#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main()
{
    float vetor[10], num;
    int i, opc, v;
    setlocale(LC_ALL, "Portuguese");
    while(opc != 3)
    {
        printf("\nBusca em vetores");
        printf("\n 1. Cadastrar números");
        printf("\n 2. Buscar número");
        printf("\n 3. Sair do programa\n");
        printf("Opção: ");
        scanf("%d", &opc);

        switch(opc)
        {
        case 1:
            for (i=0; i<10; i++)
            {
                printf("valor para a %dª posição do vetor: ", i+1);
                scanf("%f", &vetor[i]);
            }
            break;
        case 2:
            printf("Digite o número: ");
            scanf("%f", &num);
            v = 0;
            for(i=0; i<10; i++)
            {
                if (vetor[i] == num)
                {
                    printf("o número %.2f está na posição %d\t", num, i+1);
                v = 1;
                }
            }
            if (v != 1)
                    printf("Elemento não encontrado.");
            break;
        }
    }
}


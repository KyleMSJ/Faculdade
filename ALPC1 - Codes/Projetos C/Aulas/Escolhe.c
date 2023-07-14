#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int opc;
    float res;

    printf("\t*********MENU DE ESCOLHA***********");
    printf("\n");
    printf("\n \t1- Calca");
    printf("\n \t2- Camisa");
    printf("\n \t3- Gravata");
    printf("\n \t4- Nenhuma das opcoes");
    printf("\n \t***********************************");
    printf("\n\n \tEscolha um das opcoes acima");
    printf("\n \tOpcao desejada: ");
    scanf("%d", &opc);

    switch(opc)
    {
    case 1:
        printf("\n\tCalca foi escolhida");
        break;
    case 2:
        printf("\n\tCamisa foi escolhida");
        break;
    case 3:
        printf("\n\tGravata foi escolhida");
        break;
    case 4:
        printf("\nNenhuma das opcoes");
        break;
    default:
        printf("Opcao invalida");
    }
    opc++; //Incremento
    printf("\n\nIncrementando o opc em 1: %d", opc);
    opc--; //Decremento
    printf("\n\nDecrementando o opc em 1: %d ", opc);

    res = (float)opc / 2; //Modificador de tipo
    printf("\n\nResultado %f", res);
}

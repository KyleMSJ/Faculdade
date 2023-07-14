#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    float media, frequencia; //usando a variável "double" se tem maior precisão com decimais

    setlocale(LC_ALL, "Portuguese");
    printf("Digite a média: ");
    scanf("%f", &media);
    /*Quando utilizar #include<locale.h> e o respectivo comando setlocale(LC_ALL, "Portuguese");
    Fazer a leitura de valores reais com virgula "," nos scanfs.
    Porém para cálculos atribuídos diretamente no código deve-se continuar utilizando o ponto "." como separador de decimais.*/
    printf("Digite a frequência: ");
    scanf("%f", &frequencia);

    if(frequencia < 75 || media < 4)
        printf("\nReprovado!");
    else if(media >= 6)
        printf("\nAprovado!");
    else
        printf("\nRecuperação!");
}

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    float media, frequencia; //usando a vari�vel "double" se tem maior precis�o com decimais

    setlocale(LC_ALL, "Portuguese");
    printf("Digite a m�dia: ");
    scanf("%f", &media);
    /*Quando utilizar #include<locale.h> e o respectivo comando setlocale(LC_ALL, "Portuguese");
    Fazer a leitura de valores reais com virgula "," nos scanfs.
    Por�m para c�lculos atribu�dos diretamente no c�digo deve-se continuar utilizando o ponto "." como separador de decimais.*/
    printf("Digite a frequ�ncia: ");
    scanf("%f", &frequencia);

    if(frequencia < 75 || media < 4)
        printf("\nReprovado!");
    else if(media >= 6)
        printf("\nAprovado!");
    else
        printf("\nRecupera��o!");
}

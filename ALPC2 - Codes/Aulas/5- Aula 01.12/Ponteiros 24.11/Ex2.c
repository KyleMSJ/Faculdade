#include<stdio.h>
#include<stdlib.h>

/**Crie a função ordena que receba como parâmetro três variáveis (passagem por
referência) e ordene os valores destas variáveis em ordem crescente, respeitando a
ordem da passagem dos parâmetros. Por exemplo, considerando as seguintes
variáveis com os valores: a=7, b=3 e c=5, se as mesmas forem passadas por referência,
nesta ordem, para a função pedida, o valor das mesmas após o retorno da função deve
ser a=3, b=5 e c=7.
*/

void ordena (int *n1, int *n2, int *n3){
    int aux;
    if(*n1 > *n2){
        aux = *n1;
        *n1 = *n2;
        *n2 = aux;
    }
    if(*n2 > *n3){
        aux = *n2;
        *n2 = *n3;
        *n3 = aux;
    }
    if(*n1 > *n2){
        aux = *n1;
        *n1 = *n2;
        *n2 = aux;
    }
}

int main()
{
    int a=7,b=5,c=3;
    ordena(&a,&b,&c);
    printf("%d, %d, %d", a, b, c);
    return 0;
}

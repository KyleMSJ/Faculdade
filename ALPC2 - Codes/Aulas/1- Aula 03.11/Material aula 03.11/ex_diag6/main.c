#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j; //tamanho do tri�ngulo
    printf("Digite o tamanho do triangulo desejado.\n");
    scanf("%d",&n);

    //desenhar o tri�ngulo
    printf("\n");
    //para cada linha i
    for(i=1;i<=n;i++){
        //escreva i *'s
        for(j=0;j<i;j++){
            printf("*");
        }
        //escreva um '\n'
        printf("\n");
    }

    return 0;
}

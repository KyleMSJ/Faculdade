#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma=0,qtd=0, n;

    scanf("%d",&n);

    while(n>=0){
        qtd++;
        soma+=n; //soma = soma+n;
        scanf("%d",&n);
    }

    if(qtd==0){
        printf("Nenhum numero maior ou igual a 0 digitado.");
    }
    else{
        printf("media: %.2f\n",((float)soma)/qtd);
        printf("qtd: %d",qtd);
    }

    return 0;
}

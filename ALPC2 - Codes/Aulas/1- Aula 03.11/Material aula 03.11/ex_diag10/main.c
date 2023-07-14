#include <stdio.h>
#include <stdlib.h>

int indiceMaiorValor(int numeros[], int n){
    int i,iMaior=0; //indice do maior valor
    for(i=1;i<n;i++){
        if(numeros[i]>numeros[iMaior]){
            iMaior=i;
        }
    }
    return iMaior;
}

int main()
{
    int v[] = {100,200,312,43,570,123,800};
    printf("%d",indiceMaiorValor(v,sizeof(v)/sizeof(int))); //retorna o tamanho da variável ou tipo em bytes
    return 0;
}

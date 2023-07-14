#include <stdio.h>
#include <stdlib.h>
//NÃO FAZER ASSIM!!!
//Só funciona uma vez.
int fatorial (int n){
    int static res=1;
    if (n==0) return res;
    res = res*n;
    fatorial(n-1);
}
int main()
{
    printf("%d\n", fatorial(6));
    printf("%d\n", fatorial(6)); // retorna valor errado, pois considera valor da última chamada
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
//N�O FAZER ASSIM!!!
//S� funciona uma vez.
int fatorial (int n){
    int static res=1;
    if (n==0) return res;
    res = res*n;
    fatorial(n-1);
}
int main()
{
    printf("%d\n", fatorial(6));
    printf("%d\n", fatorial(6)); // retorna valor errado, pois considera valor da �ltima chamada
    return 0;
}

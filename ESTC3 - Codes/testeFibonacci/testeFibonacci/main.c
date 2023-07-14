#include <stdio.h>
#include <stdlib.h>

int Fib(int n)
{
    printf("> Entrando em Fib(%d)\n", n);
    int F;
    if (n <= 1)
        F = n;
    else
        F = (Fib(n-1)+Fib(n-2));
        printf("<< Saindo de Fib(%d), retorno = %d\n ", n, F);
        return F;
}
int main()
{
    printf("%d", Fib(6));
    return 0;
}

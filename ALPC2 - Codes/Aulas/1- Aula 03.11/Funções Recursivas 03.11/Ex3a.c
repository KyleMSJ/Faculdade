#include <stdio.h>
#include <stdlib.h>

float f(int n)
{
    if(n==1) return 1.0; // "." para n�o dar problema com divis�o de inteiros
    else return f(n-1) + 1.0/n;
}

int main()
{
    printf("%f",f(4));
    return 0;
}

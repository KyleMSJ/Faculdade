#include <stdio.h>
#include <stdlib.h>

float f(int n)
{
    if(n==1) return 1.0; // "." para não dar problema com divisão de inteiros
    else return f(n-1) + 1.0/n;
}

int main()
{
    printf("%f",f(4));
    return 0;
}

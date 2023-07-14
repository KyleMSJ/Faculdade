#include <stdio.h>
#include <stdlib.h>

int dobro(int n){
    return 2*n;
}

int main()
{
    printf("%d",dobro(dobro(3)));
    return 0;
}

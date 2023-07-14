#include <stdio.h>
#include <stdlib.h>

void incrementa(int *p)
{
    //*p = *p + 1
    (*p)++;
}

int main()
{
    int n = 5;
    incrementa(&n);
    printf("%d", n);
    return 0;
}

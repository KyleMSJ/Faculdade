#include <stdio.h>
#include <stdlib.h>

towers(int n, char from, char to, char aux)
{
    if (n==1)
    {
        printf("\n %s%c%s%c", "move disco 1 da estaca ", from, " para a estaca ", to);
        return;
    }
    towers(n-1, from, aux, to);
    printf("\n %s%d%s%c%s%c", "move disco ", n, " da estaca " ,from, " p/ a estaca ", to);
    towers(n-1, aux, to, from);
}

int main()
{
    int n;
    scanf("%d", &n);
    towers(n, 'A', 'B', 'C');
    return 0;
}

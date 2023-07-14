#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int A[MAX] = { 10, 14, 19, 26, 27, 31, 33, 35, 42, 44 };
//int A[MAX] = { 10, 14, 190, 260, 2700, 3100, 33000, 35000, 42000, 440000 };

int busca_binaria(int x)
{
    int inf=0, sup=MAX-1, meio;
    while (inf<=sup)
    {
        meio=inf+(sup-inf)/2;
        printf("Meio binaria: %d\n", meio);
        if (x==A[meio])
            return(meio);
        else
            if (x<A[meio])
                sup=meio-1;
            else
                inf=meio+1;
    }
    return(-1);
}
int main()
{
    busca_binaria(26);
    return 0;
}

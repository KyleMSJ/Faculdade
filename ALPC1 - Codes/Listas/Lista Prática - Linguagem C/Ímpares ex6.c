#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main()
{
    int n1;
    setlocale(LC_ALL, "Portuguese");
    n1 = 101;

    while (n1 < 200)
    {
        printf("%d\t", n1);
        n1 += 2;
    }
    n1 = 501;
    printf("\n\n");

    while (n1 < 600)
    {
        printf("%d\t", n1);
        n1 += 2;
    }

}

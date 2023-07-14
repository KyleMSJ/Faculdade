#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main()
{
    int n2;
    setlocale(LC_ALL, "Portuguese");
    n2 = 1500;

    while (n2 <= 1600)
    {
        printf("%d\t", n2);
        n2 += 2;
    }
    n2 = 700;
    printf("\n\n");

    while (n2 <= 800)
    {
        printf("%d\t", n2);
        n2 += 2;
    }

}

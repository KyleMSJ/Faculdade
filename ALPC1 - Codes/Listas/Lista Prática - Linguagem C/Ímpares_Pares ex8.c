#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main()
{
    int n1, n2;
    setlocale(LC_ALL, "Portuguese");
    n1 = 1001;

    while (n1 < 1100)
    {
        printf("%d\t", n1);
        n1 += 2;
    }
    n2 = 400;
    printf("\n\n");

    while (n2 <= 500)
    {
        printf("%d\t", n2);
        n2 += 2;
    }

}

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    char co, lo; // coluna origem, linha origem
    char cd, ld; // coluna destino, linha destino
    int dc, dl; // distância coluna, distância linha
    scanf("%c%c %c%c", &co, &lo, &cd, &ld);
    dc = abs(co-cd);
    dl = abs(lo-ld);

    if ((dc == 2 && dl == 1) || (dc == 1 && dl == 2))
        printf("VALIDO\n");
    else
        printf("INVALIDO\n");
    return 0;
}

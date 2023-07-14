#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[5] = {3,6,21,5,80};
    int *p;
    p = &v[0]; // p=v dá o mesmo resultado.
    printf("%d\n", *(p+1)); // andando no vetor através do ponteiro: imprime "6" na tela.
    printf("%d\n", *(p+2)); // imprime "21" na tela. *(p+2) = v[2] = p[2] = *(v+2).
    p=p+4;
    printf("%d\n", *p); // "80".
    printf("%d\n", *(v+2)); // o que está no endereço do 3 elemento do vetor. *(p+2).
    printf("%d\n", v[2]);
    p=v;
    printf("%d\n", (p[2]));

    /*int a = 5;
    int *r;
    r = &a;
    printf("%d\n", r);
    printf("%d\n", r+1); // +1 = 4 bytes - inteiro */

    /*char a = 'b';
    char *r;
    r = &a;

    printf("%d\n", r);
    printf("%d\n", r+1); // +1 = 1 byte pois a variável é do tipo caracter */
    return 0;
}

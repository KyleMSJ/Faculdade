#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define MAX 10

/** Faça um programa que leia 10 nomes do teclado e para cada nome calcule e exiba
a quantidade de vogais existentes.*/
int main()
{
    char plv[51];
    int vogais;
    int i;
    int nn; // número/nome
    setlocale(LC_ALL, "Portuguese");
        for(nn=1; nn<=MAX; nn++){
        vogais = 0;
        printf("Digite o %dº nome, por favor\n", nn);
        scanf("%s", plv);

        for(i=0; i<strlen(plv); i++){
            if (!(plv[i] != 'a' && plv[i] != 'e' && plv[i] != 'i' && plv[i] != 'o' && plv[i] != 'u' && plv[i] != 'A' && plv[i] != 'E' &&
                plv[i] != 'I' && plv[i] != 'O' && plv[i] != 'U'))
                vogais++;
        }
        printf("%d vogais\n\n", vogais);
        }
        return 0;
}

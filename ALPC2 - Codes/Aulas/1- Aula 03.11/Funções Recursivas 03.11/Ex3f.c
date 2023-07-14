#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Verifique se a palavra � um pal�ndromo

// retorna 1 se for pal�ndromo, e 0 caso contr�rio
char palindromoR(char plv[], int p, int u)
{
    if(u<=p) return 1; // J� percorreu toda a palavra
    if(plv[p] != plv[u]) return 0; // contraexemplo: arara, 'a' (p) = 'a' (u)
    return palindromoR(plv, p+1, u-1); //percorre a string em dire��o ao meio dela por ambos os "lados"
}

char palindromo(char plv[])
{
    return palindromoR(plv, 0, strlen(plv)-1); //passa como par�metro a string, sua primeira posi��o, e sua �ltima posi��o (sendo o comprimento total -1)
}
int main()
{
    char plv[51];
    scanf("%s", plv);
    if (palindromo(plv))
    {
        printf("Palindromo!!! Legal!!");
    }
    else
    {
        printf("Nao eh palindromo... T_T");
    }
    return 0;
}

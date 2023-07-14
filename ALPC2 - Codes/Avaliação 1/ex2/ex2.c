// Caio Marcelo da Silva de Jesus

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int i;

int palavra (char s[], int *vog, int *tam)
{
    for (i=0; s[i]!='\0'; i++)
        {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
        *vog = *vog + 1;}
        *tam = strlen(s);
        }
}
int main ()
{
    int v = 0, t = 0;
    char str[30];
    fgets(str,30,stdin);
    palavra(str,&v,&t);
    printf("Quantidade de vogais: %d\n", v);
    printf("Tamanho da string: %d\n", t-1);
}

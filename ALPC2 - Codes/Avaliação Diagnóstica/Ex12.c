#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ()
{
    char palavra[21]; // \0 - "sentinela" (delimita o fim da string)
    int i;

    printf("Digite uma palavra: ");
    fgets(palavra, 21, stdin);
    for (i=0; i<=strlen(palavra); i++) // for (i=0; palavra[i]!= '\0'; i++) também é possível
        {
           if (palavra[i] == 'a')
              palavra[i] = '@';
        }
    printf("\n \t %s", palavra);
    return 0;
}


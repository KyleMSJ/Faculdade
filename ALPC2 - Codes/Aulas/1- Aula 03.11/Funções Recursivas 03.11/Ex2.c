#include<stdio.h>
#include<stdlib.h>

/*A função recursiva abaixo tem como objetivo escrever apenas as vogais minúsculas de uma
string passada como parâmetro, no entanto, apresenta um erro que pode ser facilmente
corrigido com uma alteração em uma única linha. Qual é este erro? E qual seria uma possível
correção?*/

void vogais(char *p)
{
    if(*p=='\0')return;
    if(*p=='a'||*p=='e'||*p=='i'
            ||*p=='o'||*p=='u')printf("%c",*p);
    vogais(p+1); //essa linha estava errada: vogais(p) - entra em um loop com a vogal 'a' pois vogais não percorre o vetor de caracteres
}
int main()
{
    vogais("abobora");
}


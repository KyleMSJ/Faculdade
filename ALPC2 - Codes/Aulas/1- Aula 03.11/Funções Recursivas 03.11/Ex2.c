#include<stdio.h>
#include<stdlib.h>

/*A fun��o recursiva abaixo tem como objetivo escrever apenas as vogais min�sculas de uma
string passada como par�metro, no entanto, apresenta um erro que pode ser facilmente
corrigido com uma altera��o em uma �nica linha. Qual � este erro? E qual seria uma poss�vel
corre��o?*/

void vogais(char *p)
{
    if(*p=='\0')return;
    if(*p=='a'||*p=='e'||*p=='i'
            ||*p=='o'||*p=='u')printf("%c",*p);
    vogais(p+1); //essa linha estava errada: vogais(p) - entra em um loop com a vogal 'a' pois vogais n�o percorre o vetor de caracteres
}
int main()
{
    vogais("abobora");
}


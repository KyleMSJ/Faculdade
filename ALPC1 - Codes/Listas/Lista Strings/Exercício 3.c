#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    char str1[10], str2[10], str3[10];
    gets(str1);
    gets(str2);
    gets(str3);
    if((strcmp(str1,str2)==0) && (strcmp(str1,str3)==0) && (strcmp(str2,str3)==0))
        printf("As strings são iguais");
    else
        printf("As strings são diferentes");

}

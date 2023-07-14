#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ()
{
    char nomeTime[10];
    char nomeCompleto[20];
    fgets(nomeTime,30,stdin);
    strcpy(nomeCompleto,"Futebol Clube");
    strcat(nomeTime,nomeCompleto);
    if (strcmp(nomeTime,"Santos")==0)
        printf("%s", nomeCompleto);



}

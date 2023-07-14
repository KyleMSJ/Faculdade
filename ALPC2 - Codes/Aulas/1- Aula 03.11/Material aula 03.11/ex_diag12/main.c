#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    char palavra[21]; // '\0': caractere de fim de string
    printf("Digite uma palavra\n");

    scanf("%s",palavra);

    //gets(palavra);
    //fgets(palavra,21,stdin);

    //substituir todos os 'a's, por '@'s.

    //for(i=0;i<=21;i++){
    //for(i=0;i<=strlen(palavra);i++){
    for(i=0;palavra[i]!='\0';i++){
        if(palavra[i]=='a'){
            palavra[i]='@';
        }
    }


    printf("%s",palavra);
    //printf(palavra);


    return 0;
}

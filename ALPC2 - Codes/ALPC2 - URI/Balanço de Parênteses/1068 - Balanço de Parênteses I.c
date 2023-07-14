#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char exp[1001];
    int i;
    int controle = 0;

    while(scanf("%s",exp)!=EOF)
        {
        controle=0;
    for (i=0; i<strlen(exp); i++)
        {
        if(exp[i]=='(') controle++;
            if(exp[i]==')'){
                    controle--;
        if(controle<0){
            break;
            }
        }
    }
    if(controle == 0){
        printf("correct");
    }
    else{
        printf("incorrect");
    }
        }

    return 0;

}


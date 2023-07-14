#include <stdio.h>
#include <stdlib.h>

void listaConvidados(char *convidados[], int n, void(*f)(char *)){ //formata toda a lista pelo parâmetro dado
    int i;
    for (i=0; i<n; i++){
        f(convidados[i]);
        printf(convidados[i]);
    }
}

void formata1 (char *p){
    int i;
    for (i=0;i<strlen(p);i++){
        if(p[i]=='a') p[i] = '@';
    }
}

void formata2 (char *p){
    int i;
    for (i=0;i<strlen(p);i++){
        if(p[i]=='a') p[i] = '4';
    }
}

int main()
{
    char * convidados [3];
    int i;

    convidados[0] = (char *) malloc(sizeof(char)*31);
    convidados[1] = (char *) malloc(sizeof(char)*51);
    convidados[2] = (char *) malloc(sizeof(char)*12);

    for (i=0; i<3; i++){
        printf("Digite o nome do convidado %d:\n", i+1);
        fgets(convidados[i], 21, stdin);
    }
    system("cls");
    //formata1(convidados[0]); - formata a -> @
    //formata2(convidados[1]); - formata a -> 4
    listaConvidados(convidados, 3, formata2);
    free(convidados[0]);
    free(convidados[1]);
    free(convidados[2]);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct pessoa{
    char nome[51];
    int idade;
};

struct pessoa criaPessoa(char *nome, int idade){
    struct pessoa p;
    strcpy(p.nome,nome);
    p.idade=idade;
    return p;
};

int main()
{
    struct pessoa p;
    int i;
    struct pessoa lista[5];

    lista[0] = criaPessoa("Renan",40);
    lista[1] = criaPessoa("Julinho",38);
    lista[2] = criaPessoa("Maurilio",36);
    lista[3] = criaPessoa("Rogerinho",39);

    p = criaPessoa("Renan",45);
    //printf("%s, %d",p.nome,p.idade);

    FILE *bin;

    bin = fopen("pessoas","wb");
    if(!bin){
        printf("erro");
        exit(1);
    }

    fwrite(lista, sizeof(struct pessoa), 4, bin);
    fclose(bin);

    bin = fopen("pessoas","rb");
    if(!bin){
        printf("erro");
        exit(1);
    }

    fread(lista, sizeof(struct pessoa), 4, bin);
    fclose(bin);

    for(i=0;i<4;i++){
        printf("%s, %d\n",lista[i].nome,lista[i].idade);
    }
    fclose(bin);

    /*
    p = criaPessoa("Renan",45);
    //printf("%s, %d",p.nome,p.idade);

    FILE *bin;

    bin = fopen("pessoas","wb");
    if(!bin){
        printf("erro");
        exit(1);
    }

    fwrite(&p, sizeof(struct pessoa), 1, bin);

    fclose(bin);

    bin = fopen("pessoas","rb");
    if(!bin){
        printf("erro");
        exit(1);
    }

    p.nome[0]='A'; -- coloca o caractere 'A' no primeiro índice da string nome
    p.idade=0;

    fread(&p, sizeof(struct pessoa), 1, bin); -- lê o que estava salvo anteriormente

    printf("%s, %d",p.nome,p.idade); -- imprime na tela "Renan, 45"
    fclose(bin);
*/

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pausar()
{
    #ifdef WIN32
    system("pause");
    #else
    system("read -p \"Pressione enter para sair\"");
    #endif
}


void limparTela()
{
    #ifdef WIN32
    system("cls");
    #else
    system("clear");
    #endif
}

int main()
{
	printf("CAIO MARCELO DA SILVA DE JESUS - PC3011259\nJEFFERSON ROBERTO PIAIA MARTINES - PC3015602"
"\nLEONARDO VINICIUS MARTINS CUNHA - PC3008941\nMATEUS DE CASTRO DUARTE CARDOSO - PC3008851\nMURILO FORMAGGIO FELICIANO - PC3006875\n\n");
	pausar();
    limparTela();

	char texto[4];
	int i, j, r, n = 10, m = 5;

    for(i=0; i<m; i++){

    printf("Palavra %d: ", i+1);
    scanf("%s", &texto[j]);
    printf("Visao do compilador: ");
    	for(r=0; r<n; r++){
   			printf("%d", rand() % 2);
    	}
    printf("\n\n");

    }


}

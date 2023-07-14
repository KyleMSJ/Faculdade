#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<stdlib.h>
#define tam 10

struct hash
{
    int chave;
    char livre; // L = livre, O = ocupado, R = removdo
};

int funcao_hashing(int num)
{
    return num%tam;
}

void mostrar_hash(struct hash tabela[])
{
    for (int i=0; i < tam; i++)
        if(tabela[i].livre == 'O')
        printf("Entrada %d : %d \n", i, tabela[i].chave); // Mostra as posições ocupadas e suas respectivas chaves
}

void inserir(struct hash tabela[], int pos, int n)
{
    int i = 0;
    while(i < tam && tabela[(pos+i)%tam].livre != 'L' && tabela[(pos+i)%tam].livre != 'R')
        i++;

    if (i < tam){
        tabela[(pos+i)%tam].chave = n;
        tabela[(pos+i)%tam].livre = 'O';}
    else
        printf("Tabela Cheia!");
}

int buscar (struct hash tabela[], int n)
{
    int i = 0;
    int pos = funcao_hashing(n);

    while (i < tam && tabela[(pos+i)%tam].livre != 'L' && tabela[(pos+i)%tam].chave != n) // Enquanto a posição estiver livre e a chave for diferente do elemento procurado
        i++;

    if (tabela[(pos+i)%tam].chave == n && tabela[(pos+i)%tam].livre != 'R') // elemento buscado = chave e a posição for diferente de "removido"
        return (pos+i)%tam; // Posição do elemento encontrado
    else
        return tam; // não encontrado
}

void remover(struct hash tabela[], int n)
{
    int posicao = buscar(tabela, n);

    if (posicao < tam)
        tabela[posicao].livre = 'R';
    else
        printf("\n Elemento não está presente.");
}
void main()
{
    setlocale(LC_ALL, "Portuguese");
    struct hash tabela[tam];

    int op, pos; // opção, posição
    int i, num; // iteração, número

    // inicialização da tabela
    for (i=0; i < tam; i++)
        tabela[i].livre = 'L'; // Todas as posições livres

    do
    {
        system("cls");
        printf("\n MENU DE OPÇÕES\n");
        printf("1 - Inserir elemento\n");
        printf("2 - Mostrar tabela hashing\n");
        printf("3 - Excluir elemento\n");
        printf("4 - Sair\n");
        printf("Digite sua opção: ");
        scanf("%d", &op);

        if (op < 1 || op > 4)
            printf("\n Opção Inválida! ");
        else
        {
            switch(op)
            {
                case 1:
                    printf("Digite um número:");
                    scanf("%d", &num);
                    pos = funcao_hashing(num); // mapeia o endereço da chave na tabela
                    inserir (tabela, pos, num);
                    break;
                case 2:
                    mostrar_hash(tabela);
                    break;
                case 3:
                    printf("Digite um número: ");
                    scanf("%d", &num);
                    remover(tabela, num);
                    break;
        }
    }
    getch();

} while (op != 4);
    return 0;
}


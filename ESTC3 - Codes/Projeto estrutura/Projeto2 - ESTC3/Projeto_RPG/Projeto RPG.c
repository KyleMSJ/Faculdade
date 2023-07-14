#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

// Colocar limpaTela / colocar delay
typedef struct
{
	char nome[100];
	int vida;
	char cinto1[20];
	char cinto2[20];
	char cinto3[20];
	char mochila3[20];
	char mochila2[20];
	char mochila1[20];
} personagem;
personagem heroi[1];

typedef struct
{
	char nome[50];
	int ataque;
	int qtdvida;
} inimigo;
inimigo guerreiro[15];

typedef struct
{

	char nome[50];
	int ataque;
	int peso;
} arma;
arma Arma[10];

typedef struct
{
	char nome[50];
	int cura;
	int peso;
} pocao;
pocao Pocao[4];

void define_geral()
{
    int aleatorio;
	strcpy(guerreiro[0].nome,"Scorpion");
	guerreiro[0].qtdvida=80;
    srand((unsigned)time(NULL));
    aleatorio = (rand() % 10);
    guerreiro[0].ataque=aleatorio;

	strcpy(guerreiro[1].nome,"Sub-zero");
	guerreiro[1].qtdvida=80;
    srand((unsigned)time(NULL));
    aleatorio = (rand() % 20)+10;
    guerreiro[1].ataque=aleatorio;

	strcpy(guerreiro[2].nome,"Sonia");
	guerreiro[2].qtdvida=80;
    srand((unsigned)time(NULL));
    aleatorio = (rand() % 30)+20;
    guerreiro[2].ataque=aleatorio;

	strcpy(guerreiro[3].nome,"Jax");
	guerreiro[3].qtdvida=80;
    srand((unsigned)time(NULL));
    aleatorio = (rand() % 40)+30;
    guerreiro[3].ataque=aleatorio;

	strcpy(guerreiro[4].nome,"Kano");
	guerreiro[4].qtdvida=80;
    srand((unsigned)time(NULL));
    aleatorio = (rand() % 45)+35;
    guerreiro[4].ataque=aleatorio;

	strcpy(guerreiro[5].nome,"Kitana");
	guerreiro[5].qtdvida=80;
    srand((unsigned)time(NULL));
    aleatorio = (rand() % 55)+45;
    guerreiro[5].ataque=aleatorio;

	strcpy(guerreiro[6].nome,"Liu-Kang");
	guerreiro[6].qtdvida=80;
    srand((unsigned)time(NULL));
    aleatorio = (rand() % 60)+55;
    guerreiro[6].ataque=aleatorio;

	strcpy(guerreiro[7].nome,"jhonny Cage");
	guerreiro[7].qtdvida=80;
    srand((unsigned)time(NULL));
    aleatorio = (rand() % 65)+60;
    guerreiro[7].ataque=aleatorio;

	strcpy(guerreiro[8].nome,"Shao Kahn");
	guerreiro[8].qtdvida=80;
    srand((unsigned)time(NULL));
    aleatorio = (rand() % 70)+60;
    guerreiro[8].ataque=aleatorio;


	strcpy(guerreiro[9].nome,"Goro"); //Boss
	guerreiro[9].qtdvida=200;
    srand((unsigned)time(NULL));
    aleatorio = (rand() % 80)+70;
    guerreiro[9].ataque=aleatorio;

	strcpy(Pocao[0].nome,"Pocao pequena (20hp)");
	Pocao[0].cura=20;
	Pocao[0].peso=5;
	strcpy(Pocao[1].nome,"Pocao media (40hp)");
	Pocao[1].cura=40;
	Pocao[1].peso=10;
	strcpy(Pocao[2].nome,"Pocao grande (60hp)");
	Pocao[2].cura=60;
	Pocao[2].peso=15;
	strcpy(Pocao[3].nome,"Pocao ultra (100hp)");
	Pocao[3].cura=100;
	Pocao[3].peso=20;
	strcpy(Arma[0].nome,"Graveto");
	Arma[0].ataque=10;
	Arma[0].peso=10;
	strcpy(Arma[1].nome,"Estilingue");
	Arma[1].ataque=20;
	Arma[1].peso=20;
	strcpy(Arma[2].nome,"Faca");
	Arma[2].ataque=30;
	Arma[2].peso=30;
	strcpy(Arma[3].nome,"Arco flecha");
	Arma[3].ataque=35;
	Arma[3].peso=35;
	strcpy(Arma[4].nome,"Cajado");
	Arma[4].ataque=40;
	Arma[4].peso=40;
	strcpy(Arma[5].nome,"Motoserra");
	Arma[5].ataque=45;
	Arma[5].peso=45;
	strcpy(Arma[6].nome,"Lança chamas");
	Arma[6].ataque=50;
	Arma[6].peso=50;
	strcpy(Arma[7].nome,"AK-47");
	Arma[7].ataque=55;
	Arma[7].peso=55;
	strcpy(Arma[8].nome,"Espada");
	Arma[8].ataque=60;
	Arma[8].peso=60;
	strcpy(Arma[9].nome,"Bazuca");
	Arma[9].ataque=100;
	Arma[9].peso=100;
}

void menu_heroi()
{
        printf("\nHeroi: %s\nVida: %d\n[A]Cinto posicao 1: %s\n[B]Cinto posicao 2: %s\n[C]Cinto posicao 3: %s\n"
        "[D]Mochila posicao 1: %s\n[E]Mochila posicao 2: %s\n[F]Mochila posicao 3: %s\n",
        heroi[1].nome,heroi[1].vida,heroi[1].cinto1,heroi[1].cinto2,heroi[1].cinto3,heroi[1].mochila3,heroi[1].mochila2,heroi[1].mochila1);
}

void nivel1(){
	int x=0,aleatorio, armazena;
	char opcao[50];
	char opcao1, opcao2;
	while(x<4)
	{
		if (x==0)
		{
			printf("\nHeroi: %s\nVida: %d\nCinto posicao 1: %s\nCinto posicao 2: %s\nCinto posicao 3: %s\n"
"Mochila posicao 1: %s\nMochila posicao 2: %s\nMochila posicao 3: %s\n",
heroi[1].nome,heroi[1].vida,heroi[1].cinto1,heroi[1].cinto2,heroi[1].cinto3,heroi[1].mochila3,heroi[1].mochila2,heroi[1].mochila1);
			printf("Voce encontrou uma caixa\n");
			srand((unsigned)time(NULL));
            aleatorio = (rand() % 3);
			printf("Voce obteve a arma: %s\nDano: %d\nPeso: %d\n",Arma[aleatorio].nome, Arma[aleatorio].ataque, Arma[aleatorio].peso);
			printf("\nDeseja armazenar: 1 - Cinto  2 - Mochila\n");
			scanf("%d", &armazena);
			if (armazena==1)
            {
                strcpy(heroi[1].cinto1,Arma[aleatorio].nome);
            }

            else
            {
                strcpy(heroi[1].mochila3,Arma[aleatorio].nome);
            }
		}
        else if(x==1)
        {
            printf("\nVoce encontrou o: %s\n Vida: %d\n Ataque: %d\n", guerreiro[0].nome, guerreiro[0].qtdvida, guerreiro[0].ataque);
            printf("Voce tem sorte? Vamos ver quem comeca.\n");

            srand((unsigned)time(NULL));
            aleatorio = (rand() % 9);

            if(aleatorio >= 0 && aleatorio <= 4)
            {
                menu_heroi();

                printf("Selecione sua arma: ");
                scanf("%s", opcao);

                if((strcmp(opcao, "A")==0) || strcmp(opcao, "a")==0)
                {
                    if(strcmp(heroi[1].cinto1,"NULL"))
                    {
                        printf("Voce nao tem nenhum item aqui.");
                    }
                    else
                    {
                        printf("Voce selecionou: %s", heroi[1].cinto1);
                    }
                }

                else if(opcao == "B" || opcao == "b")
                {
                    if(strcmp(heroi[1].cinto2,"NULL")==0)
                    {
                        printf("Voce nao tem nenhum item aqui.");
                    }
                    else
                    {
                        printf("Voce selecionou: %s", heroi[1].cinto2);
                    }
                }

                else if(opcao == "C" || opcao == "c")
                {
                    if(strcmp(heroi[1].cinto3,"NULL")==0)
                    {
                        printf("Voce nao tem nenhum item aqui.");
                    }
                    else
                    {
                        printf("Voce selecionou: %s", heroi[1].cinto3);
                    }
                }

                else if(opcao == "D" || opcao == "d")
                {
                    if(strcmp(heroi[1].mochila3,"NULL") != 0)
                    {
                        printf("Voce selecionou: %s", heroi[1].mochila3);
                    }
                    else
                    {
                        printf("Voce nao pode usar este item.");
                    }
                }

                //na mochila precisamos passar a posicao do vetor[0] para a posicao do vetor[1] ao alocar um novo item
                //heroi[1].mochila2 == heroi[1].mochila3;
                //heroi[1].mochila3 = "NULL";



                else if(opcao == "E" || opcao == "e")
                {
                    if(strcmp(heroi[1].mochila3,"NULL") != 0)
                    {
                        printf("Voce nao pode usar este item.");
                        printf("Deseja apagar o item da Mochila posicao 1? Digite 1 - Sim 2 - Nao");
                        scanf("%d", opcao1);
                        switch(opcao1)
                        {
                            case 1:
                                strcpy(heroi[1].mochila3, "-");
                                menu_heroi();
                                break;

                            case 2:
                                menu_heroi();
                                break;

                            default:
                                printf("Opcao invalida");
                                break;
                        }
                    }
                    else
                    {
                        printf("Voce selecionou %s", heroi[1].mochila2);
                    }
                }

                else if(opcao == "F" || opcao == "f")
                {
                    if((strcmp(heroi[1].mochila3,"NULL")!= 0) && (strcmp(heroi[1].mochila2,"NULL")!= 0))
                    {
                        printf("Voce nao pode usar este item.");
                        printf("Deseja apagar o item da Mochila posicao 1? Digite 1 - Sim 2 - Nao");
                        scanf("%d", opcao1);
                        printf("Deseja apagar o item da Mochila posicao 2? Digite 1 - Sim 2 - Nao");
                        scanf("%d", opcao2);
                        switch(opcao1)
                        {
                            case 1:
                                strcpy(heroi[1].mochila3, "NULL");
                                menu_heroi();
                                break;

                            case 2:
                                menu_heroi();
                                break;

                            default:
                                printf("Opcao invalida");
                                break;
                        }

                        switch(opcao2)
                        {
                            case 1:
                                strcpy(heroi[1].mochila2, "NULL");
                                menu_heroi();
                                break;

                            case 2:
                                menu_heroi();
                                break;

                            default:
                                printf("Opcao invalida");
                                break;
                        }
                    }
                    else
                    {
                        printf("Voce selecionou %s", heroi[1].mochila1);
                    }
                }



                else
                {
                    printf("Opcao invalida");
                }
                guerreiro[0].qtdvida -= Arma[aleatorio].ataque;


            }

            else
            {
                printf("%s comeca atacando.\n Vida: %d\n Ataque: %d\n", guerreiro[0].nome, guerreiro[0].qtdvida, guerreiro[0].ataque);
                heroi[1].vida -= guerreiro[0].ataque;

            }



        }

		x++;

	}
	printf("\n\nVOCE CONQUISTOU O NIVEL 1");


}

int main(){

printf("***************Mortal Kombat***************\n\n");
printf("Escolha o nome do seu personagem: ");
gets(heroi[1].nome);
heroi[1].vida=100;

printf("\n\n************Instrucoes basicas*************"
       "\n\n1 - O primeiro que ficar com 0 de vida, morre.\n\n2 - So e possivel utilizar o ultimo item"
       " armazenados na mochila.\n    Caso queira usar um item adicionado anteriormente, tera que descartar o item no topo da mochila."
       "\n    E aconselhado guardar as pocoes no cinto e as armas na mochila, tente sempre ficar com a arma mais forte."
       "\n\n3 - Voce pode armazenar itens em seu cinto, mas tem uma capacidade maxima permitida que sao 3 slots."
       "\n\n4 - O objetivo do jogo e derrotar todos os inimigos, voce tera pocoes para recuperar sua vida ao longo das fases.\n");

define_geral();
printf("\n");

printf("\n\nNivel 1");
nivel1();





}





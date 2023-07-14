#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

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


void limparEntrada()
{
    #ifdef WIN64
    fflush(stdin);
    #else
    __fpurge(stdin);
    #endif
}

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
personagem heroi[2];

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

	strcpy(heroi[1].cinto1,"NULL");
	strcpy(heroi[1].cinto2,"NULL");
	strcpy(heroi[1].cinto3,"NULL");
	strcpy(heroi[1].mochila1,"NULL");
	strcpy(heroi[1].mochila2,"NULL");
	strcpy(heroi[1].mochila3,"NULL");
}

void menu_heroi()
{
        printf("\nHeroi: %s\nVida: %d\n[1]Cinto posicao 1: %s\n[2]Cinto posicao 2: %s\n[3]Cinto posicao 3: %s\n"
        "[4]Mochila posicao 1: %s\n[5]Mochila posicao 2: %s\n[6]Mochila posicao 3: %s\n",
        heroi[1].nome,heroi[1].vida,heroi[1].cinto1,heroi[1].cinto2,heroi[1].cinto3,heroi[1].mochila3,heroi[1].mochila2,heroi[1].mochila1);
}

void nivel1()
{
	int x=0,aleat,aleatorio, armazena, opcao, opcao1, opcao2;
	while(x<6)
	{
		if (x==0)
		{
			printf("\nHeroi: %s\nVida: %d\nCinto posicao 1: %s\nCinto posicao 2: %s\nCinto posicao 3: %s\n"
"Mochila posicao 1: %s\nMochila posicao 2: %s\nMochila posicao 3: %s\n",
heroi[1].nome,heroi[1].vida,heroi[1].cinto1,heroi[1].cinto2,heroi[1].cinto3,heroi[1].mochila3,heroi[1].mochila2,heroi[1].mochila1);
            printf("\n\nNIVEL 1 - FASE 1\n\n");

			printf("Voce encontrou uma caixa\n");
			srand((unsigned)time(NULL));
            aleatorio = (rand() % 3);
			printf("Voce obteve a arma: %s\nDano: %d\nPeso: %d\n",Arma[aleatorio].nome, Arma[aleatorio].ataque, Arma[aleatorio].peso);
			printf("\nDeseja armazenar: 1 - Cinto  2 - Mochila\n");
			scanf("%d",&armazena);
			if (armazena==1)
            {
                strcpy(heroi[1].cinto1,Arma[aleatorio].nome);
                menu_heroi();
                printf("\n");
            }

            else if (armazena==2)
            {
                strcpy(heroi[1].mochila3,Arma[aleatorio].nome);
                menu_heroi();
                printf("\n");
            }

            else
            {
                printf("Opcao invalida!");
                pausar();
                menu_heroi();
            }
		}

        else if(x==1)
        {
            printf("\nVoce encontrou o: %s\nVida: %d\nAtaque: %d\n", guerreiro[0].nome, guerreiro[0].qtdvida, guerreiro[0].ataque);
            printf("\nVoce tem sorte? vamos ver quem comeca.\n\n");

            srand((unsigned)time(NULL));
            aleat = (rand() % 9);

            if(aleat >= 0 && aleat <= 4)
            {
                printf("%s comeca atacando.", heroi[1].nome);

                menu_heroi();

                printf("Selecione sua arma: ");
                scanf("%d", &opcao);

                if(opcao == 1)
                {
                    if(strcmp(heroi[1].cinto1,"NULL")==0)
                    {
                        printf("Voce nao tem nenhum item aqui.");
                    }
                    else
                    {
                        printf("Voce selecionou: %s", heroi[1].cinto1);
                    }
                }

                else if(opcao == 2)
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

                else if(opcao == 3)
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

                else if(opcao == 4)
                {
                    if(strcmp(heroi[1].mochila3,"NULL")!= 0)
                    {
                        printf("Voce selecionou: %s", heroi[1].mochila3);
                    }
                    else
                    {
                        printf("Voce nao pode usar este item.");
                    }
                }

                else if(opcao == 5)
                {
                    if(strcmp(heroi[1].mochila3,"NULL")!= 0)
                    {
                        printf("Voce nao pode usar este item.");
                        printf("Deseja apagar o item da Mochila posicao 1? Digite 1 - Sim 2 - Nao");
                        scanf("%d", opcao1);
                        switch(opcao1)
                        {
                            case 1:
                                strcpy(heroi[1].mochila3,"NULL");
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

                else if(opcao == 6)
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
                                strcpy(heroi[1].mochila3,"NULL");
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
                                strcpy(heroi[1].mochila2,"NULL");
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



            //LUTA HEROI 1
            do
            {

                if(heroi[1].cinto1)
                {
                    fflush(stdin);
                    guerreiro[0].qtdvida -= Arma[aleatorio].ataque;

                    if(guerreiro[0].qtdvida <= 0)
                    {
                        printf("\n\nVida do %s: 0\n", guerreiro[0].nome);
                    }
                    else
                    {
                        printf("\nVida do %s: %d", guerreiro[0].nome, guerreiro[0].qtdvida);
                    }

                }

                else if(heroi[1].cinto2)
                {
                    fflush(stdin);
                    guerreiro[0].qtdvida -= Arma[aleatorio].ataque;
                    if(guerreiro[0].qtdvida <= 0)
                    {
                        printf("\n\nVida do %s: 0\n", guerreiro[0].nome);
                    }
                    else
                    {
                        printf("\nVida do %s: %d", guerreiro[0].nome, guerreiro[0].qtdvida);
                    }
                }

                else if(heroi[1].cinto3)
                {
                    fflush(stdin);
                    guerreiro[0].qtdvida -= Arma[aleatorio].ataque;
                    if(guerreiro[0].qtdvida <= 0)
                    {
                        printf("\n\nVida do %s: 0\n", guerreiro[0].nome);
                    }
                    else
                    {
                        printf("\nVida do %s: %d", guerreiro[0].nome, guerreiro[0].qtdvida);
                    }
                }

                else if(heroi[1].mochila3)
                {
                    fflush(stdin);
                    guerreiro[0].qtdvida -= Arma[aleatorio].ataque;
                    if(guerreiro[0].qtdvida <= 0)
                    {
                        printf("\n\nVida do %s: 0\n", guerreiro[0].nome);
                    }
                    else
                    {
                        printf("\nVida do %s: %d", guerreiro[0].nome, guerreiro[0].qtdvida);
                    }

                }

                else if(heroi[1].mochila2)
                {
                    fflush(stdin);
                    guerreiro[0].qtdvida -= Arma[aleatorio].ataque;
                    if(guerreiro[0].qtdvida <= 0)
                    {
                        printf("\n\nVida do %s: 0\n", guerreiro[0].nome);
                    }
                    else
                    {
                        printf("\nVida do %s: %d", guerreiro[0].nome, guerreiro[0].qtdvida);
                    }
                }

                else if(heroi[1].mochila1)
                {
                    fflush(stdin);
                    guerreiro[0].qtdvida -= Arma[aleatorio].ataque;
                    if(guerreiro[0].qtdvida <= 0)
                    {
                        printf("\n\nVida do %s: 0\n", guerreiro[0].nome);
                    }
                    else
                    {
                        printf("\nVida do %s: %d", guerreiro[0].nome, guerreiro[0].qtdvida);
                    }
                }

                fflush(stdin);
                heroi[1].vida -= guerreiro[0].ataque;
                if(heroi[1].vida <= 0)
                {
                    printf("\n\nVida do %s: 0\n", heroi[1].nome);
                }
                else
                {
                    printf("\n\nVida do %s: %d\n", heroi[1].nome, heroi[1].vida);
                }

            }while(heroi[1].vida > 0 && guerreiro[0].qtdvida > 0);

            pausar();

            if(heroi[1].vida <= 0)
            {
                printf("GAME OVER!");
            }

            else
            {
                printf("Voce derrotou o %s", guerreiro[0].nome);
                pausar();
            }


            }

            else
            {
                printf("%s comeca atacando.\nVida: %d\nAtaque: %d\n\n", guerreiro[0].nome, guerreiro[0].qtdvida, guerreiro[0].ataque);

                printf("Selecione sua arma: ");
                scanf("%d", &opcao);

                if(opcao == 1)
                {
                    if(strcmp(heroi[1].cinto1,"NULL")==0)
                    {
                        printf("\nVoce nao tem nenhum item aqui.");
                    }
                    else
                    {
                        printf("\nVoce selecionou: %s", heroi[1].cinto1);
                    }
                }

                else if(opcao == 2)
                {
                    if(strcmp(heroi[1].cinto2,"NULL")==0)
                    {
                        printf("\nVoce nao tem nenhum item aqui.");
                    }
                    else
                    {
                        printf("\nVoce selecionou: %s", heroi[1].cinto2);
                    }
                }

                else if(opcao == 3)
                {
                    if(strcmp(heroi[1].cinto3,"NULL")==0)
                    {
                        printf("\nVoce nao tem nenhum item aqui.");
                    }
                    else
                    {
                        printf("\nVoce selecionou: %s", heroi[1].cinto3);
                    }
                }

                else if(opcao == 4)
                {
                    if(strcmp(heroi[1].mochila3,"NULL")!= 0)
                    {
                        printf("\nVoce selecionou: %s", heroi[1].mochila3);
                    }
                    else
                    {
                        printf("\nVoce nao pode usar este item.");
                    }
                }

                else if(opcao == 5)
                {
                    if(strcmp(heroi[1].mochila3,"NULL")!= 0)
                    {
                        printf("Voce nao pode usar este item.");
                        printf("Deseja apagar o item da Mochila posicao 1? Digite 1 - Sim 2 - Nao");
                        scanf("%d", opcao1);
                        switch(opcao1)
                        {
                            case 1:
                                strcpy(heroi[1].mochila3,"NULL");
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

                else if(opcao == 6)
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
                                strcpy(heroi[1].mochila3,"NULL");
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
                                strcpy(heroi[1].mochila2,"NULL");
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



            }
            //luta guerreiro 1
            do
            {
                fflush(stdin);
                printf("\n");
                heroi[1].vida -= guerreiro[0].ataque;
                if(heroi[1].vida <= 0)
                {
                    printf("\n\nVida do %s: 0\n", heroi[1].nome);
                }
                else
                {
                    printf("\n\nVida do %s: %d", heroi[1].nome, heroi[1].vida);
                }

                if(heroi[1].cinto1)
                {
                    fflush(stdin);
                    guerreiro[0].qtdvida -= Arma[aleatorio].ataque;
                    if(guerreiro[0].qtdvida <= 0)
                    {
                        printf("\n\nVida do %s: 0\n", guerreiro[0].nome);
                    }
                    else
                    {
                        printf("\n\nVida do %s: %d", guerreiro[0].nome, guerreiro[0].qtdvida);
                    }

                }

                else if(heroi[1].cinto2)
                {
                    fflush(stdin);
                    guerreiro[0].qtdvida -= Arma[aleatorio].ataque;
                    if(guerreiro[0].qtdvida <= 0)
                    {
                        printf("\n\nVida do %s: 0\n", guerreiro[0].nome);
                    }
                    else
                    {
                        printf("\n\nVida do %s: %d", guerreiro[0].nome, guerreiro[0].qtdvida);
                    }
                }

                else if(heroi[1].cinto3)
                {
                    fflush(stdin);
                    guerreiro[0].qtdvida -= Arma[aleatorio].ataque;
                    if(guerreiro[0].qtdvida <= 0)
                    {
                        printf("\n\nVida do %s: 0\n", guerreiro[0].nome);
                    }
                    else
                    {
                        printf("\n\nVida do %s: %d", guerreiro[0].nome, guerreiro[0].qtdvida);
                    }
                }

                else if(heroi[1].mochila3)
                {
                    fflush(stdin);
                    guerreiro[0].qtdvida -= Arma[aleatorio].ataque;
                    if(guerreiro[0].qtdvida <= 0)
                    {
                        printf("\n\nVida do %s: 0\n", guerreiro[0].nome);
                    }
                    else
                    {
                        printf("\n\nVida do %s: %d", guerreiro[0].nome, guerreiro[0].qtdvida);
                    }

                }

                else if(heroi[1].mochila2)
                {
                    fflush(stdin);
                    guerreiro[0].qtdvida -= Arma[aleatorio].ataque;
                    if(guerreiro[0].qtdvida <= 0)
                    {
                        printf("\n\nVida do %s: 0\n", guerreiro[0].nome);
                    }
                    else
                    {
                        printf("\n\nVida do %s: %d", guerreiro[0].nome, guerreiro[0].qtdvida);
                    }
                }

                else if(heroi[1].mochila1)
                {
                    fflush(stdin);
                    guerreiro[0].qtdvida -= Arma[aleatorio].ataque;
                    if(guerreiro[0].qtdvida <= 0)
                    {
                        printf("\n\nVida do %s: 0\n", guerreiro[0].nome);
                    }
                    else
                    {
                        printf("\n\nVida do %s: %d", guerreiro[0].nome, guerreiro[0].qtdvida);
                    }

                }

                if(heroi[1].vida <= 0)
                {
                    printf("\nGAME OVER!");
                }

                else if(guerreiro[0].qtdvida <= 0)
                {
                    printf("\nVoce derrotou o %s", guerreiro[0].nome);
                    pausar();
                }


            }while(heroi[1].vida > 0 && guerreiro[0].qtdvida > 0);

            pausar();

        }

		x++;

        //nivel 1 fase 2
		if(x==2)
        {
            printf("\nHeroi: %s\nVida: %d\nCinto posicao 1: %s\nCinto posicao 2: %s\nCinto posicao 3: %s\n"
            "Mochila posicao 1: %s\nMochila posicao 2: %s\nMochila posicao 3: %s\n",
            heroi[1].nome,heroi[1].vida,heroi[1].cinto1,heroi[1].cinto2,heroi[1].cinto3,heroi[1].mochila3,heroi[1].mochila2,heroi[1].mochila1);

            printf("\n\nNIVEL 1 - FASE 2\n\n");

            printf("Voce encontrou uma caixa\n");

            int aleato;
            if(heroi[1].vida % 2 == 0)
            {
                srand((unsigned)time(NULL));
                aleato = (rand() % 3)+3;


                printf("Voce obteve a arma: %s\nDano: %d\nPeso: %d\n",Arma[aleato].nome, Arma[aleato].ataque, Arma[aleato].peso);
                printf("\nDeseja armazenar: 1 - Cinto  2 - Mochila\n");
                scanf("%d",&armazena);
            }

            else if(heroi[1].vida % 2 != 0)
            {
                printf("Voce teve muita sorte, ganhou um nada!!");
            }

			if (armazena==1)
            {

                if(strcmp(heroi[1].cinto1,"NULL")==0)
                {
                    strcpy(heroi[1].cinto1,Arma[aleato].nome);
                    menu_heroi();
                    printf("\n");
                }

                else if(strcmp(heroi[1].cinto2,"NULL")==0)
                {
                    strcpy(heroi[1].cinto2,Arma[aleato].nome);
                    menu_heroi();
                    printf("\n");
                }
                else if(strcmp(heroi[1].cinto3,"NULL")==0)
                {
                    strcpy(heroi[1].cinto3,Arma[aleato].nome);
                    menu_heroi();
                    printf("\n");
                }
            }
            else if(armazena==2){

                if(strcmp(heroi[1].mochila3,"NULL")!=0){
                    if(strcmp(heroi[1].mochila2,"NULL")!=0)
                        strcpy(heroi[1].mochila1,Arma[aleato].nome);
                    else if(strcmp(heroi[1].mochila2,"NULL")==0)
                        strcpy(heroi[1].mochila2,Arma[aleato].nome);
                        }
                else
                        strcpy(heroi[1].mochila3,Arma[aleato].nome);
            }



            int armazena1;

            if(heroi[1].vida <= 50)
            {
                printf("Pocao grande de ajuda do sistema, voce tem menos de 50hp");
                printf("\nDeseja armazenar: 1 - Cinto  2 - Mochila\n");
                scanf("%d",&armazena1);
            }



            if (armazena1==1)
            {
                if(strcmp(heroi[1].cinto1,"NULL")==0)
                {
                    strcpy(heroi[1].cinto1,Pocao[2].nome);
                    menu_heroi();
                    printf("\n");
                }

                else if(strcmp(heroi[1].cinto2,"NULL")==0)
                {
                    strcpy(heroi[1].cinto1,Pocao[2].nome);
                    menu_heroi();
                    printf("\n");
                }

                else if(strcmp(heroi[1].cinto3,"NULL")==0)
                {
                    strcpy(heroi[1].cinto1,Pocao[2].nome);
                    menu_heroi();
                    printf("\n");
                }
                else
                {
                    int escolha;
                    printf("\nTodos os slots estao cheios! Deseja colocar na mochila?\nDigite 1 - Sim 2 - Nao");
                    scanf("%d", &escolha);

                    switch(escolha)
                    {
                        case 1:
                            if(strcmp(heroi[1].mochila3,"NULL")==0)
                            {
                                strcpy(heroi[1].mochila3,Pocao[2].nome);
                                printf("\nVoce guardou a %s, na mochila1\n", Pocao[2].nome);
                                menu_heroi();
                                printf("\n");
                            }

                            else if(strcmp(heroi[1].mochila2,"NULL")==0)
                            {
                                strcpy(heroi[1].mochila2,Pocao[2].nome);
                                printf("\nVoce guardou a %s, na mochila2\n", Pocao[2].nome);
                                menu_heroi();
                                printf("\n");
                            }

                            else if(strcmp(heroi[1].mochila1,"NULL")==0)
                            {
                                strcpy(heroi[1].mochila1,Pocao[2].nome);
                                printf("\nVoce guardou a %s, na mochila3\n", Pocao[2].nome);
                                menu_heroi();
                                printf("\n");
                            }

                            else
                            {
                                int opcao7;
                                printf("\nO item da mochila1 eh %s, deseja substituir por %s?", heroi[1].mochila3, Pocao[2].nome);
                                printf("\nDigite 1 - Sim 2 - Nao");
                                scanf("%d", &opcao7);
                                switch(opcao7)
                                {
                                    case 1:
                                        strcpy(heroi[1].mochila3,Pocao[2].nome);
                                        menu_heroi();
                                        printf("\n");
                                        break;

                                    case 2:
                                        printf("\nVoce descartou o item %s\n",Pocao[2].nome);
                                        menu_heroi();
                                        printf("\n");
                                        break;

                                    default:
                                        printf("\nOpcao invalida!\n");
                                        menu_heroi();
                                        break;
                                }

                            }

                        case 2:
                            printf("\nVoce descartou o item %s\n",Pocao[2].nome);
                            menu_heroi();
                            printf("\n");
                            break;

                        default:
                            printf("\nOpcao invalida!\n");
                            menu_heroi();
                            break;
                    }
                }


            }

            else if (armazena1==2)
            {
                if(strcmp(heroi[1].mochila3,"NULL")==0)
                {
                    strcpy(heroi[1].mochila3,Pocao[2].nome);
                    menu_heroi();
                    printf("\n");
                }

                else if(strcmp(heroi[1].mochila3,"NULL")!=0);
                {
                    if(strcmp(heroi[1].mochila2,"NULL")==0)
                    {
                        strcpy(heroi[1].mochila3,heroi[1].mochila2);
                        strcpy(heroi[1].mochila3,"NULL");
                        strcpy(heroi[1].mochila3,Pocao[2].nome);
                        menu_heroi();
                        printf("\n");
                    }
                    else if(strcmp(heroi[1].mochila1,"NULL")==0)
                    {
                        strcpy(heroi[1].mochila3,heroi[1].mochila1);
                        strcpy(heroi[1].mochila3,"NULL");
                        strcpy(heroi[1].mochila3,Pocao[2].nome);
                        menu_heroi();
                        printf("\n");
                    }


                    else
                    {
                        int opcao8;
                        printf("\nO item da mochila1 eh %s, deseja substituir por %s?", heroi[1].mochila3, Pocao[2].nome);
                        printf("\nDigite 1 - Sim 2 - Nao");
                        scanf("%d", opcao8);
                        switch(opcao8)
                        {
                            case 1:
                                strcpy(heroi[1].mochila3,Pocao[2].nome);
                                menu_heroi();
                                printf("\n");
                                break;

                            case 2:
                                printf("\nVoce descartou o item %s",Pocao[2].nome);
                                menu_heroi();
                                printf("\n");
                                break;

                            default:
                                printf("\nOpcao invalida!");
                                menu_heroi();
                                break;
                        }

                    }

                }

                printf("\n");
            }

            else
            {
                printf("Opcao invalida!");
                pausar();
                menu_heroi();
            }
		}

        else if(x==3)
        {
            printf("\nVoce encontrou o: %s\nVida: %d\nAtaque: %d\n", guerreiro[0].nome, guerreiro[0].qtdvida, guerreiro[0].ataque);
            printf("\nVoce tem sorte? vamos ver quem comeca.\n\n");

            srand((unsigned)time(NULL));
            aleat = (rand() % 9);

            if(aleat >= 0 && aleat <= 4)
            {
                printf("%s comeca atacando.", heroi[1].nome);

                menu_heroi();

                printf("Selecione sua arma: ");
                scanf("%d", &opcao);

                if(opcao == 1)
                {
                    if(strcmp(heroi[1].cinto1,"NULL")==0)
                    {
                        printf("Voce nao tem nenhum item aqui.");
                    }
                    else
                    {
                        printf("Voce selecionou: %s", heroi[1].cinto1);
                    }
                }

                else if(opcao == 2)
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

                else if(opcao == 3)
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

                else if(opcao == 4)
                {
                    if(strcmp(heroi[1].mochila3,"NULL")!= 0)
                    {
                        printf("Voce selecionou: %s", heroi[1].mochila3);
                    }
                    else
                    {
                        printf("Voce nao pode usar este item.");
                    }
                }

                else if(opcao == 5)
                {
                    if(strcmp(heroi[1].mochila3,"NULL")!= 0)
                    {
                        printf("Voce nao pode usar este item.");
                        printf("Deseja apagar o item da Mochila posicao 1? Digite 1 - Sim 2 - Nao");
                        scanf("%d", opcao1);
                        switch(opcao1)
                        {
                            case 1:
                                strcpy(heroi[1].mochila3,"NULL");
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

                else if(opcao == 6)
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
                                strcpy(heroi[1].mochila3,"NULL");
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
                                strcpy(heroi[1].mochila2,"NULL");
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



            //LUTA HEROI 1
            do
            {

                if(heroi[1].cinto1)
                {
                    fflush(stdin);
                    guerreiro[1].qtdvida -= Arma[aleatorio].ataque;

                    if(guerreiro[1].qtdvida <= 0)
                    {
                        printf("\n\nVida do %s: 0\n", guerreiro[1].nome);
                    }
                    else
                    {
                        printf("\nVida do %s: %d", guerreiro[1].nome, guerreiro[1].qtdvida);
                    }

                }

                else if(heroi[1].cinto2)
                {
                    fflush(stdin);
                    guerreiro[1].qtdvida -= Arma[aleatorio].ataque;
                    if(guerreiro[1].qtdvida <= 0)
                    {
                        printf("\n\nVida do %s: 0\n", guerreiro[1].nome);
                    }
                    else
                    {
                        printf("\nVida do %s: %d", guerreiro[1].nome, guerreiro[1].qtdvida);
                    }
                }

                else if(heroi[1].cinto3)
                {
                    fflush(stdin);
                    guerreiro[1].qtdvida -= Arma[aleatorio].ataque;
                    if(guerreiro[1].qtdvida <= 0)
                    {
                        printf("\n\nVida do %s: 0\n", guerreiro[1].nome);
                    }
                    else
                    {
                        printf("\nVida do %s: %d", guerreiro[1].nome, guerreiro[1].qtdvida);
                    }
                }

                else if(heroi[1].mochila1)
                {
                    fflush(stdin);
                    guerreiro[1].qtdvida -= Arma[aleatorio].ataque;
                    if(guerreiro[1].qtdvida <= 0)
                    {
                        printf("\n\nVida do %s: 0\n", guerreiro[1].nome);
                    }
                    else
                    {
                        printf("\nVida do %s: %d", guerreiro[1].nome, guerreiro[1].qtdvida);
                    }

                }

                else if(heroi[1].mochila3)
                {
                    fflush(stdin);
                    guerreiro[1].qtdvida -= Arma[aleatorio].ataque;
                    if(guerreiro[1].qtdvida <= 0)
                    {
                        printf("\n\nVida do %s: 0\n", guerreiro[1].nome);
                    }
                    else
                    {
                        printf("\nVida do %s: %d", guerreiro[1].nome, guerreiro[1].qtdvida);
                    }
                }

                else if(heroi[1].mochila2)
                {
                    fflush(stdin);
                    guerreiro[1].qtdvida -= Arma[aleatorio].ataque;
                    if(guerreiro[1].qtdvida <= 0)
                    {
                        printf("\n\nVida do %s: 0\n", guerreiro[1].nome);
                    }
                    else
                    {
                        printf("\nVida do %s: %d", guerreiro[1].nome, guerreiro[1].qtdvida);
                    }
                }

                fflush(stdin);
                heroi[1].vida -= guerreiro[1].ataque;
                if(heroi[1].vida <= 0)
                {
                    printf("\n\nVida do %s: 0\n", heroi[1].nome);
                }
                else
                {
                    printf("\n\nVida do %s: %d\n", heroi[1].nome, heroi[1].vida);
                }

            }while(heroi[1].vida > 0 && guerreiro[1].qtdvida > 0);

            pausar();

            if(heroi[1].vida <= 0)
            {
                printf("GAME OVER!");
            }

            else
            {
                printf("Voce derrotou o %s", guerreiro[1].nome);
                pausar();
            }


            }

            else
            {
                printf("%s comeca atacando.\nVida: %d\nAtaque: %d\n\n", guerreiro[1].nome, guerreiro[1].qtdvida, guerreiro[1].ataque);

                printf("Selecione sua arma: ");
                scanf("%d", &opcao);

                if(opcao == 1)
                {
                    if(strcmp(heroi[1].cinto1,"NULL")==0)
                    {
                        printf("\nVoce nao tem nenhum item aqui.");
                    }
                    else
                    {
                        printf("\nVoce selecionou: %s", heroi[1].cinto1);
                    }
                }

                else if(opcao == 2)
                {
                    if(strcmp(heroi[1].cinto2,"NULL")==0)
                    {
                        printf("\nVoce nao tem nenhum item aqui.");
                    }
                    else
                    {
                        printf("\nVoce selecionou: %s", heroi[1].cinto2);
                    }
                }

                else if(opcao == 3)
                {
                    if(strcmp(heroi[1].cinto3,"NULL")==0)
                    {
                        printf("\nVoce nao tem nenhum item aqui.");
                    }
                    else
                    {
                        printf("\nVoce selecionou: %s", heroi[1].cinto3);
                    }
                }

                else if(opcao == 4)
                {
                    if(strcmp(heroi[1].mochila3,"NULL")!= 0)
                    {
                        printf("\nVoce selecionou: %s", heroi[1].mochila3);
                    }
                    else
                    {
                        printf("\nVoce nao pode usar este item.");
                    }
                }

                else if(opcao == 5)
                {
                    if(strcmp(heroi[1].mochila3,"NULL")!= 0)
                    {
                        printf("Voce nao pode usar este item.");
                        printf("Deseja apagar o item da Mochila posicao 1? Digite 1 - Sim 2 - Nao");
                        scanf("%d", opcao1);
                        switch(opcao1)
                        {
                            case 1:
                                strcpy(heroi[1].mochila3,"NULL");
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

                else if(opcao == 6)
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
                                strcpy(heroi[1].mochila3,"NULL");
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
                                strcpy(heroi[1].mochila2,"NULL");
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



            }
            //luta guerreiro 1
            do
            {
                fflush(stdin);
                printf("\n");
                heroi[1].vida -= guerreiro[1].ataque;
                if(heroi[1].vida <= 0)
                {
                    printf("\n\nVida do %s: 0\n", heroi[1].nome);
                }
                else
                {
                    printf("\n\nVida do %s: %d", heroi[1].nome, heroi[1].vida);
                }

                if(heroi[1].cinto1)
                {
                    fflush(stdin);
                    guerreiro[1].qtdvida -= Arma[aleatorio].ataque;
                    if(guerreiro[1].qtdvida <= 0)
                    {
                        printf("\n\nVida do %s: 0\n", guerreiro[1].nome);
                    }
                    else
                    {
                        printf("\n\nVida do %s: %d", guerreiro[1].nome, guerreiro[1].qtdvida);
                    }

                }

                else if(heroi[1].cinto2)
                {
                    fflush(stdin);
                    guerreiro[1].qtdvida -= Arma[aleatorio].ataque;
                    if(guerreiro[1].qtdvida <= 0)
                    {
                        printf("\n\nVida do %s: 0\n", guerreiro[1].nome);
                    }
                    else
                    {
                        printf("\n\nVida do %s: %d", guerreiro[1].nome, guerreiro[1].qtdvida);
                    }
                }

                else if(heroi[1].cinto3)
                {
                    fflush(stdin);
                    guerreiro[1].qtdvida -= Arma[aleatorio].ataque;
                    if(guerreiro[1].qtdvida <= 0)
                    {
                        printf("\n\nVida do %s: 0\n", guerreiro[1].nome);
                    }
                    else
                    {
                        printf("\n\nVida do %s: %d", guerreiro[1].nome, guerreiro[1].qtdvida);
                    }
                }

                else if(heroi[1].mochila3)
                {
                    fflush(stdin);
                    guerreiro[1].qtdvida -= Arma[aleatorio].ataque;
                    if(guerreiro[1].qtdvida <= 0)
                    {
                        printf("\n\nVida do %s: 0\n", guerreiro[1].nome);
                    }
                    else
                    {
                        printf("\n\nVida do %s: %d", guerreiro[1].nome, guerreiro[1].qtdvida);
                    }

                }

                else if(heroi[1].mochila2)
                {
                    fflush(stdin);
                    guerreiro[1].qtdvida -= Arma[aleatorio].ataque;
                    if(guerreiro[1].qtdvida <= 0)
                    {
                        printf("\n\nVida do %s: 0\n", guerreiro[1].nome);
                    }
                    else
                    {
                        printf("\n\nVida do %s: %d", guerreiro[1].nome, guerreiro[1].qtdvida);
                    }
                }

                else if(heroi[1].mochila1)
                {
                    fflush(stdin);
                    guerreiro[1].qtdvida -= Arma[aleatorio].ataque;
                    if(guerreiro[1].qtdvida <= 0)
                    {
                        printf("\n\nVida do %s: 0\n", guerreiro[1].nome);
                    }
                    else
                    {
                        printf("\n\nVida do %s: %d", guerreiro[1].nome, guerreiro[1].qtdvida);
                    }

                }

                if(heroi[1].vida <= 0)
                {
                    printf("\nGAME OVER!");
                }

                else if(guerreiro[1].qtdvida <= 0)
                {
                    printf("\nVoce derrotou o %s", guerreiro[1].nome);
                    printf("\n\nNIVEL 1 CONQUISTADO");
                }


            }while(heroi[1].vida > 0 && guerreiro[1].qtdvida > 0);

            pausar();

        }

        }
        x++;


}

int main()
{
    printf("Caio Marcelo da Silva de Jesus - PC3011259\n\nJefferson Roberto Piaia Martines - PC3015602\n\n"
           "Murilo Formaggio Feliciano - PC3006875\n\nThiago Souza Peixoto - PC3003353\n\n");
    pausar();
    limparTela();

    printf("***************Mortal Kombat***************\n\n");
    printf("Escolha o nome do seu personagem: ");
    gets(heroi[1].nome);
    heroi[1].vida=100;

    printf("\n\n************Instrucoes basicas*************"
           "\n\n1 - O primeiro que ficar com 0 de vida, morre.\n\n2 - So e possivel utilizar o ultimo item"
           " armazenados na mochila.\n    Caso queira usar um item adicinado anteriormente, tera que descartar o item antecessor."
           "\n    E aconselhado guardar as pocoes no cinto e as armas na mochila, tente sempre ficar com a arma mais forte."
           "\n\n3 - Voce pode armazenar itens em seu cinto, mas tem uma capacidade maxima permitida que sao 3 slots."
           "\n\n4 - O objetivo do jogo e derrotar todos os inimigos, voce tera pocoes para recuperar sua vida ao longo das fases.\n");

    define_geral();
    printf("\n");

    printf("\n\nNivel 1");
    nivel1();
    pausar();
    limparTela();
    printf("\n\n*************************Em construção********************");

}





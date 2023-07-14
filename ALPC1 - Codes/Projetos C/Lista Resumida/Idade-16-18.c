#include<stdio.h>

int main ()
//Exercício incompleto, pois foi apagado para teste de situação IF sem ELSE
{
    {
   int ano_atual, ano_nasc, idade;

   printf("Ano atual (yyyy): ");
   scanf("%d", &ano_atual);
   printf("Ano de nascimento (yyyy): ");
   scanf("%d", &ano_nasc);
   idade = ano_atual - ano_nasc;
   if (idade >= 18)
    {
       printf(" IDADE: %d\n", idade);
       printf(" APTO A TIRAR CARTEIRA");
       printf(" ------------------------");
       printf(" APTO A VOTAR");
    }
    }
}

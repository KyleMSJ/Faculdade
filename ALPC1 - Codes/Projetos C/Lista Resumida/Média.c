#include<stdio.h>

int main()

{
   float nota1, nota2, nota3, media;

   printf("Digite a nota1: ");
   scanf("%f", &nota1);
   printf("Digite a nota2: ");
   scanf("%f", &nota2);
   printf("Digite a nota3: ");
   scanf("%f", &nota3);
   media = (nota1 + nota2+ nota3) / 3;
   if (media >= 6)
   {
    printf("A media foi: %.1f\n", media);
    printf("\tAluno aprovado!");
   }
   else
   {
    printf("A media foi: %.1f\n", media);
    printf("\tAluno reprovado!");
   }
}


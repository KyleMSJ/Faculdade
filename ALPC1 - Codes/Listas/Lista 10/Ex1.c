#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define aluno 40

int main()
{
    int alunos, opc, i;
    float nota [aluno], media, total, maior_nota=0, menor_nota=10;
    setlocale(LC_ALL, "Portuguese");
    while (opc!=6)
    {
    printf("Cadastro de notas - IFSP");
    printf("\n 1. Indicar quantidade de alunos: ");
    printf("\n 2. Cadastrar notas");
    printf("\n 3. Verificar media");
    printf("\n 4. Verificar maior nota");
    printf("\n 5. Verificar menor nota");
    printf("\n 6. Sair do programa\n");
    scanf("%d", &opc);

    switch (opc)
    {
    case 1:
        printf("\nQuantidade de alunos (máx. 40): \n\n");
        scanf("%d", &alunos);
        if (alunos > 40)
            printf("Valor inválido!\n\n");
        break;
    case 2:
        for (i=0; i<alunos; i++)
        {
            printf("\nDigite a nota (entre 0-10) %d/%d: ", i+1, alunos);
            scanf("%f", &nota[i]);
        }
        break;
    case 3:
        for (i=0; i<alunos; i++)
        total += nota [i];
        media = total / alunos;
        printf("A média aritmética da turma é: %.2f\n\n", media);
        break;
    case 4:
        for (i=0; i<alunos; i++)
            if(nota[i]>maior_nota)
            maior_nota = nota [i];
            printf("Maior nota: %.2f\n\n", maior_nota);
        break;
    case 5:
        for (i=0; i<alunos; i++)
            if(nota[i]<=menor_nota)
            menor_nota = nota [i];
            printf("Menor nota: %.2f\n\n", menor_nota);
    }
    }

}

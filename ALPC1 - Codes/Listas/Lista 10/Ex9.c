#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main()
{
    float notas[10];
    int i, opc, aprovados, reprovados;
    setlocale(LC_ALL, "Portuguese");
    do
    {
        printf("\nNotas dos alunos - IFSP");
        printf("\n 1. Cadastrar notas");
        printf("\n 2. Verificar quantidade de alunos aprovados");
        printf("\n 3. Verificar quantidade de alunos reprovados");
        printf("\n 4. Sair do programa");
        printf("\n Opcão: ");
        scanf("%d", &opc);

        switch(opc)
        {
        case 1:
            for(i=0; i<10; i++)
            {
            printf("\n Nota %d: ", i+1);
            scanf("%f", &notas[i]);
            }
            break;
        case 2:
            aprovados = 0;
            for(i=0; i<10; i++)
            {
                if (notas[i] >= 6)
                    aprovados++;
            }
            printf("nº de alunos aprovados: %d", aprovados);
            break;
        case 3:
            reprovados = 0;
            for(i=0; i<10; i++)
            {
                if (notas[i] < 6)
                    reprovados++;
            }
            printf("nº de alunos reprovados: %d", reprovados);
        }
    }
    while (opc!=4);
}

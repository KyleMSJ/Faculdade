#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

enum diaSemana{
    dom=1,seg,ter,qua,qui,sex,sab
};

int main()
{
    setlocale(LC_ALL, "Portuguese");
    enum diaSemana dia;
    dia = dom;
    printf("Hoje � o %d� dia da semana\n", dia);
    if (seg == qua)
    if (ter == ter) printf("Terca-Feira � Terca-Feira!!!!/n");
    if (dia == seg) printf("Hoje � segunda T_T\n");
    else if (dia == dom) printf("Hoje � domingo!! \\o/\n");
    else if (dia == ter) printf("Hoje � o dia mais legal da semana! Tem aula do M�rcio!! \\o/ \o/");

    switch(dia){
    case sab:
        printf("S�bado!\n");
        break;
    case qua:
        printf("Quarta\n");
        break;
    case 1: //ou case dom:
        printf("DOMING�O! :D\n");
        break;
    }
    return 0;
}

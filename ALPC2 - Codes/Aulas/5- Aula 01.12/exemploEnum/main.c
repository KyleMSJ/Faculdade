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
    printf("Hoje é o %dº dia da semana\n", dia);
    if (seg == qua)
    if (ter == ter) printf("Terca-Feira é Terca-Feira!!!!/n");
    if (dia == seg) printf("Hoje é segunda T_T\n");
    else if (dia == dom) printf("Hoje é domingo!! \\o/\n");
    else if (dia == ter) printf("Hoje é o dia mais legal da semana! Tem aula do Márcio!! \\o/ \o/");

    switch(dia){
    case sab:
        printf("Sábado!\n");
        break;
    case qua:
        printf("Quarta\n");
        break;
    case 1: //ou case dom:
        printf("DOMINGÃO! :D\n");
        break;
    }
    return 0;
}

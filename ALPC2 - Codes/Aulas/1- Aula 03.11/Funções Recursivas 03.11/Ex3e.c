#include <stdio.h>
#include <stdlib.h>

void binario(int n) //escreve n usando base 2 (bin�rio)
{
    if(n==0)return;
    binario(n/2); //divide o n�mero por 2
    printf("%d",n%2); //mostra na tela o resto da divis�o por 2 (ou 1 ou 0)
}

void bin_0(int n) //Condi��o especial para n == 0
{
    if(n==0) printf("0");
    else binario(n);
}

int main()
{
    bin_0(80); // N�mero natural passado como par�metro
    return 0;
}

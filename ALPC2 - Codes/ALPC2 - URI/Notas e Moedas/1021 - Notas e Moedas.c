#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    float notas_moedas[6][2] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};
    int i, j;
    int contador[6][2] = {0};
    float valor;

    scanf("%f", &valor);
    valor = valor*100;
    for (i=0; i<6; i++){
            for (j=0; j<2; j++){
            if (valor >= notas_moedas[i][j]){ //Verifica se o valor digitado pelo usuário é maior ou igual do que cada nota/moeda separadamente por loop.
                    valor = (fmod(valor, notas_moedas[i][j])); // valor recebe o resto da divisão por cada nota/moeda.
                    contador[i][j] = //Número de notas...
                                }
                        }
    for(i=0; i<6; i++){
            for(j=0; j<2; j++){
    printf("%d Nota(s) de R$ %.2f\n", contador[i][j], notas_moedas[i][j]/100); //Imprime na tela o número de notas por posição da matriz "notas_moedas"
            }                                                                //e a quantidade de notas e moedas
    }
        return 0;
}
}

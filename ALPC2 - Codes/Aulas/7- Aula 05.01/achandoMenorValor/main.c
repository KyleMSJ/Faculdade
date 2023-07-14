#include <stdio.h>
#include <stdlib.h>
//Percorre um vetor e troca os elementos de posição para deixá-los na ordem crescente
int main()
{
    int i;
    int aux;
    int posMenor;
    int v[7] = {1,5,3,6,8,-5,12};
    posMenor = 0;
    for (i=1;i<7;i++){
        if(v[i] < v[posMenor]){
        posMenor = i;}
    }
    aux = v[0];
    v[0] = v[posMenor];
    v[posMenor] = aux;

    for (i=0;i<7;i++){
        printf("%d ", v[i]);
    }
    return 0;
}

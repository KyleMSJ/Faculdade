#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int *v;
    int i;
    system("pause");
    v = (int *) malloc(100000*sizeof(int));
    if(!v){
        printf("Nao foi poss�val alocar toda a mem�ria requisitada");
        exit(1);
    }
    for(i=0;i<100000; i++){
        v[i] = i;
        }
    system("pause");
    free(v);
    system("pause");
    return 0;
}

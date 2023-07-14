#include <stdio.h>
#include <stdlib.h>

#define G -9.8

float posx(float vx, float t){
    return vx*t;
    }

float posy(float vy, float t){
    return vy*t+G*t*t/2;
}
int main()
{
    float vx, vy;
    float dt, tmax, t;
    FILE *res;

    //abrir arquivo para escrita
    res = fopen("resultados.txt", "w");
    if(!res){
        fprintf(stderr,"Não foi possível abrir resultados.txt para escrita"); //stderr
        exit(1);
    }

    // Ler vx e vy
    printf("Velocidade em x: ");
    scanf("%f", &vx);
    printf("Velocidade em t: ");
    scanf("%f", &vy);
    printf("dt: ");
    scanf("%f", &dt);
    printf("tmax: ");
    scanf("%f", &tmax);
    // Calcula todas as posições da bola e escreve no arquivo
    for(t=0;t<=tmax;t+=dt){
        fprintf(res,"%f\t%f\n",posx(vx,t),posy(vy,t));
    }
    return 0;
}

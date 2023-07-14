#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    FILE * prod;
    prod = fopen("dados.txt", "w+");
    if(!prod){
        printf(stderr, "Não foi possível abrir o arquivo\n");
        exit(1);
    }

    int code, i, n;
    int men50 = 0;
    int a50m100 = 0;
    int mai100 = 0;
    float price;
    printf("Quantos produtos serão registrados? ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        scanf("%d %f", &code, &price);
        fprintf(prod, "%d %.2f\n", code, price);
    }

    for(i=0;i<n;i++){
        fscanf(prod, "%f", &price);
        if (price <= 50.00){
            men50++;
            }
        else if (price > 50.00 && price <= 100.00){
            a50m100++;
            }
        else{
            mai100++;
            }
    }
    prod = fopen("resultados.txt", "w");
    fprintf(prod, "%d\n%d\n%d\n", men50, a50m100, mai100);

    prod = fopen("resultados.bin", "wb");
    fwrite(&men50, sizeof(int), 1, prod);
    fwrite(&a50m100, sizeof(int), 1, prod);
    fwrite(&mai100, sizeof(int), 1, prod);
    fclose(prod);
    return 0;
}

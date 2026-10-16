#include <stdio.h>
#include <math.h>

int main(){
    int n;
    int distancia_total = 0;
    
    printf("digite o numero de cidades no circuito: ");
    scanf("%d", &n);
    int circuito[n];
    
    const char *cidades[] = {
        "Vitória",
        "Vila Velha",
        "Cariacica",
        "Serra",
        "Guarapari"
    };
    int distancias[5][5] ={
        {0, 10, 7, 15, 50}, // 0 VITÓRIA
        {10, 0, 15, 8, 45}, // 1 VILA VELHA
        {7, 15, 0, 20, 55}, // 2 CARIACICA
        {15, 8, 20, 0, 40}, // 3 SERRA
        {50, 45, 55, 40, 0} // 4 GUARAPARI
    } ;
    printf("digite o circuito como uma sequencia de indices cada uma de 0 à 4: ");
    for(int k = 0; k < n; k++){
        scanf("%d", &circuito[k]);
    }
    printf("Circuito: ");
    for(int k = 0; k< n; k++){
        printf("%s", cidades[circuito[k]]);
        if(k < n - 1){
            printf(" -> ");
        }
    };
    printf("\n");
    for(int k = 0; k< n - 1; k++){
        int origem = circuito[k];
        int destino = circuito[k+1];
        distancia_total += distancias[origem][destino];
    };
    printf("Distancia Total percorrida: %d", distancia_total);


    return 0;
}
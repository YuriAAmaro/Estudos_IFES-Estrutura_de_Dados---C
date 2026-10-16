#include <stdio.h>
#include <stdlib.h>

int main(){
    int jogador, jogador2;

    printf("escolha pedra papel ou tesoura: \n");
    printf("pedra = 0 \n");
    printf("papel = 1 \n");
    printf("tesoura = 2 \n");

    printf("jogador1, escolha(0, 1, 2): ");
    scanf("%d", &jogador);
    
    printf("jogador2, escolha(0, 1, 2): ");
    scanf("%d", &jogador2);

    if (jogador == jogador2){
        printf("empate! \n");}
        
    else if((jogador == 0 && jogador2 == 2) ||
            (jogador == 1 && jogador2 == 0) ||
              (jogador == 2 && jogador2 == 1))
            {
            printf("Jogador1 Ganhou!");
            }
    else{
        printf("Jogador2 Ganhou!");
    }


    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

int jogada_computador() {
    int sorteio = rand() % 4; // 0, 1, 2,3

    if (sorteio == 0 || sorteio == 1) {
        return 1; // 50% de chance > Pedra
    } else if (sorteio == 2) {
        return 2; // 25% de chance > Tesoura
    } else {
        return 3; // 25% de chance > Papel
    }
}

int main() {
    srand(time(NULL));

    int v_humano = 0;
    int v_maquina = 0;
    int empates = 0;
    int jogada_humano;
    int jogada_maquina;
    printf("Opcoes: 1 - Pedra | 2 - Tesoura | 3 - Papel\n");

    for (int i = 0; i < N; i++) {
        printf("Rodada %d de %d - Escolha sua jogada: ", i + 1, N);
        scanf("%d", &jogada_humano);

        jogada_maquina = jogada_computador();
        printf("Computador jogou%d\n", jogada_maquina);


        if (jogada_humano == jogada_maquina) {
            printf("Resultado: Empate\n\n");
            empates++;
        } else if ((jogada_humano == 1 && jogada_maquina == 2) ||
                   (jogada_humano == 2 && jogada_maquina == 3) ||
                   (jogada_humano == 3 && jogada_maquina == 1)) {
            printf("Resultado: Voce venceu esta rodada\n\n");
            v_humano++;
        } else {
            printf("Resultado: Computador venceu esta rodada\n\n");
            v_maquina++;
        }
    }
    printf("Total de vitorias do humano: %d\n", v_humano);
    printf("Total de vitorias do computador: %d\n", v_maquina);
    printf("Total de empates: %d\n", empates);
    return 0;
}
#include <stdio.h>

int main() { 

    // Nível novato - Movimentação das Peças

    int torre = 0;   // Contador para a torre
    int bispo = 0;   // Contador para o bispo
    int rainha = 0;  // Contador para a rainha

    // Torre: anda 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (torre = 0; torre < 5; torre++) {
        printf("Direita\n");
    }

    // Bispo: anda 5 casas na diagonal (cima e direita)
    printf("\nMovimento do Bispo:\n");
    while (bispo < 5) {
        printf("Cima, Direita\n");
        bispo++;
    }

    // Rainha: anda 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        rainha++;
    } while (rainha < 8);

    return 0;
}

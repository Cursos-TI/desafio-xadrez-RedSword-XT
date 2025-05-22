#include <stdio.h>

int main() { 

    // Nível Novato - Movimentação das Peças

    //As variáveis individuais para cada peça foram substituídas por duas variáveis genéricas,
    //para facilitar o manuseio das variáveis, e o entendimento.
    
    int i, j;

    // Movimento da TORRE - 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimento do BISPO - 5 casas na diagonal para cima e à direita
    printf("\nMovimento do Bispo:\n");
    i = 0;
    while (i < 5) {
        printf("Cima, Direita\n");
        i++;
    }

    // Movimento da RAINHA - 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < 8);


    //Nível Aventureiro - Movimentação do Cavalo


    // Movimento do CAVALO - 2 casas para baixo e 1 para a esquerda
    printf("\nMovimento do Cavalo:\n");
    for (i = 0; i < 2; i++) { // 2 passos para baixo
        printf("Baixo\n");

        if (i == 1) {// Depois do segundo passo, faz 1 passo para a esquerda
            j = 0;
            while (j < 1) {
                printf("Esquerda\n");
                j++;
            }
        }
    }

    return 0;
}
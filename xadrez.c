#include <stdio.h>

// Função recursiva da Torre (5 casas para a direita)
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

// Função recursiva da Rainha (8 casas para a esquerda)
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

// Função recursiva do Bispo (5 casas na diagonal superior direita)
void moverBispo(int passos) {
    if (passos == 0) return;
    printf("Cima + Direita\n");
    moverBispo(passos - 1);
}

int main() {

    // Movimentação simples com loops

    printf("\n===== Nível Novato =====\n");

    printf("\nMovimentação do Bispo (5 casas na diagonal superior direita):\n");
    for (int i = 0; i < 5; i++) {
        printf("Cima + Direita\n");
    }

    printf("\nMovimentação da Torre (5 casas para a direita):\n");
    int j = 0;
    while (j < 5) {
        printf("Direita\n");
        j++;
    }

    printf("\nMovimentação da Rainha (8 casas para a esquerda):\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    // Cavalo com loops aninhados
    
    printf("\n===== Nível Aventureiro =====\n");

    printf("\nMovimentação do Cavalo (em L: 2 casas para Baixo e 1 para Esquerda):\n");
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
        int l = 0;
        while (l < 1) {
            printf("Esquerda\n");
            l++;
        }
    }

    // Recursão e loops avançados

    printf("\n===== Nível Mestre =====\n");

    printf("\nMovimentação do Bispo (Recursão – 5 casas na diagonal superior direita):\n");
    moverBispo(5);

    printf("\nMovimentação da Torre (Recursão – 5 casas para a direita):\n");
    moverTorre(5);

    printf("\nMovimentação da Rainha (Recursão – 8 casas para a esquerda):\n");
    moverRainha(8);

    printf("\nMovimentação do Cavalo (em L para cima e direita – usando loops com múltiplas variáveis e break/continue):\n");
    for (int i = 1; i <= 2; i++) {
        printf("Cima\n");
        for (int j = 1; j <= 1; j++) {
            if (i == 2) {
                printf("Direita\n");
                break; // Fazendo o L (2 cima + 1 direita) e sai do segundo loop
            } else {
                printf("Direita\n");
            }
        }
    }

    return 0;
}

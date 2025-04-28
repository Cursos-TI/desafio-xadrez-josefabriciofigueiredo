#include <stdio.h>

void movimentacaoBispo(int casa) {
    if (casa > 0) {
        // Loop alinhado (Pedido no enunciado)
        for (int i = 0; i < 1; i++) {
            for (int j = 0; j < 1; j++) {
                printf("\nCima, Direita");
            }
        }
        movimentacaoBispo(--casa);
    }
}

void movimentacaoTorre(int casa) {
    if (casa > 0) {
        printf("\nDireita");
        movimentacaoTorre(--casa);
    }
}

void movimentacaoRainha(int casa) {
    if (casa > 0) {
        printf("\nEsquerda");
        movimentacaoRainha(--casa);
    }
}

int main() {
    // Declaração das variáveis constantes da movimentação das casas
    const unsigned int mov_rainha = 8;
    const unsigned int mov_torre = 5;
    const unsigned int mov_bispo = 5;
    const unsigned int mov_cavalo = 1;

    // Movimentação do Bispo: 5 casas para Cima + Direita
    printf("Movimentação do Bispo:");
    movimentacaoBispo(mov_bispo);

    printf("\n\n"); // Linha em branco para separar as peças

    // Movimentação da Torre: 5 casas para Direita
    printf("Movimentação da Torre:");
    movimentacaoTorre(mov_torre);

    printf("\n\n"); // Linha em branco para separar as peças

    // Movimentação da Rainha: 8 casas para Esquerda
    printf("Movimentação da Rainha:");
    movimentacaoRainha(mov_rainha);

    printf("\n\n"); // Linha em branco para separar as peças

    // Movimentação do Cavalo: 1 movimento completo Cima + Cima + Direita
    printf("Movimentação do Cavalo:");
    for (int i = 0, j = 0; i < mov_cavalo; i++, j++) {
        int count = 0;

        // Uso de While em um loop infinito para conseguir utilizar o break (Pedido no enunciado o uso do break)
        while (1) {
            printf("\nCima");

            count++;
            if (count == 2) {
                break;
            }
        }

        printf("\nDireita");
    }
}
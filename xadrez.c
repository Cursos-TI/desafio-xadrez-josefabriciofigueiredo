#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Declaração das variáveis constantes da movimentação das casas
    const unsigned int mov_rainha = 8;
    const unsigned int mov_torre = 5;
    const unsigned int mov_bispo = 5;

    // Movimentação do Bispo: Diagonal superior direita (5 casas para Cima + Direita)
    printf("Movimentacao do Bispo:");

    for (int i = 0; i < mov_bispo; i++) {
        printf("\nCima, Direita");
    }

    printf("\n\n"); // Linha em branco para separar as peças

    // Movimentação da Torre: Para a Direita (5 casas)
    printf("Movimentacao da Torre:");
    int j = 0;
    while (j < mov_torre) {
        printf("\nDireita");
        j++;
    }

    printf("\n\n"); // Linha em branco para separar as peças

    // Movimentação da Rainha: Para a Esquerda (8 casas)
        printf("Movimentacao da Rainha:");
    int k = 0;
    do {
        printf("\nEsquerda");
        k++;
    } while (k < mov_rainha);
    
    // Fim do programa

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}

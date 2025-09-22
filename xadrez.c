#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    // Problemática: Criar um Algoritmo que simule o movimento de 3 cartas do Xadres.
    //Torre: 5 casas para a direta;
    //Bispo: 5 casas para cima e para a direira;
    //Rainha: 8 casas para a direita.
    
    //Cada peça use uma estrutura de repetição. 

    int torre = 1, bispo = 1, rainha = 1;

    printf(" Jogada da Torre: \n");
    for (torre; torre <= 5; torre++) {
        printf("Direita\n");
    }

    printf("\n\n Jogada do Bispo: \n");
    while (bispo <= 5) {
        printf("Cima-Direita\n");
        bispo++;
    }

    printf("\n\n Jogada da Rainha: \n");
    do {
        printf("Direita\n");
        rainha++;
    } while (rainha <= 8);

    
    return 0;
}

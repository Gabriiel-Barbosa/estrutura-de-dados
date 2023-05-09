/*Leia um vetor de 16 posições e troque os 8 primeiros valores pelos 8 últimos e
vice-e-versa. Escreva ao final o vetor obtido.*/
#include <stdio.h>
#include <stdlib.h>

int vetor[16] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
int aux = 0;

int main() {
    // Copia os valores da primeira metade do vetor para o auxiliar
    for (size_t i = 0; i < 8; i++) {
        aux = vetor[i];
        // Troca os valores da primeira metade com os da segunda metade
        vetor[i] = vetor[8 + i];
        vetor[8 + i] = aux;
    }

    for (size_t i = 0; i < 16; i++) {
        printf("%d, ", vetor[i]);
    }

    return 0;
}

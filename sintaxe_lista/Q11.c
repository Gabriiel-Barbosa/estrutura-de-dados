/*Escreva um programa capaz de identificar se existe uma palavra informada pelo
usuário em uma matriz bidimensional de caracteres nas posições horizontal ou
vertical.*/

#include <stdio.h>
#include <string.h>

#define LINHAS 5
#define COLUNAS 5
#define TAMANHO_MAX 20

int verificarHorizontal(char matriz[LINHAS][COLUNAS], char palavra[TAMANHO_MAX]) {
    int i, j, k, tamanho;

    tamanho = strlen(palavra);

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j <= COLUNAS - tamanho; j++) {
            for (k = 0; k < tamanho; k++) {
                if (matriz[i][j + k] != palavra[k]) {
                    break;
                }
            }
            if (k == tamanho) {
                return 1;
            }
        }
    }

    return 0;
}

int verificarVertical(char matriz[LINHAS][COLUNAS], char palavra[TAMANHO_MAX]) {
    int i, j, k, tamanho;

    tamanho = strlen(palavra);

    for (i = 0; i <= LINHAS - tamanho; i++) {
        for (j = 0; j < COLUNAS; j++) {
            for (k = 0; k < tamanho; k++) {
                if (matriz[i + k][j] != palavra[k]) {
                    break;
                }
            }
            if (k == tamanho) {
                return 1;
            }
        }
    }

    return 0;
}

int main() {
    char matriz[LINHAS][COLUNAS] = {
        {'H', 'E', 'L', 'L', 'O'},
        {'W', 'O', 'R', 'L', 'D'},
        {'A', 'B', 'C', 'D', 'E'},
        {'F', 'G', 'H', 'I', 'J'},
        {'K', 'L', 'M', 'N', 'O'}
    };
    char palavra[TAMANHO_MAX];

    printf("Digite a palavra a ser procurada: ");
    scanf("%s", palavra);

    if (verificarHorizontal(matriz, palavra) || verificarVertical(matriz, palavra)) {
        printf("A palavra foi encontrada na matriz.\n");
    } else {
        printf("A palavra nao foi encontrada na matriz.\n");
    }

    return 0;
}

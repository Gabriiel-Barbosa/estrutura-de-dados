/*Leia um vetor de 10 posições e acumule os valores do primeiro elemento no
segundo, deste no terceiro e assim por diante. Ao final, imprima o vetor final obtido.*/

#include <stdio.h>
#include <stdlib.h>

int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int aux = 0;
int main(){
    for (size_t i = 0; i < 10; i++)
    {
        vetor [i] = vetor[ i + 1 ];
        vetor [ i + 1 ] = vetor [ i - 1];
    }
    for (size_t i = 0; i < 10; i++) {
        printf("%d, ", vetor[i]);
    }
    
}
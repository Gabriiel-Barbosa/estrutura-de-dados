/*. Faça um algoritmo que leia um vetor de inteiros com 15 posições e escreva o vetor
na ordem inversa a que o mesmo foi lido.*/

#include <stdio.h>
#include <stdlib.h>

int vetor [15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
int main(){
    for (size_t i = 0; i < 15; i++)
    {
        vetor [i] = 16 - vetor [i];

        printf("%d, ", vetor[i]);
    }
    
}
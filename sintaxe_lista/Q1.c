/*Construa um algoritmo que leia um vetor de inteiros com 10 posições e escreva a
média dos valores contidos no vetor.*/
#include <stdio.h>
#include <stdlib.h>

int vetor [10] = {1,2,3,4,5,6,7,8,9,10};
int count = 0;
int main(){
    for (size_t i = 0; i < 10; i++)
    {
        count = count + vetor [i];
    }    
    printf("Média: %d", count/10);
}
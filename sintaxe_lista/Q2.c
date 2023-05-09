/*Elabore um algoritmo que leia um vetor de 20 posições e escreva o maior valor
contido no vetor e a posição em que este valor se encontra.*/

#include <stdio.h>
#include <stdlib.h>
int vetor [20] = {1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,11};
int value = 0;
int main(){
    for (size_t i = 0; i < 20; i++)
    {    
        if( vetor[i] > value){
            value = vetor[i];
        }
    }
    printf("O maior valor é %d", value);
    
}
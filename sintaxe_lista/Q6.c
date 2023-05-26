/*Leia um vetor contendo uma frase, retire os seus espaços em branco e imprima o
resultado.*/

#include <stdio.h>
#include <stdlib.h>

char vetor[9] = {'O','L','A',' ','M','U','N','D','O'};

int  main (){

    for (size_t i = 0; i < 9; i++)
    {
        if(vetor[i] == ' '){
            vetor[i] = vetor[i + 1];
            vetor[i + 1] = ' ';
        }
        printf("%c", vetor[i]);
    }
    
}

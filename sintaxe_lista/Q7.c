/*. Fazer um programa para ler uma frase e contar quantas palavras existem na frase.
*/

#include <stdio.h>
#include <stdlib.h>

char vetor[9] = {'O','L','A',' ','M','U','N','D','O'};
int count = 0;

int  main (){

    for (size_t i = 0; i < 9; i++)
    {
       if(vetor[i] == ' '){
        count = count;
        }
        else{
            count +=1; 
        }          
    }
    printf("%d", count);
}
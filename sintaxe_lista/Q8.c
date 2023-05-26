/*Fazer um programa para ler uma frase e uma palavra. O programa deve verificar
se a palavra existe na frase.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char frase[] = "Ola, tudo bem?";

int main(){
    char palavra[50];
    printf("Digite uma palavra: ");
    fgets(palavra, 50, stdin);
    palavra[strcspn(palavra, "\n")] = '\0';
    if (strstr(frase, palavra) != NULL) {
        printf("A palavra '%s' existe na frase '%s'\n", palavra, frase);
    } else {
        printf("A palavra '%s' nao existe na frase '%s'\n", palavra, frase);
    }
    
    }

/*Ponderações */

/*
- A função fgets é usada para ler uma string da entrada padrão (normalmente o teclado) 
e armazená-la em um buffer. Ela lê caracteres da entrada até que encontre uma quebra de linha (\n), 
ou até que tenha lido um número máximo de caracteres especificado pelo segundo argumento da função.

- A função strcspn é usada para encontrar o índice da primeira ocorrência de qualquer caractere 
de uma string em outra string.

- A função strstr é usada para encontrar a primeira ocorrência de uma string em outra string.
*/
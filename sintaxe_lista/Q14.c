/*Escreva uma função que transforme a idade informada em anos para dias.
*/

#include <stdio.h>

int converterAnosParaDias(int idade) {
    int dias = idade * 365;  // Supondo que um ano tem 365 dias
    return dias;
}

int main() {
    int idade;
    printf("Digite a idade em anos: ");
    scanf("%d", &idade);
    
    int dias = converterAnosParaDias(idade);
    printf("A idade de %d anos equivale a aproximadamente %d dias.\n", idade, dias);

    return 0;
}

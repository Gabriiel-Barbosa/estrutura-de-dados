/*Escreva uma função que lê as quatro notas de um aluno e calcula a média. A subrotina 
deve imprimir a média calculada e uma mensagem indicando se o aluno foi aprovado ou 
reprovado. Um aluno é aprovado quando obtém uma média maior ou igual a 7.*/

#include <stdio.h>

void calcularMediaNotas() {
    float nota1, nota2, nota3, nota4;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("Média: %.2f\n", media);

    if (media >= 7) {
        printf("Aluno aprovado!\n");
    } else {
        printf("Aluno reprovado!\n");
    }
}

int main() {
    calcularMediaNotas();

    return 0;
}

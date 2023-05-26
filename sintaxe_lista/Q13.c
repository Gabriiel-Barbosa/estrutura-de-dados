/*mplemente as funções desejadas a seguir:
a) Dado dois números reais imprima a sua média aritmética.
b) Dado dois números reais referentes aos lados de um retângulo imprima a sua área e o 
seu perímetro.
c) Dado um número inteiro imprima se ele é par ou ímpar.
*/

#include <stdio.h>

// Função para calcular a média aritmética de dois números reais
void calcularMediaAritmetica(float num1, float num2) {
    float media = (num1 + num2) / 2;
    printf("A média aritmética dos números %.2f e %.2f é %.2f\n", num1, num2, media);
}

// Função para calcular a área e o perímetro de um retângulo
void calcularRetangulo(float lado1, float lado2) {
    float area = lado1 * lado2;
    float perimetro = 2 * (lado1 + lado2);
    printf("A área do retângulo de lados %.2f e %.2f é %.2f\n", lado1, lado2, area);
    printf("O perímetro do retângulo de lados %.2f e %.2f é %.2f\n", lado1, lado2, perimetro);
}

// Função para verificar se um número inteiro é par ou ímpar
void verificarParImpar(int num) {
    if (num % 2 == 0) {
        printf("O número %d é par\n", num);
    } else {
        printf("O número %d é ímpar\n", num);
    }
}

int main() {
    // Exemplos de uso das funções
    calcularMediaAritmetica(5.5, 7.3);
    calcularRetangulo(4.2, 3.8);
    verificarParImpar(10);

    return 0;
}

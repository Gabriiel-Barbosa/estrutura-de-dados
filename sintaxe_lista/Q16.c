/*Uma firma contrata um encanador a R$ 20,00 por dia. Escreva uma função que leia o 
número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser 
paga, sabendo-se que são descontados 8% para o imposto de renda.*/

#include <stdio.h>

float calcularPagamentoLiquido(int diasTrabalhados) {
    float valorDiario = 20.0;
    float valorBruto = diasTrabalhados * valorDiario;
    float descontoImposto = valorBruto * 0.08;
    float valorLiquido = valorBruto - descontoImposto;
    return valorLiquido;
}

int main() {
    int diasTrabalhados;
    printf("Digite o número de dias trabalhados: ");
    scanf("%d", &diasTrabalhados);

    float valorLiquido = calcularPagamentoLiquido(diasTrabalhados);
    printf("O valor líquido a ser pago é de R$ %.2f\n", valorLiquido);

    return 0;
}

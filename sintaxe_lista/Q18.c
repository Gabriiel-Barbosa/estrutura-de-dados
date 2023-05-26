/*Escreva uma função que lê o número de um funcionário, as horas trabalhadas e o preço 
pago por cada hora de trabalho e calcule o salário dele. Todas as horas acima de 40 são 
pagas com um adicional de 50% ao valor das horas normais.*/

#include <stdio.h>

float calcularSalario(int numeroFuncionario, float horasTrabalhadas, float precoHora) {
    float salario;
    float salarioNormal = horasTrabalhadas * precoHora;  // Salário sem adicional de horas extras

    if (horasTrabalhadas > 40) {
        float horasExtras = horasTrabalhadas - 40;  // Quantidade de horas extras
        float valorHorasExtras = horasExtras * (precoHora * 1.5);  // Valor das horas extras com adicional de 50%
        salario = salarioNormal + valorHorasExtras;
    } else {
        salario = salarioNormal;
    }

    printf("Funcionário de número %d\n", numeroFuncionario);
    printf("Salário: R$ %.2f\n", salario);

    return salario;
}

int main() {
    int numeroFuncionario;
    float horasTrabalhadas, precoHora;

    printf("Digite o número do funcionário: ");
    scanf("%d", &numeroFuncionario);

    printf("Digite o número de horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);

    printf("Digite o preço pago por cada hora de trabalho: R$ ");
    scanf("%f", &precoHora);

    calcularSalario(numeroFuncionario, horasTrabalhadas, precoHora);

    return 0;
}

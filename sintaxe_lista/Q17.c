/*Em uma empresa os funcionários renovam o contrato por três anos. O salário sofrerá 
um reajuste de 7%, 6% e 5%, respectivamente, nos próximos três anos. Escreva uma 
função que leia o salário mensal atual do funcionário, e então, imprima o salário mensal 
para cada um dos três próximos anos*/

#include <stdio.h>

void calcularSalarioProximosAnos(float salarioAtual) {
    float reajuste1 = 0.07;  // Reajuste de 7% no primeiro ano
    float reajuste2 = 0.06;  // Reajuste de 6% no segundo ano
    float reajuste3 = 0.05;  // Reajuste de 5% no terceiro ano

    float salarioAno1 = salarioAtual + (salarioAtual * reajuste1);
    float salarioAno2 = salarioAno1 + (salarioAno1 * reajuste2);
    float salarioAno3 = salarioAno2 + (salarioAno2 * reajuste3);

    printf("Salário no primeiro ano: R$ %.2f\n", salarioAno1);
    printf("Salário no segundo ano: R$ %.2f\n", salarioAno2);
    printf("Salário no terceiro ano: R$ %.2f\n", salarioAno3);
}

int main() {
    float salarioAtual;
    printf("Digite o salário mensal atual do funcionário: R$ ");
    scanf("%f", &salarioAtual);

    calcularSalarioProximosAnos(salarioAtual);

    return 0;
}

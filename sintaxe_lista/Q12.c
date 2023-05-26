/*Considere que determinada empresa tem registrado numa tabela, os consumos
mensais de energia elétrica ao longo de 5 anos. Cada linha representa um ano e
cada coluna um mês. Faça um programa que, considerando estes dados,
determine:
a. O consumo médio em cada um dos meses.
b. Qual mês a empresa gasta mais energia.
c. Qual o ano e mês de maior consumo dos últimos 20 anos.
(Assuma que cada mês tem 30 dias)*/


#include <stdio.h>

#define ANOS 2
#define MESES 12

int matriz[ANOS][MESES] = {
    {100,530,500,300,400,303,300,440,300,345,456,234},
    {123,345,234,697,787,900,890,997,788,788,677,677}
};

void calcularMediaDoMes(){
    int resultadoMedia = 0;
    for (size_t i = 0; i < ANOS ; i++)
    {
        for (size_t j = 0; j < MESES ; j++)
        {
            resultadoMedia = matriz[i][j] / 30;

            printf("A media de consumo  mes %d no ano %d : %d\n", j + 1 , i + 1, resultadoMedia );
        }
        
    }
    
};

void calculaMesConsumo() {
    int energiames[MESES] = {0};

    for (size_t i = 0; i < ANOS; i++) {
        for (size_t j = 0; j < MESES; j++) {
            energiames[j] += matriz[i][j];
        }
    }
    int maiorNumero = energiames[0];
    for (size_t j = 1; j < MESES; j++) {
        if (energiames[j] > maiorNumero) {
            maiorNumero = energiames[j];
        }
    }

    printf("O maior consumo foi: %d\n", maiorNumero);

}
int main(){
    calcularMediaDoMes();

}
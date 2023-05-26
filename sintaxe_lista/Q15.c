/*Escreva uma função que leia uma quantidade de tempo dada em horas, minutos e 
segundos e converta para um número equivalente em segundos.*/

#include <stdio.h>

int converterTempoParaSegundos(int horas, int minutos, int segundos) {
    int totalSegundos = (horas * 3600) + (minutos * 60) + segundos;
    return totalSegundos;
}

int main() {
    int horas, minutos, segundos;
    printf("Digite o tempo no formato horas:minutos:segundos: ");
    scanf("%d:%d:%d", &horas, &minutos, &segundos);

    int totalSegundos = converterTempoParaSegundos(horas, minutos, segundos);
    printf("O tempo %02d:%02d:%02d é equivalente a %d segundos.\n", horas, minutos, segundos, totalSegundos);

    return 0;
}

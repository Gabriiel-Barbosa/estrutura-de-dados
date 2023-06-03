/*3) Nesse exercício vamos trabalhar com pontos no plano cartesiano.
    a) Crie uma estrutura de dados de nome Ponto, que armazena um ponto do plano
cartesiano. Um ponto deve possuir uma coordenada x e uma coordenada y,
ambas do tipo double.
    b) Crie uma estrutura de dados de nome Retangulo, que armazena as
informações de um retângulo no plano cartesiano. Um retângulo deve possuir
dois pontos: um que representa seu ponto da superior esquerda, e um que
representa seu ponto da inferior direita.
    c) Crie uma função de nome distancia, que receba como parâmetros duas
variáveis do tipo Pontoe retorne um double, que representa o valor da distância
entre eles. A distância entre dois pontos pode ser calculada por
. Utilize a função sqrt()biblioteca math.hpara calcular √(x ) b − xa
2 + (y ) b − ya
2
a raiz quadrada!
    d) Crie uma função de nome maisProximoOrigemque receba como parâmetros
duas variáveis do tipo Pontoe retorne o Pontomais próximo à origem
(lembre­se, a origem é o ponto de coordenadas (0.0, 0.0) do plano cartesiano).
Essa função deve fazer uso da função distancia(), implementada
anteriormente.
    e) Crie uma função de nome estaContido, que recebe como parâmetros uma
variável do tipo Pontoe uma variável do tipo Retangulo. Essa função deve
retornar 1caso o ponto passado por parâmetro esteja dentro do retângulo
passado por parâmetro, e 0caso contrário.
    f) Usando as funções criadas anteriormente, escreva um programa que leia, via
scanf(), as informações de dois pontos e um retângulo. Em seguida seu
programa deve informar a distância entre os dois pontos informados, qual deles
está mais próximo da origem, e se cada um dos pontos está ou não contido no
retângulo informado. Segue um exemplo de entrada e saída do programa. Os
dados sublinhados foram informados pelo usuário.
Entre com as coordenadas x e y do primeiro ponto: 5.0 4.0
Entre com as coordenadas x e y do segundo ponto: 1.0 1.0
Entre com as coordenadas x e y do ponto da superior esquerda do
retangulo: 0.0 4.0
Entre com as coordenadas x e y do ponto da inferior direita do retangulo:
4.0 0.0
Distancia entre os dois pontos: 5.000000
Ponto mais proximo a origem: (1.000000, 1.000000)
O ponto (5.000000, 4.000000) nao esta contido no retangulo!
O ponto (1.000000, 1.000000) esta contido no retangulo*/

#include <stdio.h>
#include <string.h>
#include <math.h>

// Definição da estrutura de dados Ponto
typedef struct {
    double x;
    double y;
} Ponto;

// Definição da estrutura de dados Retangulo
typedef struct {
    Ponto superiorEsquerdo;
    Ponto inferiorDireito;
} Retangulo;

// Função para calcular a distância entre dois pontos
double distancia(Ponto pontoA, Ponto pontoB) {
    double dx = pontoB.x - pontoA.x;
    double dy = pontoB.y - pontoA.y;
    return sqrt(dx*dx + dy*dy);
}

// Função para determinar o ponto mais próximo da origem
Ponto maisProximoOrigem(Ponto pontoA, Ponto pontoB) {
    Ponto origem = {0.0, 0.0};
    double distanciaA = distancia(origem, pontoA);
    double distanciaB = distancia(origem, pontoB);

    if (distanciaA <= distanciaB) {
        return pontoA;
    } else {
        return pontoB;
    }
}

// Função para verificar se um ponto está contido em um retângulo
int estaContido(Ponto ponto, Retangulo retangulo) {
    if (ponto.x >= retangulo.superiorEsquerdo.x && ponto.x <= retangulo.inferiorDireito.x &&
        ponto.y <= retangulo.superiorEsquerdo.y && ponto.y >= retangulo.inferiorDireito.y) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    Ponto ponto1, ponto2;
    Retangulo retangulo;

    // Leitura das coordenadas dos pontos e do retângulo
    printf("Entre com as coordenadas x e y do primeiro ponto: ");
    scanf("%lf %lf", &ponto1.x, &ponto1.y);

    printf("Entre com as coordenadas x e y do segundo ponto: ");
    scanf("%lf %lf", &ponto2.x, &ponto2.y);

    printf("Entre com as coordenadas x e y do ponto da superior esquerda do retangulo: ");
    scanf("%lf %lf", &retangulo.superiorEsquerdo.x, &retangulo.superiorEsquerdo.y);

    printf("Entre com as coordenadas x e y do ponto da inferior direita do retangulo: ");
    scanf("%lf %lf", &retangulo.inferiorDireito.x, &retangulo.inferiorDireito.y);

    // Cálculo e exibição da distância entre os dois pontos
    double dist = distancia(ponto1, ponto2);
    printf("Distancia entre os dois pontos: %lf\n", dist);

    // Determinação do ponto mais próximo da origem e exibição
    Ponto pontoMaisProximo = maisProximoOrigem(ponto1, ponto2);
    printf("Ponto mais proximo a origem: (%lf, %lf)\n", pontoMaisProximo.x, pontoMaisProximo.y);

    // Verificação se os pontos estão contidos no retângulo e exibição
    printf("O ponto (%lf, %lf) %sesta contido no retangulo!\n", ponto1.x, ponto1.y, estaContido(ponto1, retangulo) ? "" : "nao ");
    printf("O ponto (%lf, %lf) %sesta contido no retangulo!\n", ponto2.x, ponto2.y, estaContido(ponto2, retangulo) ? "" : "nao ");

    return 0;
}

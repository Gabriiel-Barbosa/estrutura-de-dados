/*Nesse exercício vamos trabalhar com compromissos de uma pessoa. Um compromisso possui um texto de (Str de até 200 caracteres),
uma data e um horário. A data deve possuir dia, mês e ano, todos números inteiros. Um horário deve possuir hora, minuto e segundo, todos também números inteiros
A - Crie em seu programa todas as estruturas necessárias para armazenar as informações do compromisso
B - Crie agora um vetor de compromissos de 20 posições. Use a diretiva define para definir o tamanho desse vetor
C - Inicialize o vetor de compromissos com números aleatórios da seguinte forma: o dia da data deve ser um número inteiro entre 1 e 20, o mês deve ser um número 
entre 1 e 12, o ano deve ser um número entre 2016 e 2019. As horas do horário deve ser um número entre 0 e 23, os minutos um número entre 0 e 59, os segundo. Por fim,
o texto de todos os compromissos deve ser "Compromisso de teste gerado aleatoriamente"
D - Imprima um vetor de compromissos inicializados anteriormente no seguinte formato:

=======Lista de Compromissos======= 
Compromisso x:
    Data: xx/xx/xxxx
    Horario: xx:xx:xx
    Texto: Compromisso de teste gerado aleatoriamente
Compromisso x:
    Data: xx/xx/xxxx
    Horario: xx:xx:xx
    Texto: Compromisso de teste gerado aleatoriamente*/
 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Data
{
    int dia;
    int mes;
    int ano;
};

struct Horario
{
    int hora;
    int minutos;
    int segundos;
};


struct Compromisso
{
    char compromisso_texto[201];
    struct Data data_compromiso;
    struct Horario horario_compeomisso;

};

#define NUMEROCOMPROMISSO 20



int main(){
    struct Compromisso compromissos[NUMEROCOMPROMISSO];

    for (size_t i = 0; i < NUMEROCOMPROMISSO; i++)
    {
        /*Texto do Compromisso*/
        strcpy(compromissos[i].compromisso_texto, "Compromisso de teste gerado aleatoriamente");
        /*Função strcpy para é usada para copiar a string literal para o campo compromisso_texto de cada elemento do vetor compromissos */

        /*data do compromisso*/
        compromissos[i].data_compromiso.dia = rand() % 20 + 1; // Gera um número aleatório entre 1 e 20
        compromissos[i].data_compromiso.mes = rand() % 12 + 1;
        compromissos[i].data_compromiso.ano = rand() % 4 + 2016;

        /*Hora do Compromisso*/

        compromissos[i].horario_compeomisso.hora = rand() % 23; // Gera um número aleatório entre 1 e 20
        compromissos[i].horario_compeomisso.minutos = rand() % 59;
        compromissos[i].horario_compeomisso.segundos = rand() % 59;

    }
    printf("=======Lista de Compromissos=======\n");
    for (size_t i = 0; i < NUMEROCOMPROMISSO; i++)
    {
        printf("Compromisso: %d \n", i + 1);
        printf("        Descrição:  %s \n", compromissos[i].compromisso_texto);
        printf("        Data:  %d / %d / %d \n", compromissos[i].data_compromiso.ano, compromissos[i].data_compromiso.mes, compromissos[i].data_compromiso.dia);
        printf("        Hora:  %d / %d / %d \n", compromissos[i].horario_compeomisso.hora, compromissos[i].horario_compeomisso.minutos, compromissos[i].horario_compeomisso.segundos);
        
    }
    
    
}
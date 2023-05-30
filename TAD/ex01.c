/*Faça um programa em C que ultilize structs para armazenar os dados de um funcionário de uma empresa.
Um funcionário de uma empresa deve possuir
- Nome(string até 30 caracteres)
- Idade
- Sexo (Representado pelo caractere M ou F
- CPF (Armazenar como string )
- Salário 
- Dara de nascimento (dia e ano números inteiros, mês deve ser string)
- Você pode definir quantas estruturas achar necessário. Seu programa deve criar um vetor de 03 funcionários. Use a diretiva define para 
definir o tamanho do vetor. Em seguida, o usuário deve entrar com as informações para preencher esse vetor. Finalmente, seu programa 
deve imprimir o vetor preenchido 
*/

/*Não foi feito o uso de funções e nem de condicionais para tratamento dos dados pois não era esse o objetivo da atividade!*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Definição da struct para a data de nascimento
struct data_nascimento
{
    int dia;
    char mes[15];
    int ano;
};

// Definição da struct para os dados do funcionário
struct dados_funcionario
{
    char nome[30];
    int idade;
    char sexo[2];
    char cpf[11];
    float salario;
};

// Definição da struct que representa a ficha do funcionário, com os dados e a data de nascimento
struct ficha_funcionario
{
    struct dados_funcionario dados_f;
    struct data_nascimento data_n;
};

#define TAMANHO_FICHAS 3

// Vetor de fichas de funcionários
struct ficha_funcionario fichas_funcionarios[TAMANHO_FICHAS];

int main() {
    // Preenchimento das fichas dos funcionários
    for (size_t i = 0; i < 3; i++)
    {
        printf("***...Preencha a ficha do funcionário %d...***\n", i + 1);

        // Preenchendo o nome do funcionário
        printf("Nome do Funcionário........: ");
        getchar();
        fgets(fichas_funcionarios[i].dados_f.nome, 30, stdin );

        // Preenchendo a idade do funcionário
        printf("\nIdade........: ");
        scanf("%d", &fichas_funcionarios[i].dados_f.idade);

        // Preenchendo o sexo do funcionário
        printf("Sexo do Funcionário(M,F)........: ");
        getchar();
        fgets(fichas_funcionarios[i].dados_f.sexo, 2, stdin );

        // Preenchendo o CPF do funcionário
        printf("CPF do Funcionário........: ");
        getchar();
        fgets(fichas_funcionarios[i].dados_f.cpf, 11, stdin );

        // Preenchendo o salário do funcionário
        printf("\nSalario do Funcionário........: ");
        getchar();
        scanf("%f", &fichas_funcionarios[i].dados_f.salario);

        // Preenchendo o dia de nascimento do funcionário
        printf("\nDia do Nascimento........: ");
        scanf("%d", &fichas_funcionarios[i].data_n.dia);

        // Preenchendo o mês de nascimento do funcionário
        printf("Mês do Nascimento........: ");
        getchar();
        fgets(fichas_funcionarios[i].data_n.mes, 15, stdin );

        // Preenchendo o ano de nascimento do funcionário
        printf("\nAno do Nascimento........: ");
        scanf("%d", &fichas_funcionarios[i].data_n.ano);

    }

    // Exibindo os dados dos funcionários
    for (int i = 0; i < TAMANHO_FICHAS; i++) {
        printf("Dados do Funcionário %d:\n", i + 1);

        printf("Nome: %s\n", fichas_funcionarios[i].dados_f.nome);
        printf("Idade na data de cadastro: %d\n", fichas_funcionarios[i].dados_f.idade);
        printf("Sexo: %s\n", fichas_funcionarios[i].dados_f.sexo);
        printf("CPF: %s\n", fichas_funcionarios[i].dados_f.cpf);
        printf("Salário: %.2f\n", fichas_funcionarios[i].dados_f.salario);
        printf("Dia de nascimento: %d\n", fichas_funcionarios[i].data_n.dia);
        printf("Mês de nascimento: %s\n", fichas_funcionarios[i].data_n.mes);
        printf("Ano de nascimento: %d\n", fichas_funcionarios[i].data_n.ano);
    }

    return 0;
}

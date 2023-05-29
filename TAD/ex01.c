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

#include <stdio.h>
#include <string.h>
struct funcionario
{
    char nome[30];
    char sobrebome[30];
};


int main() {
    struct funcionario f;

    printf("Digite o nome do funcionário: ");
    fgets(f.nome, sizeof(f.nome), stdin);
    printf("Digite o sobrenome do funcionário: ");
    fgets(f.sobrebome, sizeof(f.sobrebome), stdin);

    // Removendo o caractere de nova linha ('\n') da string
    f.nome[strcspn(f.nome, "\n")] = '\0';
    f.sobrebome[strcspn(f.sobrebome, "\n")] = '\0';

    printf("Nome  completo do funcionário: %s %s\n", f.nome, f.sobrebome);

    return 0;
}
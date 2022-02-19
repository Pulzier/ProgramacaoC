#include <stdio.h>

int main()
{
    char nome[32];
    char endereco[120];
    char telefone[15];
    char cidade[32];
    char cep[10];

    printf("ler nome:\n");
    scanf(" %[^\n]s", &nome);
    printf("ler endereco:\n ");
    scanf(" %[^\n]s", &endereco);
    printf("ler telefone:\n");
    scanf(" %[^\n]s", &telefone);
    printf("ler cidade:\n");
    scanf(" %[^\n]s", &cidade);
    printf("ler cep:\n");
    scanf(" %[^\n]s", &cep);

    printf("nome: %s\n", nome);
    printf("endereco: %s\n", endereco);
    printf("telefone: %s\n", telefone);
    printf("cidade: %s\n", cidade);
    printf("cep: %s\n", cep);
}

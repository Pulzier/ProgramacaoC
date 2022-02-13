#include <stdio.h>

int main()
{
    char nome[32];
    int idade = 0;

    printf("ler a idade: ");
    scanf("%d", &idade);
    if (idade >= 18)
    {
        printf("você é maior de idade\n");
        printf("ler o nome: ");
        scanf(" %s", nome);
    }
    else
    {
        printf("você é menor de idade ;-;\n");
    }
}
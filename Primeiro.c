#include <stdio.h>
int main (){
    int idade = 0;
    float peso = 0;
    char nome[32];
    char aniversario[10];
    printf("digite um idade: ");
    scanf("%d", &idade);
    printf("digite um peso: ");
    scanf("%f", &peso);
    printf("digite um aniversario: ");
    scanf(" %s", &aniversario);
    printf("digite uma nome: ");
    scanf(" %[^\n]s", &nome);


    printf("idade e: %d\n", idade);
    printf("peso e: %f\n", peso);
    printf("aniversario %s\n", aniversario);
    printf("letra e: %s\n", nome);
}
     

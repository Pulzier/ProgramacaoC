#include <stdio.h>
int main (){
    int idade = 0;
    float peso = 0;
    char nome[32];
    char aniversario[10];
    printf("digite sua idade: ");
    scanf("%d", &idade);
    printf("digite seu peso: ");
    scanf("%f", &peso);
    printf("digite adata do seu aniversario: ");
    scanf(" %s", aniversario);
    printf("digite seu nome: ");
    scanf(" %[^\n]s", nome);


    printf("idade e: %d\n", idade);
    printf("peso e: %f\n", peso);
    printf("aniversario %s\n", aniversario);
    printf("letra e: %s\n", nome);
}
     

// Dados dois números distintos, informe qual dele é o maior.
#include <stdio.h>

int main() {
    int numero1 =0,numero2=0;
    printf("Digite um numero\n");
    scanf("%i", &numero1);
    printf("Digite mais um numero\n");
    scanf("%i", &numero2);
    if (numero1>numero2)
    {
        printf("O numero maior é: %i\n\n", numero1);
    }
    else if(numero2>numero1)
    {
        printf("O numero maior é: %i\n\n", numero2);
    }   
    else
    {
        printf("Esses dois numeros são iguais\n\n");
    }
    return 0;
}
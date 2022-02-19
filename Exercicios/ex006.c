// Uma empresa determinou um reajuste salarial de 5% a todos os seus funcionários. Além disto, concedeu um abono de R$ 100,00 para aqueles que recebem até R$ 750,00. Dado o valor do salário de um funcionário,informar para quanto ele será reajustado.
#include <stdio.h>
#define reajuste 1.05
#define abono 100
#define salarioBase 750

int main(){
    float salarioInicial = 0, salarioFinal = 0;
    
    printf("Insira o Salario inicial: ");
    scanf("%f", &salarioInicial);
    salarioFinal=salarioInicial*reajuste;
if (salarioFinal<=salarioBase)
{
    salarioFinal+=abono;
}

    printf("O salario final é: R$ %.1f", salarioFinal);

}
// Numa empresa paga-se R$ 19,50 a hora e recolhe-se para o imposto de renda 10% dos salários acima de R$ 1500,00. Dado o número de horas trabalhadas por um funcionário, informar o valor do seu salário líquido.
#include <stdio.h>
#define valorHora 19.50
#define imposto 0.9

int main(){
    float horasTrabalhadas = 0, totalBruto = 0, totalLiquido = 0;

    printf("Insira a quantidade de horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);
    totalBruto = horasTrabalhadas*valorHora;

    if (totalBruto> 1500)
    {
        totalLiquido = totalBruto*imposto;

        printf("Valor liquído: R$ %.2f", totalLiquido);
    }
    else
    {
        printf("Valor liquído: R$ %.2f", totalBruto);
    }
    
    
}

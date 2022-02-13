// Dado um ano, informe se ele é ou não bissexto. Dica: um ano é  e é divisível por 4  mas não por 100. 


#include <stdio.h>

int main(){
    int ano = 0 ;
    printf("digite o ano desejado:\n");
    scanf("%i", &ano);
    if ( (ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0 )
    {
        printf("o ano inserido é bissexto\n");
    }
    else
    {
        printf("o ano inserido não é bissexto\n");
    }
    
    
}

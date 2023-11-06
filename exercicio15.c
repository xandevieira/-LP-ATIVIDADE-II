#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    int operacao;
    float valor;
    float calculo;

    do
    {
    printf("Menu de Conversão :\n");
    printf("0\t| Digite 0 para finalizar\n");
    printf("1\t| Quilômetros para Milhas\n");
    printf("2\t| Celsius para Fahrenheit\n");
    scanf("%d", &operacao);

    switch (operacao)
    {
    case 1:
        printf("Digite o valor em quilômetros: ");
        scanf("%f", &valor);
        calculo = valor / 1.609;       
        printf("O Valor convertido em milhas equivale a : %.2f\n", calculo);
        break;

    case 2:
        printf("Digite a temperatura em graus Celsius: ");
        scanf("%f", &valor);
        calculo = (valor * 9/5) + 32;
        printf("O Valor convertido em Fahrenheit equivale a : %.2f\n", calculo);
        break;
    
    default:
        printf("Operação inválida.");
        break;
    }
    } while (operacao != 0);

    return 0;
}
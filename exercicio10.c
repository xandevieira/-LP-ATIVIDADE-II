#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    
    char operacao;
    int num1;
    int num2;

    printf ("Digite o primeiro valor: ");
    scanf("%d", &num1);
    printf ("Digite o segundo valor: ");
    scanf("%d", &num2);
    printf ("Digite a operação (+ = Soma e - = Subtração: ");
    scanf("%s", &operacao);

    switch (operacao)
    {
    case '+':
        operacao = num1 + num2;
        break;
    case '-':
        operacao = num1 - num2;
        break;
    default:
    printf ("Operação Invalida.");
        break;
    }
    printf ("Resultado: %d", operacao);

    return 0;
}
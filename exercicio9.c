#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {

setlocale(LC_ALL, "portuguese");

int numero;
int contadorCalculo;
int validacaoPrimo = 1;

printf("Digite um número: ");
scanf("%d", &numero);

for (contadorCalculo = 2; contadorCalculo <= numero / 2; contadorCalculo++){
    if (numero % contadorCalculo == 0) {
        validacaoPrimo = 0;
    }
}

    switch (validacaoPrimo) {
        case 1:
            printf("Número primo.\n");
            break;
        case 0:
            printf("Número não primo.\n");
            break;
    }

    return 0;
}

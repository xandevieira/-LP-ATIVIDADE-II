#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Por favor, digite um número inteiro positivo.\n");
        return 1;
    }

    printf("Contagem regressiva a partir de %d:\n", numero);

    while (numero >= 0) {
        switch (numero) {
            case 0:
                printf("Zero\n");
                break;
            default:
                printf("%d\n", numero);
                break;
        }
        numero--;
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "portuguese");

    int i = 1;
    int num = 0;
    int numPar = 0;
    int numImpar = 0;

    do {
        printf ("Digite o %d número: ", i);
        scanf("%d", &num);   
    
    i++;

    if (num % 2 == 0) {
        numPar = numPar + 1;
        }
    else{
        numImpar = numImpar + 1;
    }
    } while (num > 0);

    printf("Quantia de pares : %d\n" , numPar);
    printf("Quantia de Impares : %d\n" , numImpar);

    return 0;
}
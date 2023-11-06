#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main() {

    int num1, num2;

    printf("Digite o 1º número: ");
    scanf("%d", &num1);

    printf("Digite o 2º número: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("%d é o maior. \n", num1);
        printf("%d é menor.\n", num2);
    } else if (num2 > num1) {
        printf("%d é o maior. \n", num2);
        printf("%d é menor.\n", num1);
    } 

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
    setlocale(LC_ALL, "portuguese");

    char codigoSalvo [250] = "admin";
    char codigo [250];


    do {
    printf ("Digite o código de acesso: ");
    gets(codigo);

    if (strcmp(codigo, codigoSalvo) == 0)
    {
        printf("Bem-vindo! \n");
    }
    else
    {
        printf("Código inválido. \n");
    }
    } while (strcmp(codigo, codigoSalvo) != 0);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int idioma;

    printf ("Digite um idioma de preferência: \n");
    printf ("1 - Inglês, 2 - Espanhol, 3 - Francês \n");
    scanf ("%d", &idioma);

    if (idioma == 1) {
        printf ("Welcome!");
    }
    else if (idioma == 2) {
        printf ("Bienvenido!");
    }
    else if (idioma == 3) {
        printf ("Accueillir!");
    }

    return 0;
}

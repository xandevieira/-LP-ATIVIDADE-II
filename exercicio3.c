#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float nota;

    char resultado[250];
    
        printf("Digite a nota do aluno: ");
        scanf("%f", &nota);
        
    if (nota >= 9){
        strcpy (resultado, "Excelente \n");
    }
    else if (nota >= 7 && nota < 9) {
        strcpy (resultado, "Bom \n");
    }
    else if (nota >= 5 && nota < 7) {
        strcpy (resultado, "Razoável \n");
    }
    else {
        strcpy (resultado, "Isuficiente \n");
    }

    printf("Resultado: %s\n", resultado);    


    return 0;
}
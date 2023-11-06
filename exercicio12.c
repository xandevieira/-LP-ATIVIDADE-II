#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    float nota;
    float media;
    float soma = 0;
    int iValorNotas;
    
    printf ("Digite quantas notas dejesa inserir: ");
    scanf ("%d", &iValorNotas);

    for (i = 1; i <= iValorNotas; i++){   
           printf("Digite a %dª nota : ", i);
           scanf("%f", &nota);
        soma += nota;
    }
        
    media = soma / --i;


    printf("Média: %.2f\n", media);


    return 0;
}
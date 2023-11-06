#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int codProduto;

    printf ("Digite o código do produto: \n");
    printf ("1 - Camiseta, 2 - Calça, 3 - Sapato \n");
    scanf ("%d", &codProduto);

    switch (codProduto)
    {
    case 1:
        printf ("Camiseta Tech T-Shirt\n");
        printf ("R$ 159,00\n");
        break;
    case 2:
        printf ("Calça Jeans Slim\n");
        printf ("R$ 225,00\n");
        break;
    case 3:
        printf ("Sapato Casual\n");
        printf ("R$ 239,99\n");
        break;
    
    default:
        printf("Opção Inválida");
        break;
    }

    return 0;
}
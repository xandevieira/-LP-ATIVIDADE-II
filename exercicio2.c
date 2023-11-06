#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main()
{
    setlocale(LC_ALL, "portuguese");
    
    // Declarando as variaveis 
    
    float desconto;
    float totalASerPago;
    int valorCompra;
    int diaSemana;
    
    printf ("Verificando direito a desconto...\n");
    
    printf ("Digite o valor da compra: "); 
    scanf ("%d", &valorCompra);
    

    printf("Digite o dia(númerico) da Semana: \n");
    printf ("De 1 até 5 = Dia da Semana\t|\t De 6 até 7 Fim de Semana.\n");
    scanf("%d", &diaSemana);        

    if (valorCompra > 100) {
     if (diaSemana >= 1 && diaSemana <= 5) {
        desconto = valorCompra * 0.10;
     }
     else if (diaSemana >= 6 && diaSemana <= 7) { 
       desconto = valorCompra * 0.15;
    }
    }

    totalASerPago = valorCompra - desconto;
    
    printf ("Valor do produto: %d\n", valorCompra);
    printf ("Valor do desconto: %.2f\n", desconto);
    printf ("Total a ser pago: %.2f\n", totalASerPago);
    
    return 0;
}
/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    
    // Declarando as váriaveis 
    
    int temperatura;
    char clima[250];
    
    // Pedindo dados 
    
    printf("Qual a temperatura atual: ");
    scanf("%d", &temperatura);

    // Mostrando como código  funciona usando IF-ELSE e String 

    if (temperatura > 25) {
        strcpy (clima, "O Clima está ensolarado! \n");
    }
    else if (temperatura >= 15 && temperatura <= 25) {
        strcpy (clima, "O Clima está nublado! \n");
    }
    else {
        strcpy (clima, "O Clima está chuvoso! \n");
    }
    
    // Exibindo ao usuário os resultados :
    
    printf  ("Temperatura atual : %dº graus\n", temperatura);
    printf  ("Clima atual : %s\n", clima);
    
    
    return 0;
}

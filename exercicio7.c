#include <stdio.h>

int main() {
    int escolha;

    printf("Bem-vindo ao Jogo Senai! ATUALIZADO v1.0\n");
    printf("Menu:\n");
    printf("1\t| Novo jogo\n");
    printf("2\t| Carregar jogo\n");
    printf("3\t| Configurações\n");
    printf("Escolha uma opção: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("Iniciando jogo...\n");
            break;
        case 2:
            printf("Carregando jogo\n");
            break;
        case 3:
            printf("Abrindo as configurações\n");
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}

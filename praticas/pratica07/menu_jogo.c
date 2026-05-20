#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("\n===== MENU DO JOGO =====\n");
        printf("1 - Novo jogo\n");
        printf("2 - Continuar jogo\n");
        printf("3 - Ver pontuacao\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Iniciando novo jogo...\n");
                break;
            case 2:
                printf("Continuando o jogo...\n");
                break;
            case 3:
                printf("Exibindo pontuacao...\n");
                break;
            case 4:
                printf("Saindo do jogo... Até logo!\n");
                break;
            default:
                printf("Opcao invalida! Por favor, escolha uma opcao de 1 a 4.\n");
                break;
        }
    } while (opcao != 4);

    return 0;
}
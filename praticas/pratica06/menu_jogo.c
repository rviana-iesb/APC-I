#include <stdio.h>

int main() {
    int opcao;

    printf("--- MENU DE JOGO ---\n");
    printf("1 - Novo jogo\n");
    printf("2 - Continuar jogo\n");
    printf("3 - Ver pontuacao\n");
    printf("4 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Iniciando uma nova partida...\n");
            break;
        case 2:
            printf("Carregando o progresso salvo...\n");
            break;
        case 3:
            printf("Carregando o quadro de recordes...\n");
            break;
        case 4:
            printf("Encerrando o programa.\n");
            break;
        default:
            printf("Erro: Opcao invalida!\n");
            break;
    }

    return 0;
}
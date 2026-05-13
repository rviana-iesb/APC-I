#include <stdio.h>

int main() {
    int dia;

    printf("Digite um numero correspondente ao dia da semana (1 a 7): ");
    scanf("%d", &dia);

    switch (dia) {
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            printf("Dia util\n");
            break;
        case 1:
        case 7:
            printf("Final de semana\n");
            break;
        default:
            printf("Numero invalido. Insira um valor entre 1 e 7.\n");
            break;
    }

    return 0;
}
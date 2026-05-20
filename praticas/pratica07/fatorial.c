#include <stdio.h>

int main() {
    int n, fat = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Numero invalido! O valor deve ser positivo.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        fat *= i;
    }

    printf("O fatorial de %d e: %d\n", n, fat);

    return 0;
}
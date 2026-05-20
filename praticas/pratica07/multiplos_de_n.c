#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Nao existem multiplos de 0 no intervalo.\n");
        return 0;
    }

    printf("Multiplos de %d no intervalo de 1 a 100:\n", n);
    for (int i = 1; i <= 100; i++) {
        if (i % n == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
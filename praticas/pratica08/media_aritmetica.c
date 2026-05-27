#include <stdio.h>

#define MAX 100

int main() {
    int n;
    int vetor[MAX];
    float soma = 0.0f;

    printf("Quantos numeros voce deseja digitar? ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX) {
        printf("Quantidade invalida!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < n; i++) {
        soma += vetor[i];
    }

    float media = soma / n;

    printf("\nA media aritmetica e: %.2f\n", media);

    return 0;
}

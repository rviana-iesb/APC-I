#include <stdio.h>

int main() {
    float nota;

    do {
        printf("Digite uma nota entre 0 e 10: ");
        scanf("%f", &nota);

        if (nota < 0.0f || nota > 10.0f) {
            printf("Nota invalida! A nota deve estar entre 0 e 10.\n");
        }
    } while (nota < 0.0f || nota > 10.0f);

    printf("Nota valida lida: %.1f\n", nota);

    return 0;
}
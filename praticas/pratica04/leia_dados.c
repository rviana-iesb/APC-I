#include <stdio.h>

int main() {
    int idade;
    float altura, peso;
    char sexo;

    printf("=== Ficha Cadastral ===\n");

    printf("Idade: ");
    scanf("%d", &idade);

    printf("Altura (ex: 1.75): ");
    scanf("%f", &altura);

    printf("Sexo (M/F): ");
    scanf(" %c", &sexo); // O espaco antes de %c ignora espacos em branco/newlines

    printf("Peso (ex: 72.825): ");
    scanf("%f", &peso);

    printf("\n--- Dados Cadastrados ---\n");
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f m\n", altura);
    printf("Sexo: %c\n", sexo);
    printf("Peso: %.3f kg\n", peso);

    return 0;
}

#include <stdio.h>

int main() {
    int num, milhar, centena, dezena, unidade;

    printf("Digite um numero inteiro de quatro digitos: ");
    scanf("%d", &num);

    milhar = num / 1000;
    centena = (num % 1000) / 100;
    dezena = (num % 100) / 10;
    unidade = num % 10;

    printf("\n--- Decomposicao ---\n");
    printf("Milhar: %d\n", milhar);
    printf("Centena: %d\n", centena);
    printf("Dezena: %d\n", dezena);
    printf("Unidade: %d\n", unidade);

    return 0;
}

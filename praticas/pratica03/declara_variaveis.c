#include <stdio.h>

int main() {
    int idade;
    char sexo;
    float altura;
    float peso;

    idade = 25;
    sexo = 'M';
    altura = 1.75f;
    peso = 72.845f;

    printf("Idade: %d\n", idade);
    printf("Sexo: %c\n", sexo);
    printf("Altura: %.2f\n", altura);
    printf("Peso: %.3f\n", peso);

    return 0;
}

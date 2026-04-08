#include <stdio.h>
int main() {

    int idade;
    char sexo;
    float altura;
    float peso;

    idade = 25;
    sexo = 'F';
    altura = 1.65f;
    peso = 65.845f;

    printf("Dados da pessoa:\n");
    printf("Idade: %d anos\n", idade);
    printf("Sexo: %c\n", sexo);
    printf("Altura: %.2f metros\n", altura);
    printf("Peso: %.3f kg\n", peso);

    return 0;
}
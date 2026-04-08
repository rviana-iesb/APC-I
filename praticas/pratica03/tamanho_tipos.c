#include <stdio.h>

int main() {

    printf("Tamanho dos Tipos de Dados (em bytes):\n\n");
    printf("%-20s -> %zu byte(s)\n", "char", sizeof(char));
    printf("%-20s -> %zu byte(s)\n", "short int", sizeof(short));
    printf("%-20s -> %zu byte(s)\n", "int", sizeof(int));
    printf("%-20s -> %zu byte(s)\n", "long int", sizeof(long));
    printf("%-20s -> %zu byte(s)\n", "long long int", sizeof(long long));

    printf("\nTipos de Ponto Flutuante:\n");
    printf("%-20s -> %zu byte(s)\n", "float", sizeof(float));
    printf("%-20s -> %zu byte(s)\n", "double", sizeof(double));
    printf("%-20s -> %zu byte(s)\n", "long double", sizeof(long double));

    return 0;
}
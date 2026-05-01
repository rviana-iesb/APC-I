#include <stdio.h>

int main() {
    float n1, n2;

    printf("Digite dois numeros reais separados por espaco: ");
    scanf("%f %f", &n1, &n2);

    printf("\n--- Resultados das Operacoes ---\n");
    printf("Soma: %.2f\n", n1 + n2);
    printf("Subtracao: %.2f\n", n1 - n2);
    printf("Multiplicacao: %.2f\n", n1 * n2);
    
    if (n2 != 0) {
        printf("Divisao: %.2f\n", n1 / n2);
    } else {
        printf("Divisao: Impossivel dividir por zero.\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int num, original;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    original = num;

    // Incremento
    printf("\n--- Incremento ---\n");
    printf("Valor inicial: %d\n", original);
    
    printf("Incremento pre-fixado (++num): %d\n", ++num);
    printf("Valor de num apos incremento pre-fixado: %d\n", num);
    
    num = original; // Reseta para o valor original
    printf("Incremento pos-fixado (num++): %d\n", num++);
    printf("Valor de num apos incremento pos-fixado: %d\n", num);

    // Decremento
    printf("\n--- Decremento ---\n");
    printf("Valor inicial (reset): %d\n", original);
    
    num = original; // Reseta
    printf("Decremento pre-fixado (--num): %d\n", --num);
    printf("Valor de num apos decremento pre-fixado: %d\n", num);
    
    num = original; // Reseta
    printf("Decremento pos-fixado (num--): %d\n", num--);
    printf("Valor de num apos decremento pos-fixado: %d\n", num);

    return 0;
}

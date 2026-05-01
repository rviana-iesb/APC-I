#include <stdio.h>

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    printf("\nO caractere informado foi: %c\n", caractere);
    printf("O codigo ASCII correspondente e: %d\n", caractere);

    return 0;
}

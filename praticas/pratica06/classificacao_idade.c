#include <stdio.h>

int main() {
    int idade;

    printf("Informe a idade: ");
    scanf("%d", &idade);

    if (idade < 0) {
        printf("Idade invalida.\n");
    } else if (idade <= 12) {
        printf("Classificacao: Crianca\n");
    } else if (idade <= 17) {
        printf("Classificacao: Adolescente\n");
    } else if (idade <= 64) {
        printf("Classificacao: Adulto\n");
    } else {
        printf("Classificacao: Idoso\n");
    }

    return 0;
}
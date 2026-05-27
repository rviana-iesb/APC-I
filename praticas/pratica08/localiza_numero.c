#include <stdio.h>

#define TAM 10

int main() {
    int vetor[TAM];
    int numero, posicao = -1;

    printf("Digite %d numeros inteiros:\n", TAM);
    for (int i = 0; i < TAM; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite um numero para localizar: ");
    scanf("%d", &numero);

    for (int i = 0; i < TAM; i++) {
        if (vetor[i] == numero) {
            posicao = i;
            break;
        }
    }

    if (posicao != -1) {
        printf("\nO numero %d foi encontrado na posicao %d.\n", numero, posicao + 1);
    } else {
        printf("\nO numero %d nao foi encontrado no vetor.\n", numero);
    }

    return 0;
}

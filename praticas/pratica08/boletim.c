#include <stdio.h>

#define NUM_ALUNOS 5

int main() {
    float notas[NUM_ALUNOS][2];
    float media[NUM_ALUNOS];

    printf("=== Lançamento de Notas ===\n");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("  Nota 1: ");
        scanf("%f", &notas[i][0]);
        printf("  Nota 2: ");
        scanf("%f", &notas[i][1]);

        media[i] = (notas[i][0] + notas[i][1]) / 2.0f;
    }

    printf("\n====== Boletim de Notas ======\n");
    printf("Aluno |  Nota 1 |  Nota 2 |  Media\n");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("  %d   |  %5.1f  |  %5.1f  | %5.1f\n", i + 1, notas[i][0], notas[i][1], media[i]);
    }

    return 0;
}

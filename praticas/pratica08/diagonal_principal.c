#include <stdio.h>

#define LIN 3
#define COL 3

int main() {
    int matriz[LIN][COL];

    printf("Digite os elementos da matriz %dx%d:\n", LIN, COL);
    for (int i = 0; i < LIN; i++) {
        for (int j = 0; j < COL; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nDiagonal principal:\n");
    for (int i = 0; i < LIN; i++) {
        printf("Elemento [%d][%d] = %d\n", i, i, matriz[i][i]);
    }

    return 0;
}

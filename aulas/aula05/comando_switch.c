#include <stdio.h>\

int main() {
    int nota = 0;

    printf("Digite a nota do aluno (1-5): ");
    scanf("%i", &nota);


/*
    if (nota == 1 ) {
        printf("Gachou 1 Estrela\n");
    } else if (nota == 2) {
        printf("Gachou 2 Estrelas\n");
    } else if (nota == 3) {
        printf("Gachou 3 Estrelas\n");
    } else if (nota == 4) {
        printf("Gachou 4 Estrelas\n");
    } else if (nota == 5) {
        printf("Gachou 5 Estrelas\n");
    } else {
        printf("Nota inválida! Tente Novamente.\n");
    }
*/
switch (nota) {
    case 1:
        printf("Gachou 1 Estrela\n");
        break;
    case 2:
        printf("Gachou 2 Estrelas\n");
        break;
    case 3:
        printf("Gachou 3 Estrelas\n");
        break;
    case 4:
        printf("Gachou 4 Estrelas\n");  
        break;
    case 5:
        printf("Gachou 5 Estrelas\n");
        break;
    default:
        printf("Nota invalida! Tente Novamente.\n");
}

    return 0;
}
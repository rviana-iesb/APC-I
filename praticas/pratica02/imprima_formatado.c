#include <stdio.h>

int main() {

    char Produto1[] = "Camiseta";
    char Produto2[] = "Calca";
    char Produto3[] = "Meia Social";

    int quantidadeProduto1 = 2;
    int quantidadeProduto2 = 1;
    int quantidadeProduto3 = 3;

    float valorUnitarioProduto1 = 39.99;
    float valorUnitarioProduto2 = 89.90;
    float valorUnitarioProduto3 = 19.99;

    float valorTotal = (quantidadeProduto1 * valorUnitarioProduto1) + 
                       (quantidadeProduto2 * valorUnitarioProduto2) + 
                       (quantidadeProduto3 * valorUnitarioProduto3);

printf("==============================\n");
    printf("      N O T A    L E G A L\n");
    printf("==============================\n");

    printf("%-15s %s %10s\n", "Produto", "Qtd", "Valor Unit");

    printf("%-15s %03d %10.2f\n", Produto1, quantidadeProduto1, valorUnitarioProduto1);
    printf("%-15s %03d %10.2f\n", Produto2, quantidadeProduto2, valorUnitarioProduto2);
    printf("%-15s %03d %10.2f\n", Produto3, quantidadeProduto3, valorUnitarioProduto3);

    printf("==============================\n");

    printf("%-15s %14.2f\n", "Total", valorTotal);
    return 0;
}
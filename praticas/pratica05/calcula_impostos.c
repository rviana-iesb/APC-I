#include <stdio.h>

// Definicao das constantes
#define ICMS 0.17
#define ISS 0.05
#define PIS 0.0165

int main() {
    float valor_produto;
    float valor_icms, valor_iss, valor_pis;
    float preco_final;

    printf("Digite o valor do produto (R$): ");
    scanf("%f", &valor_produto);

    // Calculo individual dos impostos
    valor_icms = valor_produto * ICMS;
    valor_iss = valor_produto * ISS;
    valor_pis = valor_produto * PIS;

    // Calculo do preco final
    preco_final = valor_produto * (1 + ICMS + ISS + PIS);

    printf("\n--- Resultado ---\n");
    printf("Valor do ICMS (17%%): R$ %.2f\n", valor_icms);
    printf("Valor do ISS (5%%): R$ %.2f\n", valor_iss);
    printf("Valor do PIS (1.65%%): R$ %.2f\n", valor_pis);
    printf("Preco Final: R$ %.2f\n", preco_final);

    return 0;
}

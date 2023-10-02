#include <stdio.h>

int main() {
float valorBruto, desconto;

    // Solicita ao usuário que insira o valor bruto
    printf("Digite o valor bruto: ");
    scanf("%f", &valorBruto);

    // Calcula o desconto com base na escala
    if (valorBruto <= 100.00) {
        desconto = valorBruto * 0.01;  // 1% de desconto
    } else if (valorBruto <= 500.00) {
        desconto = valorBruto * 0.05;  // 5% de desconto
    } else {
        desconto = valorBruto * 0.10;  // 10% de desconto
    }

    // Exibe o valor do desconto
    printf("O valor do desconto e: %.2f\n", desconto);

  return 0;
}
#include <stdio.h>

int main() {

  float peso = 0.0f;
  float altura = 0.0f;

  printf("Entre com seu peso em kg: ");
  int leu_certo = scanf("%f", &peso);
  
  while(peso <= 0) {
    getchar();
    printf("Erro ao ler o peso. Tente novamente: ");
    leu_certo = scanf("%f", &peso);
  }
  
  printf("Entre com sua altura em m: ");
  leu_certo = scanf("%f", &altura);

  while(altura <= 0) {
    getchar();
    printf("Erro ao ler a altura. Tente novamente: ");
    leu_certo = scanf("%f", &altura);
  }

  float imc = peso / altura * altura;
  printf("Seu imc e %.1f\n", imc);
  
  return 0;
}
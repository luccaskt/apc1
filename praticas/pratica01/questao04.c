#include <stdio.h>

int main() {
  float preco_inicial = 100.0f;

  float valor_icms = preco_inicial * 0.17f;
  float valor_confins = preco_inicial * 0.076;
  float valor_pispasep = preco_inicial * 0.0165f;

  float preco_final = (1 + 0.17f + 0.076f + 0.0165) * preco_inicial;

  printf("O preco inicial e %f\n", preco_inicial);
  printf("O valor icms e %f\n", valor_icms);
  printf("O valor confins e %f\n", valor_confins);
  printf("O valor pis_pasep e %f\n", valor_pispasep);
  printf("O preco final  e %f\n", preco_final);

  return 0;
}
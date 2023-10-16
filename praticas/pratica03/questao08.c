#include <stdio.h>

int main() {

int numero = 0;
long int fatorial = 1;

  printf("Entre com um numero: ");
  int leu_certo = scanf("%i", &numero);

  for(int i = numero; i > 1; i--) {
    fatorial = fatorial * i;
  }

printf("O fatorial de %i eh %li\n", numero, fatorial);

  return 0;
}
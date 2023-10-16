#include <stdio.h>

int main() {

int numero = 0;

printf("Entre com um numero entre 1 e 10: ");
int leu_certo = scanf("%i", &numero);

for(int i = 0; i < 10; i++) {
  printf("%i x %i = %i\n", numero, i + 1, numero * (i+1));
}
  for(int i = 10; i > 0; i--) {
    printf("%i x %i = %i\n", numero, i , numero * i);
  }
  return 0;
}
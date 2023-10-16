#include <stdio.h>

int main() {
  int numero = 0;

  printf("Entre com um numero: ");
  int leu_certo =  scanf(" %i", &numero);

  int maior = numero;
  int menor = numero;

  for(int i = 0; i < 9; i++) {
    printf("Entre outro numero inteiro: ");
    leu_certo =  scanf(" %i", &numero);

    if(numero > maior) {
      maior = numero;
    }

  if(numero < menor) {
    menor = numero;
  }
  }

  
  printf("O maior numero eh %i e o menor eh %i\n", maior, menor);






    
  return 0;
}
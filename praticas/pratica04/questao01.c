#include <stdio.h>

int main() {
 int numeros[10] = {1, 5, 7, 8, 9, 4, 3, 2, 5, 6};

  int numero = 0;
  printf("Entre com um numero inteiro: ");
  int ok = scanf("%i", &numero);

  int posicao = -1;

  for(int i=0; i<10; i++) {
    if(numeros[i] == numero) {
      posicao = i;
      break;
   }
  }
 
if(posicao < 0) {
  printf("Nao achei o numero %i na matriz\n", numero);
} else {
  printf("Achei o numero %i na posiçao %i da matriz\n", numero, posicao);
}
  
  return 0;
}
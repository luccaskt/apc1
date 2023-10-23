#include <stdio.h>

int main() {

int numero = 0;
do{
  printf("Entre com um numero entre 1 e 10: ");
   int leu_certo = scanf("%i", &numero);
  getchar();
}  while (numero < 1 || numero > 10);
  
 int i = 10;
  while(i < 10) {
    printf("%i x %i = %i\n", numero, i + 1, numero * (i+1));
    i++;
  }


i = 10;
  do {
    printf("%i x %i = %i\n", numero, i + 1, numero * (i+1));
    i++;
  } while(i < 10);

  

  return 0;
}
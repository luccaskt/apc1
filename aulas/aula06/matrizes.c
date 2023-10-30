#include <stdio.h>

int main() {
 int numeros[10];

  numeros[0] = 10;
  numeros[1] = 1;
  numeros[2] = 2;
  numeros[3] = 5;
  numeros[4] = 7;
  numeros[5] = 0;
  numeros[6] = 2;
  numeros[7] = 8;
  numeros[8] = 6;
  numeros[9] = 3;

  for(int i = 0; i < 10; i++) {
    printf("%d, ", numeros[i]);
  }

  printf("\n");


 return 0;
}
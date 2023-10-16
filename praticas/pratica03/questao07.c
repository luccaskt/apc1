#include <stdio.h>

int main() {

int n = 10, i, numero1 = 1, numero2 = 1, proxTermo;
  
printf("Sequencia de Fibonacci:\n", n);
  
for (i = 1; i <= n; ++i) {
  printf("%d, ", numero1);
  proxTermo = numero1 + numero2;
  numero1 = numero2;
  numero2 = proxTermo;
}
 return 0;
}
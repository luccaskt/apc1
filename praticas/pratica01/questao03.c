#include <stdio.h>
#define PI 3.1416f

int main() {
  int raio_pizza = 10;

   float perimetro_pizza = 2 * PI * raio_pizza;
  
  printf("O perimetro é %f cm\n", perimetro_pizza);

  return 0;
}
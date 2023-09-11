//Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).


#include <stdio.h>
#include <math.h>

int main() {
  
int coeficiente_a = 2;
int coeficiente_b = 1;
int coeficiente_c = -3;

double delta = pow(coeficiente_b, 2) - 4 * coeficiente_a * coeficiente_c;

double raiz_x1 = (-coeficiente_b + sqrt(delta)) / 2 * coeficiente_a;

double raiz_x2 = (-coeficiente_b - sqrt(delta)) / 2 * coeficiente_a;

printf("As raizes da equaçao %dx² %dx %d sao x1 = %f e x2 = %f\n", coeficiente_a, coeficiente_b, coeficiente_c, raiz_x1, raiz_x2);

  return 0;
}
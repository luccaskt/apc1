#include <stdio.h>

int main() {

// + - x/ => + - */

  int soma = 10 + 2;
  int difirenca = soma - 2;
  int multiplicacao = 10 * soma;
  int divisao = (int) soma / 2.0f;
  int resto = soma % 2;

  printf("soma = %i\n", soma);
  printf("soma = %i\n", soma++);
  printf("soma = %i\n", soma);
  printf("soma = %i\n", ++soma);
  
soma--;
--soma;

  double duplo = 270.987654;
  float flutuante = (float)duplo;
  int inteiro = (int)flutuante;
  char caractere = (char)inteiro;

   printf("Conversão explícita\n");
    printf("o double %f convertido em float é %f\n", duplo, flutuante);
    printf("o float %f convertido em int é %d\n", flutuante, inteiro);
    printf("o int %d convertido em char é %d\n", inteiro, caractere);
  
  return 0;
}
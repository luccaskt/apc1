#include <stdio.h>

#define DOMINGO 1
#define SEGUNDA 2
#define TERCA 3
#define QUARTA 4
#define QUINTA 5
#define SEXTA 6
#define SABADO 7

#define MASCULINO 1
#define FEMININO 2

#define ATIVO 1
#define INATIVO 0

int main() {
enum dias_da_semana_e {dom=1, seg, ter, qua, qui, sex, sab};

int dia_da_semana;

printf("Entre com o dia da semana (1 a 7): ");
int ok = scanf("%i", &dia_da_semana);

switch(dia_da_semana) {
  case seg:
  case ter:
  case qua:
  case qui:
  case sex: printf("Dia util\n"); break;
  case sab:
  case dom: printf("Dia nao util\n"); break;
  default: printf( "Dia invalido\n"); break;
}


  
return 0;
}
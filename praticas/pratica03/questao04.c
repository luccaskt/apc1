#include <stdio.h>

int main() {
char tecla = 0;

  printf("Pressione uma tecla :");
  scanf("%c", &tecla);

  if (tecla >= 48 && tecla <=57) {
    printf("Voce pressionou um digito.\n");
  } else if ((tecla >= 65 && tecla <=90) || (tecla>=97  && tecla<=122)) {
    printf("Voce pressionou uma letra.\n");
  } else {
    printf("Voce pressionou um caracter especial.\n");
  }

  // switch(tecla) {
  //   case 48:
  //   case 49:
  //   case 50:
  //   case 51:
  //   case 52:
  //   case 53:
  //   case 54:
  //   case 55:
  //   case 56:
  //   case 57: printf("Voce pressionou um digito.\n"); break;    
  // }


  return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main () {
   char opcao = 0;
   float saldo = 0.0f;
  
  while(1) {
  int ok = system("clear");
  printf("MENU PRINCIPAL\n");
  printf("1 - consultar saldo\n");
  printf("2 - fazer recarga\n");
  printf("3 - listar recargas\n");
  printf("0 - sair\n");
  printf("Sua escolha => ");
  ok = scanf("%c", &opcao);
  getchar();

  switch(opcao) {
    case '1':
      printf("Seu saldo é %.2f\n", saldo);
      
      break;
    case '2': printf("escolha um valor de recarga: ");
      break;
    case '3': printf("voce nao tem recados\n");
      break;
    case '0': break;
    default:
      printf("Opcao invalida!\n"); break;
  }

    if(opcao == '0') break;

    printf("Pressione enter para continuar...");
    getchar();
}




  return 0;
}
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
      ok = system("clear");
      printf("Consulta Saldo\n");
      printf("Seu saldo é %.2f\n", saldo);
      printf("Pressione enter para continuar...");
      getchar();
      break;
    
    case '2':{
      char valor = 0;
      while (valor != '0') {
      ok = system( "clear" );
      printf("Fazer recarga: ");
      printf("1 - R$ 10,00\n");
      printf("2 - R$ 20,00\n");
      printf("5 - R$ 50,00\n");
      printf("Escolha um valor de recarga ou digite 0 para continuar : ");
      ok = scanf ("%c", &valor);
      getchar();
        
      switch(valor) {
        case '1':saldo = saldo + 10.0f; break;
        case '2':saldo = saldo + 20.0f; break;
        case '5':saldo = saldo + 50.0f; break;
        case '0':break;
        default:
        printf("Opção inválido\n");
        printf("Pressione enter para continuar...");
        getchar();
        break;
      }
        if (valor == '1' || valor == '2' || valor == '5') {
          printf("\e[0;32mRecarga realizada com sucesso!\e[0m\n");
          printf("Pressione ENTER para continuar...");
          getchar();
      }
      }
      break;
    }
    case '3':
      ok = system("clear:");
      printf("LISTAR RECADOS\n");
      printf("voce nao tem recados\n");
      printf("Pressione ENTER para continuar...");
      getchar();
      break;
    case '0': break;
    default:
      printf("\e[0;31mOpção inválida!\e[0m\n");
      printf("Pressione ENTER para continuar...");
      getchar();
      break;
  }

    if(opcao == '0') break;

    
}




  return 0;
}
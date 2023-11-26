#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct JogoDaForca {
char palavra[20];
char palavraAdivinhada[20];
int tentativas;
};

int main() {
    
struct JogoDaForca jogo;
strcpy(jogo.palavra, "CELULAR");
memset(jogo.palavraAdivinhada, '_', sizeof(jogo.palavraAdivinhada)); 
jogo.tentativas = 15; 

    
char letra;
int opcao;

do {
        
printf("JOGO DA FORCA\n");
printf("1. Tentar uma letra\n");
printf("2. Sair\n");
printf("Escolha a opcao: ");
scanf("%d", &opcao);


switch (opcao) {
case 1:
printf("\nPalavra: ");
for (int i = 0; i < strlen(jogo.palavraAdivinhada); i++) {
printf("%c ", jogo.palavraAdivinhada[i]);
}

printf("\nTentativas restantes: %d\n", jogo.tentativas);

               
printf("Digite uma letra: ");
scanf(" %c", &letra);

                
int letraEncontrada = 0;
for (int i = 0; i < strlen(jogo.palavra); i++) {
if (jogo.palavra[i] == letra) {
jogo.palavraAdivinhada[i] = letra;
letraEncontrada = 1;
}
}


if (!letraEncontrada) {
jogo.tentativas--;
}

                
if (strcmp(jogo.palavra, jogo.palavraAdivinhada) == 0) {
printf("Parabens! Voce ganhou!\n");
opcao = 2; 
}


if (jogo.tentativas == 0) {
printf("Voce perdeu! A palavra era: %s\n", jogo.palavra);
opcao = 2; 
}

break;

case 2:
 printf("Jogo encerrado. Ate a proxima!\n");              
  break;

default:
printf("Opcao invalida. Tente novamente.\n");
}

} 
  while (opcao != 2);

 return 0;
}
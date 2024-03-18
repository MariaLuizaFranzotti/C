/*Escrever um programa que leia várias mensagens (uma por uma) e exiba cada
mensagem com um espaço em branco entre todos os caracteres. Pare o programa
quando for digitada a palavra “FIM”.*/

#include <stdio.h>
#include <string.h>

int main() {
  char mensagem[100];
  int i;

  do {
    printf("\nDigite uma mensagem: ");
    scanf("%s", mensagem);

    int length = strlen(mensagem);

    for (i = 0; i < length; i++) {
      if (strcmp(mensagem, "FIM") == 0) {
        break;
      } else {
        printf("%c ", mensagem[i]);
      }
    }

  } while (strcmp(mensagem, "FIM") != 0);
  printf("Programa Finalizado");

  return 0;
}
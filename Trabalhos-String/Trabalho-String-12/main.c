/* Escrever um programa que leia uma mensagem e exiba a mesma e outra mensagem alterada através
  da substituição da original por uma com a primeira letra da mensagem e suas ocorrências
  substituídas pelo caractere ꞌ-ꞌ: Exemplo: ABCADAEAFGAH – Exibe: -BC-D-E-FG-H */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 100

int main () {

  char mensagem[N];
  int i;

  printf("Digite uma mensagem: ");
  fgets(mensagem,sizeof(mensagem),stdin);

  printf("A mensagem inserida foi: %s",mensagem);

  int length = strlen(mensagem);

  if (length > 0){
    char primeiraLetra = mensagem[0];

    for ( i = 0; i < length; i++){
      if (mensagem[i]== primeiraLetra) {
        mensagem[i] = '-';
      }
    }
  }

  printf("Mensagem modificada: %s",mensagem);

  return 0;
}
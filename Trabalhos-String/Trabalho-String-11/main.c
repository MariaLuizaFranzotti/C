/*Escrever um programa em C que leia uma mensagem e exiba a freqüência (número de ocorrência) de
cada caractere da mensagem. Exemplo de saída: "UVV - CIENCIA DA COMPUTACAO" ('U': 2,
'V': 2, ' ': 4, '-': 1, 'C': 4, 'I': 2, 'E': 1, 'N': 1, 'A': 4, 'D': 1, 'O': 2, 'M': 1, 'P': 1, 'U': 1, 'T': 1).*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {

  char mensagem[100];
  int i;

  printf("Digite uma mensagem:");
  fgets(mensagem,sizeof(mensagem),stdin);

  int contagem[128] = {0}; //inicializa um array de contagem para todos os caracteres

  for (i = 0; mensagem[i] != '\0'; i++){
    char caractere = mensagem[i];
      contagem[caractere]++;  //incremneta a contagem para o caractere

  }

  for (i = 0; i < 128; i++){ 
    if (contagem[i]>0){
      printf("'%c': %d, ", i, contagem[i]); 
    }
  }

  printf("\b\b."); //remover vírgula final

  return 0;
}
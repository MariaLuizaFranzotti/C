/*Escrever um programa em C que leia um nome completo (com nomes e sobrenomes) e
exiba na tela uma string com as iniciais de cada palavra com um ponto entre
elas. Não exibir as preposições “da”, “de”, “di”, “do”. Exemplo (Nome completo):
Fulano Beltrano Cicrano de Tal – Abreviado: F.B.C.T.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {

  char nome_completo[100];

  printf("Digite seu nome completo: ");
  fgets(nome_completo,sizeof(nome_completo),stdin);

  char *token = strtok(nome_completo," "); //dividir o nome em palavras

  while (token != NULL){

    int comprimento = strlen(token);
    if (comprimento == 2){ //verifica se a palavra tem apenas 2 letras
      token = strtok(NULL," "); //vai para a próxima palavra
      continue;
    }
    else{
      if (islower(token[0])){ //verifica se está em minúsculo
        token[0] = toupper(token[0]); //converte para maiúsculo
        continue;
      }
      else{
        printf("%c.",token[0]);
        token = strtok(NULL," ");
      }
    }
  }

  printf("\n");

  return 0;
}
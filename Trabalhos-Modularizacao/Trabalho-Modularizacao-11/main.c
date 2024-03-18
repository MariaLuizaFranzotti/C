/*Crie uma função e seu protótipo que receba como argumento um símbolo (char) e retorne a classe deste símbolo, conforme a tabela a seguir:

Vogal Minúscula 1
Vogal Maiúscula 2
Consoante Minúscula 3
Consoante Maiúscula 4
Símbolo Especial 5

Na main, use a função em 100 símbolos (um de cada vez) lidos do usuário e exiba sua Classificação.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int classificar (char caractere);
void exibirClassificacao(int resultado);

int classificar(char caractere)
{

  if (islower(caractere)){
    if (caractere == 'a'|| caractere == 'e'|| caractere == 'i'||caractere == 'o'||caractere == 'u'){
        return 1; // vogal minúscula
    }
    else{
        return 3; //consoante minúscula
    }
  }
  else if (isupper(caractere)){
        if (caractere == 'A'|| caractere == 'E'|| caractere == 'I'||caractere == 'O'||caractere == 'U'){
            return 2; //vogal maiúscula
        }
        else{
            return 4; //consoante maiúscula
        }
  }

  else{
    return 5; //símbolo especial
  }
}

int main()
{

  setlocale(LC_ALL,"Portuguese");
  char caractere;
  int  i;


  for (i = 0; i< 100; i++){
    printf("\nDigite um caractere: ");
    scanf(" %c",&caractere);

    int resultado = classificar(caractere);
    exibirClassificacao(resultado);

  }

  return 0;
}

void exibirClassificacao (int resultado){

  switch (resultado)
  {
  case 1:
    printf("Vogal minúscula");
    break;
  case 2:
    printf("Vogal maiúscula");
    break;
  case 3:
    printf("consoante minúscula");
    break;
  case 4:
    printf("consoante maiúscula");
    break;
  case 5:
    printf("símbolo especial");
    break;
  default:
    printf("caractere inválido");
  }
}

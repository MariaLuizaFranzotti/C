#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define TAM 100

int main(){
    char palavra[TAM];
    char palavraNova[TAM];
    int i;

    do{
      char palavra[TAM];
      char palavraNova[TAM];
      printf("\ndigite uma palavra ou 'SAIR' para finalizar: ");
      scanf("%s",palavra);

        if (strcmp(palavra,"SAIR")!= 0){
            palavraNova[0] = '\0'; //inicializar com a palavra vazia                                              (evitar de ter lixo)
          
            for (i = 0; i<strlen(palavra);i++){
                palavraNova[i *2] = palavra[i];
                palavraNova[i *2 + 1] = ' ';

              }

            palavraNova[i * 2] = '\0';
            printf("\nPalavra: %s", palavra);
            printf("\nPalavra Nova: %s\n", palavraNova);
      }   
      else if (strcmp(palavra,"SAIR")==0){break;}
        

    }while (strcmp(palavra,"SAIR")!= 0);
  
    return 0;
}




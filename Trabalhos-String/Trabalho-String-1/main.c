//Escrever um programa em C que leia uma string e exiba a string original e ao contrário na tela.

#include <stdio.h>
#include <string.h>

int main () {
   char original[100];
   int i;

    printf("Digite uma palavra: ");
    scanf("%s",original);

    printf("Palavra original: %s\n",original);

    int length = strlen(original);

    printf("Palavra invertida: ");
    for (i = length -1 ; i>= 0;i--){
        printf("%c",original[i]);
    }



    return 0;
}

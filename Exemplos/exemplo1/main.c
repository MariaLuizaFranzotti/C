#include <stdio.h>
#include <string.h>
#define SIZE 4

int main(void) {
  char palavra[SIZE];

  do {
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    if (strlen(palavra) < 5) {
      printf("A palavra tem menos de 5 caracteres. Saindo do programa.\n");
      break;
    }

    printf("A palavra '%s' tem %d caracteres.\n", palavra, (int)strlen(palavra));
  } while (strcmp(palavra, "sair") != 0);

  return 0;
}

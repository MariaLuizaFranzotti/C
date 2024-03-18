#include <stdio.h>
#include <string.h>

//protótipo (tem retorno float)
float IMC(float *massa, float *altura, char sexo);

int main() {
  int opcao;
  float massa, altura;
  char sexo;

  printf("===MENU===\n");
  printf("[1]-Inserir Aluno\n[0]-Sair do programa\n");
  scanf("%d", &opcao);

  while (opcao != 0) {
    if (opcao != 1) {
      printf("numero invalido");
    } 
    else {
      printf("digite sua massa: ");
      scanf("%f", &massa);
      printf("digite sua altura: ");
      scanf("%f", &altura);
      printf("digite seu sexo: ");
      scanf(" %c", &sexo);

      float result = IMC(&massa, &altura, sexo);
      printf("IMC: %.2f\n", result);
    }

    printf("\n===MENU===\n");
    printf("[1]-Inserir Aluno\n[0]-Sair do programa\n");
    scanf("Sua opcao: %d", &opcao);
  }

  return 0;
}

float IMC(float *massa, float *altura, char sexo) {
  float alturaQuadrado;

  if (sexo == 'F') {
    alturaQuadrado = (*altura) * (*altura);
    return 1.03 * ((*massa) / alturaQuadrado);
  } else if (sexo == 'M') {
    alturaQuadrado = (*altura) * (*altura);
    return 0.97 * ((*massa) / alturaQuadrado);
  }

  return -1;
}

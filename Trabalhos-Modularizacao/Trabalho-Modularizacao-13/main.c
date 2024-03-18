/*Crie somente uma (1) função e seu protótipo, conforme para a descrição dos exercícios: 6 acima.*/

#include <locale.h>
#include <math.h>
#include <stdio.h>

void arranjoCombinacao(int N, int P, int F, float *ARRANJO, float *COMBINACAO);

int main() {
  setlocale(LC_ALL, "Portuguese");
  int opcao;
  float N, P, F, ARRANJO, COMBINACAO;

  do {
    printf("\n====MENU DE OPÇÕES====");
    printf("\n[1]- CALCULAR\n[0]- SAIR DO PROGRAMA");
    printf("\nSUA OPÇÃO: ");
    scanf("%d", &opcao);

    if (opcao == 0) {
      printf("FIM");
    } else if (opcao != 1) {
      printf("Numero invalido. Tente novamente\n");

    } else {
      printf("N (N>0): ");
      scanf("%f", &N);
      printf("P (0<P<=N): ");
      scanf("%f", &P);
      if (N < P || P < 0 || N < 0) {
        printf("Numero invalido. Tente novamente\n");
      } else {

        arranjoCombinacao(N, P, F, &ARRANJO, &COMBINACAO);
        printf("%.2f\n", ARRANJO);
        printf("%.2f\n", COMBINACAO);
      }
    }

  } while (opcao != 0);

  return 0;
}

void arranjoCombinacao(int N, int P, int F, float *ARRANJO, float *COMBINACAO) {
  int i, NFATOREADO = 1, NMENOSPFATOREADO = 1, NMENOSP, PFATOREADO = 1;

  for (i = N; i > 1; i--) {
    NFATOREADO *= i;
  }

  for (i = NMENOSP; i > 1; i--) {
    NMENOSPFATOREADO *= i;
  }

  for (i = P; i > 1; i--) {
    PFATOREADO *= i;
  }

  NMENOSP = N - P;

  *ARRANJO = NFATOREADO / NMENOSPFATOREADO;

  *COMBINACAO = *ARRANJO / PFATOREADO;
}

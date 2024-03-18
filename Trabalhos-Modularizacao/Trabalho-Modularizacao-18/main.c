/* Crie uma função + protótipo que receba como argumento um valor real do Tempo T (Horas) e converta
  em: Horas + Minutos + Segundos. Na main, use a função 50 vezes para valores de T lidos do usuário.
  Exemplo: T (12.47 Horas) = 12 Hora(s) + 28 Minuto(s) + 12 Segundo(s). ( Dica: Use a Função: modff ) */

#include <stdio.h>
#include <math.h>

void converterTempo(float tempo, int *horas, int *minutos, int *segundos);

int main(){
  
  int i;
  float tempo;

  for (i = 0; i < 50; i++){

    printf("\nDigite um valor real da hora: ");
    scanf("%f",&tempo);

    int horas,minutos,segundos;
    converterTempo(tempo,&horas,&minutos,&segundos);
    printf("T (%.2f Horas) = %d Hora(s) + %d Minuto(s) + %d Segundo(s)\n", tempo, horas, 
    minutos, segundos);

  }

  return 0;
}

void converterTempo(float tempo, int *horas, int *minutos, int *segundos){

  float parteFracionaria;

  *horas = (int)tempo;

  parteFracionaria = modff((tempo - *horas) * 60, (float * )minutos);
  *segundos = (int)(parteFracionaria * 60);

  *minutos = ((tempo - *horas)*60)-parteFracionaria;

}
/* Criar uma função que receba um número inteiro qualquer Positivo e retorne: logN π se N for PRIMO
ou retorne: logπ N se N for NÃO for PRIMO. Dica Matemática: logB A =
logC A
logC B */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

// função para verificar se o número é primo
int numPrimo(int numero)
{
  int i = 2;

  if (numero <= 1)
  {
    return 0; // números menores ou iguais a 1 não são primos
  }

  // verificar se o número é divisível entre 2 e a raiz quadrada
  if (numero % i == 0)
  {
    return 0; // caso seja divisível, retorna 0, indicando que não é primo
  }
  return 1; // caso não encontre divisores, retorna 1, o número é primo
}

// função para calcular o log
double calcularLog(int numero)
{

  if (numPrimo(numero))
  {
    return log(3.14) / log(numero);
  }
  else
  {
    return log(numero) / log(3.14);
  }
}

int main()
{

  int numeroExemplo;
  printf("Digite um número: ");
  scanf("%d",&numeroExemplo);

  // chama a função com o número de exemplo
  double resultado = calcularLog(numeroExemplo);

  printf("Para o número %d, o resultado é: %lf\n", numeroExemplo, resultado);

  return 0;
}
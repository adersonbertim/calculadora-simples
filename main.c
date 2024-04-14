#include <stdio.h>
#include <stdlib.h>

// Função main do codigo!
// Seguido de duas variaveis uma do tipo inteiro; outra do tipo float;
int main() {
  int escolha;
  float n1, n2, resultado;

  // função printf, para a 'escolha' da operação
  printf("Escolha sua operação! \n");
  printf("1. Soma\n");
  printf("2. Subtração\n");
  printf("3. Multiplicação\n");
  printf("4. Divisão\n");
  scanf("%d", &escolha);

  // função printf para coleta dos numeros
  printf("Digite os numeros para essa operação: ");
  scanf("%f %f", &n1, &n2);

  // estrutura switch-case como um 'escolha' assim caso 1 para soma, pega os
  // numero e armazena na variavel resultado depois imprime na tela.
  switch (escolha) {
  case 1:
    resultado = n1 + n2;
    printf("Resultado: %.2f \n", resultado);
    break;
  case 2:
    resultado = n1 - n2;
    printf("Resultado: %.2f \n", resultado);
    break;
  case 3:
    resultado = n1 + n2;
    printf("Resultado: %.2f \n", resultado);
    break;
  case 4:
    if (n2 != 0) {
      resultado = n1 / n2;
      printf("Resultado: %.2f \n", resultado);
    } else {
      printf("Erro: Por favor coloque um numero diferente de zero!");
    }
    break;
  default:
    printf("Escolha invalida!\n");
    break;
  };
  // a ultima estrutura o case 4, como é divisção o numero tem que ser diferente
  // de 0. após a verificação através de um laço if-else caso for diferente ele
  // realiza a operação, caso contrario é mostrada uma mensagem de erro
  return 0;
};

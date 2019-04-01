#include <stdio.h>
#include <stdlib.h>

int main(){

  //Variavel qualquer armazenando um valor
  int valor = 20;
  //Variavel do tipo ponteiro
  int *ponteiro;
  //Variavel ponteiro recebe o ENDERECO DE MEMORIA da minha variavel valor
  ponteiro = &valor;

  //  Impressao de Teste
  printf("Conteudo da variavel valor: %d\n",valor);
  printf("Endereco da variavel valor : %x\n",&valor);
  printf("Conteudo da variavel ponteiro : %x \n",ponteiro);

  //Atualizacao do valor do meu ponteiro para a variavel valor
  *ponteiro = 35;

  //Valor atualizado da minha variavel valor
  printf("\n--- VALORES APOS A ATUALIZACAO DA VARIAVEL TIPO PONTEIRO ---\n\n");
  printf("Conteudo da variavel valor: %d\n",valor);
  printf("Endereco da variavel valor : %x\n",&valor);
  printf("Conteudo da variavel ponteiro : %x \n",ponteiro);


  return 0;
}

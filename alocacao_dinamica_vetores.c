#include <stdio.h>
#include <stdlib.h>

int* alocaVetor(int tamanho){

  //E criado um ponteiro auxiliar
  int *aux;

  //Alocao Dinamica de memoria
  aux = (int*) malloc(tamanho * sizeof(int));

  //Retorna o ponteiro que aponta para a primeira posicao de memoria do vetor alocado
  return aux;
}


int main(){

  //Definindo Variaveis
  int *vetor , tamanho , cont;

  //Lendo o tamanho do vetor pelo usuario
  printf("Digite um tamanho para o vetor : ");
  scanf("%d",&tamanho);

  //Ponteiro recebe o endereco de memoria que foi alocado para o vetor
  vetor = alocaVetor(tamanho);

  //Coloca os valores no vetor
  for (size_t cont = 0; cont < tamanho; cont++) {
    vetor[cont] = 90;
  }

  //Imprime o vetor
  for (size_t cont = 0 ; cont < tamanho; cont++)  {
    printf("%d\n",vetor[cont]);
  }

  free(vetor);
  //RETORNO DA FUNCAO
  return 0;
}

#include <stdio.h>
#include <stdlib.h>

void mostraSucessor(int numero){
  printf("\nO SUCESSOR DE %d eh %d\n",numero , numero + 1 );
}
int retornaAntecessesor (int numero){
  return numero - 1;
}

int main(){

  //Definicao e Leitura do valor pelo usuario
  int valor;
  printf("DIGITE UM VALOR : ");
  scanf("%d",&valor);

  //Chamada da funcao 1
  mostraSucessor(valor);

  //Exibe o valor que a funcao retornaAntecessesor mostra
  printf("\nO ANTECESSOR DE %d eh %d\n", valor , retornaAntecessesor(valor));

  //REtorno da Funcao Principal
  return 0;
}

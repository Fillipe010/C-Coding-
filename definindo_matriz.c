//Declaracao de Bibliotecas
#include <stdlib.h>
#include <stdio.h>

//Funcao Principal
int main(){

  int Matriz[3][3] , i , j;

  printf("\nDigite o Valor para os elementos da matriz\n\n");

// -- Laco que le do usuario os valores a serem atribuidos a matriz -- //
  for (i = 0; i <=2; i++) {
    for (j = 0; j <=2; j++) {
      printf("\nElemento[%d][%d] = ",i,j);
      scanf("%d", &Matriz[i][j]);
    }
  }
// ------------------------------------------------------------------- //

printf("\n\n********** Saida de Dados ********** \n\n ");

// -- Laco que imprime os valores atribuidos a minha matriz -- //
  for (i = 0; i <=2; i++) {
    for (size_t j = 0; j <=2; j++) {
      printf("\nElementos[%d][%d] = %d\n",i,j,Matriz[i][j]);
    }
  }
// ---------------------------------------------------------- //

  return 0;
}

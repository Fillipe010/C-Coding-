#include <stdio.h>
#include <stdlib.h>

int main(){

  int linhas = 3 , colunas  = 3, i , j;
  int **matriz;

  //Lendo o tamanho pelo usuario
  printf("Digite o numero de linhas : "); scanf("%d", &linhas);
  printf("Digite o numero de colunas : ");  scanf("%d",&colunas);


  //Alocando memoria para as linhas
  matriz = (int **) malloc(linhas * sizeof(int *));

  //Alocando memoria para as colunas de cada linhas
  for (size_t i = 0; i < linhas; i++) {
    matriz[i] = (int *) malloc(colunas * sizeof(int));
  }

  for (size_t i = 0; i < linhas; i++) {
    for (size_t j = 0; j < colunas; j++) {
      matriz[i][j] = i;
      printf("%d", matriz[i][j]);
    }
    printf("\n");
  }
  //Libera a memoria
  free(matriz);



  return 0;
}

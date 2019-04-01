//Libraries
#include <stdio.h>
#include <stdlib.h>

//MAIN FUNCTION
int main(){

  //Inicializing my Vector
  int Vet[5] = {1,3,4,5,6};
  //COUNTER
  int i;

  printf("THESE ARE THE NUMBERS:\n");

  for (i = 0; i <= 4; i++) {
    printf("notas[%d] = %d\n",i,Vet[i] );
  }

  return 0;
}

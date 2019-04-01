//Libraries
#include <stdio.h>
#include <stdlib.h>

//Main Function
int main(){

  float vet[2] = {10 , 8};
  int i;
  float media;

  printf("A Notas sao iguais a :\n");

  //For Loop walks trough my Vector
  for (i = 0; i <= 1 ; i++) {

    printf("nota[%d] = %1.f\n",i,vet[i]);
    media = ( vet[i] + vet[i - 1] )  / 2;
  }

  printf("A MEDIA FINAL EM ESTRUTURA DE DADOS Eh : %1.f pontos \n",media);

  return 0;
}

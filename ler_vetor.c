//Libraries
#include <stdlib.h>
#include <stdio.h>

//Main Function
int main(){

  int Vet[4];
  int i;

  //Loop that walks trough my scanf Function
  for ( i = 0; i <= 3; i++) {
    printf("\nDigite um valor : ");
    scanf("%d",&Vet[i]);
    printf("\nVetor[%d] = %d\n",i,Vet[i]);
    
  }

  return 0;
}

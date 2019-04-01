/* FUNCTION THAT SHOWS THE VET VALUES AND AFTER THAT CHANGE THEM */

#include <stdio.h>
#include <stdlib.h>

void printVector(int *vector , int size){

  int counter;
  printf("Before Change\n");
  for (size_t counter = 0; counter < size ; counter++) {
      printf("[%d]",vector[counter]);
  }
}
/*---------------------------------------------*/
void modifyVector(int *vector , int size){

  int counter;

  printf("\n\nAfter the Change\n");

  for (size_t counter = 0; counter < size; counter++) {
      vector[counter] = vector[counter] + 1;
      printf("[%d]",vector[counter]);
  }
}

//Main Function
int main(){

  int vet[4] = {1,2,3,4};

  printVector(vet,4);
  modifyVector(vet,4);

  return 0;
}

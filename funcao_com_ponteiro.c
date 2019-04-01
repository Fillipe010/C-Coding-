#include <stdio.h>
#include <stdlib.h>

void plus_10(int *pointer) {
  *pointer = *pointer + 10;
}

int main(){

  int value = 5;

  printf("BEFORE UPDATE : %d \n",value);

  plus_10(&value);

  printf("AFTER UPDATE : %d \n",value);

  return 0;
}

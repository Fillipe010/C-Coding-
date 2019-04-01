//libraries
#include <stdio.h>
#include <stdlib.h>

void viewSUM (float number1 , float number2){
  printf("The Sum between %1.f and %1.f is equal to : %1.f \n",number1 , number2 , number1 + number2 );
}
void viewMultiplication (float number1 , float number2){
  printf("The Multiplication between %1.f and %1.f is equal to : %1.f \n" ,number1, number2 ,number1 * number2 );
}
void viewSubtraction (float number1 , float number2){
  printf("The Sub between %1.f and %1.f is equal to : %1.f \n", number1, number2, number1 - number2 );
}
void viewDivision (float number1 , float number2){
  printf("The Division between %1.f and %1.f is equal to : %1.f \n", number1 , number2, number1 / number2);
}

float main(){

  float value_1 , value_2;
  printf("SET VALUE 1: "); scanf("%f",&value_1);
  printf("\nSET VALUE 2: "); scanf("%f",&value_2);

  //Calling Functions
  viewSUM(value_1 , value_2);
  viewMultiplication(value_1 , value_2);
  viewSubtraction(value_1 , value_2);
  viewDivision(value_1 , value_2);


  return 0;
}

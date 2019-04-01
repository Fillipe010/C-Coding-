//Libraries Used
#include <stdio.h>
#include <stdlib.h>

//Main Function
int main(){

  //variables
  int value_1 , value_2;
  int counter; //Iteration Variable (for loop)
  int equals;

  //Print the Code Title
  printf("CHOOSE 2 VALUES FOR THE FURTHER OPERATION:\n");

  //Read the User Values
  printf("\nValue 1: ");  scanf("%d",&value_1);
  printf("Value 2: ");    scanf("%d",&value_2);

  //Example of a For Loop application
  for (counter = 1  ; counter <= 5; counter++)
  {
      value_1++;
      value_2 = value_1 + 2;

      printf("\nValue 1 Progress --%d-- \n", value_1 );
      printf("\nValue 2 Progress --%d-- \n ",value_2 );
  }

  //Example of how to use if statement
  value_1 = value_1 + 2  ;
  if (value_1 != value_2){
      printf("\nThese Numbers Are Different");
  }else if (value_1 > 10) {
      printf("\nThis number is out of the loop");
  }else{
      printf("\nThey have the same values");
  }

  //Example of How to Use the While statement
  while (counter <= 15){
      value_2 = value_1 + 2;
      counter++;
    }
    printf("\nThe Value 2 is equal to : %d \n",value_2);

    //Example of the Function DO - WHILE
    do {
      value_1++;

    } while(counter <=20);

    //CODE END AND CLOSE MAIN FUNCTION 
}

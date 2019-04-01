//Declaracao de Variaveis
#include <stdio.h>
#include <stdlib.h>

//Funcao Principal
int main(){

  //Declaracao de Variaveis
  int a = 5 , b = 5;
  int soma = a + b;
  int multiplicacao = a*b;
  float divisao = a/b;
  float resto_divisao = a%b;


  //IMPRESSAO TITULO
  printf("RESULTADO DAS OPERACOES MATEMATICAS\n");
  //Impressao das operacoes
  printf("\nSoma = %d\nMultiplicacao = %d\nDivisao = %1.f\nResto da Divisao = %1.f",
        soma,multiplicacao,divisao,resto_divisao);

}

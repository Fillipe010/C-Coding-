// -- ALGORITMO DE GERACAO DE NUMEROS ALEATORIOS -- //

//Declaracao das Bibliotecas Usadas
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

// FUNCAO PRINCIPAL
int main(void){

  // -- Variavel Contador --
  int i;

  printf("Gerando 10 valores aleatorios:\n\n");

  // -- nulL define um valor desconhecido --
  // -- Funcao srand define o sorteio dos numeros --
  srand(time(NULL));

  // -- Laco de repeticao de iteracao definindo a quantidade de random numbers --
  for (i = 0; i < 10; i++)
  {
    // -- rand () % 100 define o intervalo desse sorteio --
    // -- nesse caso , vai desde  0 ate o valor 100 --
    printf("%d\n", rand() % 100 );
  }

  return 0;
}


/*Escreva um algoritmo que receba dois números (n1 e n2) e faça as operações básicas de uma
calculadora. Lembre-se de que a divisão por zero não deve ser permitida.*/

/*calculaas opercoes basicas dos valores solicitados.
o numero_02 deve ser diferente de zero para que o programa posso rodar.*/

#include<stdio.h>


int main(){


  float soma,subtracao,multiplicacao,divisao;
  int numero_01,numero_02;

  printf(" Digite um numero :\n");
  scanf("%i",&numero_01);
  printf(" Digite um segundo numero:\n");
  scanf("%i",&numero_02);


  soma = numero_01+numero_02;
  subtracao = numero_01 - numero_02;
  divisao = numero_01/numero_02;
  multiplicacao = numero_01 * numero_02;

  while (numero_02 != 0){
    printf("\no valor da subtracao e :%.f\n ",subtracao);
    printf("\no valor da soma e :%.f\n ",soma);
    printf("\no valor da divisao  e :%.1f\n",divisao);
    printf("\no valor da multiplicacao e :%.f\n ",multiplicacao);
    break;

  }
    return 0;
}


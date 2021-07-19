/*
O custo de um carro novo para o consumidor é a soma do preço de fábrica mais o percentual de
lucro do distribuidor mais os impostos aplicados ao preço de fábrica. Construa um algoritmo que
receba o preço de fábrica, o percentual de lucro do distribuidor e o percentual de impostos. Calcule
e mostre:
◦ O valor correspondente ao lucro do distribuidor
◦ O valor correspondente aos impostos
◦ O preço final do veículo.
#########DESCRICAO DO CODIGO##############################
CUSTO_CARRO =PREÇO_FABRICA+PERCENT_LUCRO_DISTR+IMPOST;
PREÇO_FABRICA = 45000;
PERCENT_LUCRO_DISTR = PREÇO_FABRICA * 25/100;
IMPOST = PREÇO_FABRICA * 60/100;

VALORES MERAMENTE ILUSTRATIVOS;
 valores por defult:
  /*imposto = preco_fabrica * 60/100;
    percent_lucro = preco_fabrica * 25/100;*/

#include<stdio.h>


int main(){

    int custo_carro,preco_fabrica;
    float taxa01,taxa02,imposto,percent_lucro;

    printf("\nDigite o preco de fabrica do carro:\n");
    scanf("%i",&preco_fabrica);

    printf("\nDigite o percentual de lucro:\n");
    scanf("%f",&taxa01);

    printf("\nDigite o percentual de imposto:\n");
    scanf("%f",&taxa02);

    percent_lucro = preco_fabrica * taxa01;
    imposto = preco_fabrica * taxa02;
    custo_carro = preco_fabrica + percent_lucro + imposto;

    printf("\nO PERCENTUAL DE LUCRO E:%.f\n",percent_lucro);
    printf("\nO PERCENTUAL DE IMPOSTO E:%.f\n",imposto);
    printf("\nO VALOR DO CARRO E:%.5d\n",custo_carro);


   return 0;

}

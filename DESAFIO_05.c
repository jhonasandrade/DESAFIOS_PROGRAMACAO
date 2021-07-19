
/*Escreva um algoritmo que receba o salário atual e calcule o novo salário líquido de um funcionário
dadas as tabelas de aumento e de imposto.
faixa          aumeto     faixa           imposto
415,0 a 600    25%        <600            0%
600 a 1,500    20%        600 a 1,500     5%
acima de 1,500 17,5%      1,500 a 2,700   12%
                          acima de 2,700  17,5%
 O IMPOSTO É SUBTRAIDO DO SALARIO;
 OS VALORES SAO FICTICIOS E NAO CORRESPONDEM A REALIDADE;
 /*
float autA=(25/100);AUMENTO PERCENTUAL
float autB=(20/100);AUMENTO PERCENTUAL
float autC=(17.5/100);AUMENTO PERCENTUAL
float impsA=(0/100);(0%);IMPOSTO PERCENTUAL
float impsB= (5/100);(5/100);IMPOSTO PERCENTUAL
float impsC=(12/100);(12/100);IMPOSTO PERCENTUAL
float impsD=(17.5/100);(17,5/100);IMPOSTO PERCENTUAL.*/


#include<stdio.h>


int main(){

float salario,salario_liquido0,salario_liquido1,salario_liquido2,salario_liquido3;
int i;

printf("\nDigite o salario do funcionario: \n");
scanf("%f",&salario);
salario_liquido0 = (salario+(salario * 0.25 - (0/100)));
salario_liquido1 = (salario+(salario * 0.12 - (12/100)));
salario_liquido2 = (salario+(salario * 0.2 - (5/100)));
salario_liquido3 = (salario+(salario * 0.175 - (17.5/100)));

printf("\nEscolha um numero de 0 a 3!\n0 para salarios entre 415 a 600:\n1 para salarios entre 600 a 1500:\n2 para salarios maiores que 1.500 e menores que 2.700:\n3 para salarios acima de 2700:\n");
scanf("%i",&i);

switch (i){
    case 0:
     if(salario = 415 && salario <= 600 ){
       printf("O salario liquido e:%.f\n",salario_liquido0);
       break;
     }else{
        printf(" voce digitou a opcao errada, escolha a opcao certa");
        break;
     }
    case 1:
       if(salario > 600 && salario <= 1500){
       printf("O salario liquido e:%.f\n",salario_liquido1);
       break;
     }else{
       printf(" voce digitou a opcao errada, escolha a opcao certa");
       break;
     }
      case 2:
       if(salario > 1500 && salario <= 2700 ){
       printf("O salario liquido e:%.f\n",salario_liquido2);
       break;
     }else{
        printf(" voce digitou a opcao errada, escolha a opcao certa");
        break;
    }
    case 3:
       if(salario > 2700 ){
       printf("O salario liquido e:%.f\n",salario_liquido3);
       break;
     }else{
        printf(" voce digitou a opcao errada, escolha a opcao certa");
        break;
     }

}
return 0;

}








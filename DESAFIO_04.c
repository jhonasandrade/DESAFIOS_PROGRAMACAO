

/*Escrever um algoritmo que receba o salário de um funcionário e calcule o novo salário de acordo
com a tabela abaixo:
Condição Percentual
Salário entre R$ 415,00 e R$ 750,00 20%
Salário > R$ 750,00 e Salário <= R$ 1500,00 15%
Salário > R$ 1500,00 12,5%.
calcula o salario de um determinado funcionario com reajuste.
os valores precisam ser reajustados de acordo com a faixa salarial do funcionario.
*/

#include <stdio.h>


int main()
{
    int salario,novo_salario01,novo_salario02,novo_salario03;
    float acrescimo;

    printf("digite o salario do funcionario:\n");
    scanf("%d",&salario);


     acrescimo = salario * 20/100;
     novo_salario01=salario + acrescimo;

     acrescimo = salario * 15/100 ;
     novo_salario02 = salario + acrescimo;

     acrescimo = salario * 12.5/100;
     novo_salario03 = salario + acrescimo;

    if (salario=415 && salario<750)
    {
        printf ("\no novo salario e :%.d\n",novo_salario01);
    }
    else if(salario=750 && salario<=1500)
    {
        printf ("\no novo salario e :%.d\n",novo_salario02);
    }
    else if(salario > 1500)
    {
        printf ("\no novo salario e :%.d\n",novo_salario03);
    }
    else {
        printf("erro");
    }

    return 0;
}

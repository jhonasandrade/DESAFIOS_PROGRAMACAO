
/*Escreva um algoritmo que receba cinso notas, calcule a média e mostre uma mensagem de acordo
com a tabela abaixo:
Média Aritmética
Entre 0,0 e 5,9 Reprovado
Entre 5,9 e 6,9 Prova Final
Acima de 6,9 Aprovado
algoritmo que faz soma e calcula a media das notas.
*/

#include<stdio.h>

int main()
{
    float nota_01,nota_02, nota_03,nota_04 ,nota_05;
    float media, soma;
    printf("escreva a primeira nota : ");
    scanf("%f",&nota_01);

    printf("escreva a segunda nota : ");
    scanf("%f",&nota_02);

    printf("escreva a terceira nota : ");
    scanf("%f",&nota_03);

    printf("escreva a quarta nota : ");
    scanf("%f",&nota_04);

    printf("escreva a quinta nota : ");
    scanf("%f",&nota_05);

    soma = ( nota_01+nota_02+nota_03+nota_04+nota_05);
    media = (soma/5);

    printf("a media do aluno e:%.1f \n\n",media);

        if (media <= 5.9)
        {
            printf("voce esta reprovado!");
        }
        else if (media<=6.9)
        {
            printf("voce esta de recuperacao !");
        }

        else if (media >= 7.0)
        {
            printf("voce esta aprovado !");
        }
        else
        {
            printf("cade as notas?");
        }

        return 0;

    }





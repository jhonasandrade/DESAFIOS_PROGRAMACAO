/* A nota final de um estudante é calculada por uma média ponderada onde o trabalho tem peso 4
e a prova tem peso 6. O aluno será considerado aprovado se obtiver média superior ou igual a 7.
Entretanto, a nota do trabalho ou a nota da prova não podem ser inferior a 5,0. Construa um
algoritmo que peça a nota da prova, a nota do trabalho e determine se o aluno está aprovado ou
reprovado.
calcula a media ponderada e diz se um aluno foi ou õ aprovado.
*/
#include<stdio.h>


int main(){
    float nota_prova,nota_traba;
    float media;

    printf("\nEscreva a nota da prova:\n");
    scanf("%f",&nota_prova);

    printf("\nEscreva a nota do trabalho:\n");
    scanf("%f",&nota_traba);

    media =((nota_prova * 6.0 + nota_traba * 4.0))/10;


    printf("\nA media das notas e :%.f\n",media);

    if (media >= 7 && nota_traba >= 5 && nota_prova >= 5)
    {
        printf("\nvoce foi aprovado !\n");
    }
    else (media < 7 && nota_traba < 5 && nota_prova < 5);
    {
       printf("\nvoce esta reprovado!!\n");
    }


  return 0;


}

/* A nota final de um estudante � calculada por uma m�dia ponderada onde o trabalho tem peso 4
e a prova tem peso 6. O aluno ser� considerado aprovado se obtiver m�dia superior ou igual a 7.
Entretanto, a nota do trabalho ou a nota da prova n�o podem ser inferior a 5,0. Construa um
algoritmo que pe�a a nota da prova, a nota do trabalho e determine se o aluno est� aprovado ou
reprovado.
calcula a media ponderada e diz se um aluno foi ou � aprovado.
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

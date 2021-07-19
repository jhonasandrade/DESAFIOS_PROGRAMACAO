
/*Considere que um pedreiro cobra R$ 15,50 por metro quadrado de piso colocado e R$ 10,00 o
metro quadrado de pintura. Considere também que a sala que será reformada tem 3m x 5m de piso, com
uma janela de 2m x 2m e uma porta de 2,20m x 0,80m na parede,e as paredes tem uma altura de 2,60m x 2,60 de comprimento.
Construa um algoritmo que responda:
◦ Qual será o custo da pintura?
◦ Qual será o custo de colocar o piso?
◦ Qual será o custo da reforma?.
##########DESCRICAO DO CODIGO##########
COLOCACAO_CERAM = 15.50;
COLOCACAO _PINT = 10.00;
AREA_PARED = 2.60 * 2.60 - (2.20 * 0.8);
AREA_PIS = 3.0 * 5.0;
CUSTO_PINT = COLOCACAO_CERAM * AREA_PARED ;
CUSTO_PIS = COLOCACAO_PISO * AREA_PIS;
CUSTO_TOTAL = CUSTO_CERAM + CUSTO_PISO;
*/

#include<stdio.h>

int main(){
   float colocacao_ceram,colocacao_pint,area_pared,area_piso,custo_pint,custo_pis,custo_total;
   float al_pared,compr_pared;//altura e comprimento da parede.
   float larg_piso,compr_piso;//largura e comprimento do piso.
   float area_jan_port;//area das janelas e das postas ,JA CALCULADAS,se tiver.

   printf("\nDigite o valor cobrado pelo piso colocado:\n");
   scanf("%f",&colocacao_ceram);
   printf("\nDigite o valor cobrado pela pintura feita:\n");
   scanf("%f",&colocacao_pint);
   printf("\nDigite a altura da parede:\n");
   scanf("%f",&al_pared);
   printf("\nDigite o comprimento da parede:\n");
   scanf("%f",&compr_pared);
   printf("\nDigite a largura do piso:\n");
   scanf("%f",&larg_piso);
   printf("\nDigite o comprimento do piso:\n");
   scanf("%f",&compr_piso);
   printf("\nDigite a area total de janelas e portas se houver,caso contrario digite 0:\n");
   scanf("%f",&area_jan_port);

   area_pared = al_pared * compr_pared - area_jan_port;
   area_piso = larg_piso * compr_piso;
   custo_pis = colocacao_ceram * area_piso;
   custo_pint = colocacao_pint * area_pared;
   custo_total = custo_pis + custo_pint;

   printf("\nO custo do piso e:%.f Reais\n",custo_pis);
   printf("\nO custo da pintura e:%.f Reais\n",custo_pint);
   printf("\nO custo total da obra e:%.f Reais\n",custo_total);


return 0;

}

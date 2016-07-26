/* Criado por: Bruno Santos da Costa */

#include <stdio.h>

int nf;
float vb,v1,v2;

main()
{
    printf("Insira o numero da Nota Fiscal: ");
    scanf("%d",&nf);
    printf("Insira o valor bruto da NF: ");
    scanf("%f",&vb);
    v1 = vb/100;
    v2 = v1*4.65;
    v1 = vb-v2;
    printf("Aplicando imposto COFINS (4.65%%)\n");
    printf("O valor do imposto e de: %.2f \n\n", v2);
    printf("O Valor Liquido sera de: %.2f \n", v1);
    printf("--------------------------------------------\n");
    printf(" NF: %d \n Valor Bruto da NF: %.2f \n Imposto Descontado: %.2f \n Valor Liquido da NF: %.2f \n\n\n", nf,vb,v2,v1 );
}

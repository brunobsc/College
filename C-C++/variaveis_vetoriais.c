/* Criado por: Bruno Santos da Costa */

#include <stdio.h>


int a[20],i;

main()
{
    for(i=0;i<20;i++)
    {
        printf("\nDigite o %i valor: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n-------------------------------------\nRESULTADO:\n");
    for(i=0;i<20;i++)
    {
        printf("\nValor do %2d vetor somando + 10 eh:  %d\n",i+1,a[i]+10);
    }
}

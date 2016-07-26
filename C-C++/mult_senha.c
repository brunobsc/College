/* Criado por: Bruno Santos da Costa */

#include <stdio.h>

int a,t=1,b,c;

main()
{
    printf("Digite os tres numero (max 3 vezes):\n");
    scanf("%d%d%d", &a,&b,&c);
    while (c!=a*b)
    {
        t++;
        printf("\nDigite de novo:\n");
        scanf("%d%d%d", &a,&b,&c);
        if (c!=a*b  && t > 2)
            {
            printf("\nLIMITE ATINGIDO\n");
            return 0;
            }
        printf("\nInsira apenas numeros\n");
        return 0;
    }
    if (c==a*b && c > 0)
        {
        printf("\nPATABENS!!!\n");
        return 0;
        }
    printf("\nInsira apenas numeros\n");
    return 0;
}

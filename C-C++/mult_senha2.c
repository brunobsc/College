/* Criado por: Bruno Santos da Costa */

#include <stdio.h>

int a,t=1,b,c;

main()
{
    while (t <= 3)
    {
        t++;
        printf("\nDigite os tres numero (max 3 vezes):\n");
        scanf("%d%d%d", &a,&b,&c);
        if (c==a*b && c > 0)
            {
            printf("\nPARABENS !!!\n");
            return 0;
            }
        else if (c==a*b) //resolve o problema caso o usuario insira letra ao invez de numeros.
        {
            printf("\nITEM INVALIDO\n");
            return 0;
        }
    }
    printf("\nLimite de tentativas atingido\n");
    return 0;
}

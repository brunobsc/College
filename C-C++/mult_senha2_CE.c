/* Criado por: Bruno Santos da Costa */

#include <stdio.h>
#include <stdlib.h>

int a,t=1,b,c;

int main()
{
    while (t <= 3)
    {
        t=0;
        t++;
        printf("\nDigite os tres numero (max 3 vezes):\n");
        scanf("%d%d%d", &a,&b,&c);
        if (c==a*b && c > 0)
            {
            printf("\nPARABENS !!!\n\n");
            system("pause");
            return 0;
            }
    }
    printf("\nLimite de tentativas atingido\n");
    system("pause");
    return 0;
}

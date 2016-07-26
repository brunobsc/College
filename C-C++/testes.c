/* Criado por: Bruno Santos da Costa */

#include <stdio.h>

int a,c=1;

main()
{
    printf("Digite um numero (max 3 vezes):\n");
    scanf("%d", &a);
    while (a != 6  && c < 3)
    {
        c++;
        printf("\nDigite de novo:\n");
        scanf("%d", &a);
        if (a != 6  && c > 2)
            {
            printf("\nLIMITE ATINGIDO\n");
            return 0;
            }
    }
    printf("\nPATABENS!!!\n");
    return 0;
}

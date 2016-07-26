/* Criado por: Bruno Santos da Costa */

#include <stdio.h>

int timer = 0;
float la,lb,lc;

main()
{
    printf("Classificacao quanto aos lados do triangulo:\n");
    while (timer == 0)
    {
        printf("\n\nInsira o valor do lado A: ");
        scanf("%f",&la);
        printf("Insira o valor do lado B: ");
        scanf("%f",&lb);
        printf("Insira o valor do lado C: ");
        scanf("%f",&lc);
        if (la==lb && lb==lc)
            printf("\nSeu triangulo eh EQUILATERO.\n");
        if (la!=lb && lb==lc || la==lc && lb!=lc || la==lb && la!=lc)
            printf("\nSeu triangulo eh ISOSCELES.\n");
        if (la != lb && lb != lc && la != lc)
            printf("\nSeu triangulo eh ESCALENO.\n");
    }
    return 0;

}

/* Criado por: Bruno Santos da Costa */


#include <stdio.h>
#include <math.h>

float x, y, ry;
int timer = 0;

main()
{
    while(timer == 0)
    {
        printf("\n\nInsira o X: ");
        scanf("%f", &x);
        printf("Insira o Y: ");
        scanf("%f", &y);
    //  POW [pow(y,2)] � potencia| ex: y�
    //  Aqui fica a regra da fun��o
        ry = pow(x,2)/10;
      //  ry = sqrt(ry);
        if (ry == y)
            printf("Sim %.2f eh Igual\n", ry);
        else
            printf("Nao %.2f eh Diferente ou nao atende ao requerimento\n", ry);
    }
    return 0;
}

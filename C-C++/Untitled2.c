#include <stdio.h>
#include <math.h>

float x, y, ry;

main()
{
    printf("Insira o X: ");
    scanf("%f", &x);
    printf("Insira o Y: ");
    scanf("%f", &y);
//  POW [pow(y,2)] é potencia| ex: y²
    ry = 100/x-5;
    if (ry == y && x != 5)
        printf("Sim %.2f e Igual\n", ry);
    else
        printf("Nao %.2f e Diferente ou nao atende ao requerimento\n", ry);
}

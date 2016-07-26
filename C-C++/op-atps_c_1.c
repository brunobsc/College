/* Criado por: Bruno Santos da Costa */

#include <stdio.h>

int op;
float a,b,r;

main()
{
    printf("\nEntre com 2 valores:\n");
    scanf("%f%f",&a,&b);
    system("cls");
    if (a<0 && b<0)
    {
        printf("Numero Invalido\n");
        return 0;
    }

    do
    {
        printf("\n\n1 - Somar \n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n5 - Novos Valores\n6 - Sair\n");
        scanf("%d",&op);
        system("cls");

        if (op == 1)
        {
            r=a+b;
            printf("O resultado eh: %.2f\n",r);
        }

        else if (op == 2)
        {
            r=a-b;
            printf("O resultado eh: %.2f\n",r);
        }

        else if (op == 3)
        {
            r=a*b;
            printf("O resultado eh: %.2f\n",r);
        }

        else if (op == 4)
        {
            r=a/b;
            printf("O resultado eh: %.2f\n",r);
        }

        else if (op == 5)
        {
        printf("\nEntre com 2 valores:\n");
        scanf("%f%f",&a,&b);
        system("cls");
        if (a<0 && b<0)
            {
                printf("Numero Invalido\n");
                return 0;
            }
        }

        else if (op > 6)
        {
            printf("Opcao invalida\n");
        }
    }

    while (op != 6);
        {
            return 0;
        }
}

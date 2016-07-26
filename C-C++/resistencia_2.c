/* Criado por: Bruno Santos da Costa */

#include <stdio.h>

float s[],sr=0,p[],pr=0,pf[],tt,vg1,ri1,v;
int i=1;
int j=1;
int k=1;
int timer = 0;
int op = 0;
int pe = 0;
int se = 0;

main()
{
    while(timer == 0)
    {
        printf("1 - Voltagem\n2 - Tensao\n3 - Serie\n4 - paralelo\n5 - Total\n:",&op);
        scanf("%d",&op);
        if (op == 1)
        {
            op=0;
            printf("Insira o valor da Voltagem:\n");
            scanf("%f",&vg1);
        }
        if (op == 2)
        {
            op=0;
            printf("Insira o valor da Tensao:\n");
            scanf("%f",&ri1);
        }
        if (op == 3)
        {
            op=0;
            printf("Insira o valor da R%d: ",i);
            scanf("%f",&s[i]);
            sr=sr+s[i];
            printf("Total ate agora: %.3f\n\n",sr);
            i++;
        }
        if (op == 4)
        {
            for (;pe != 2;)
            {
                op=0;
                printf("1 - Adicionar\n2 - Sair:\n");
                scanf("%d",&pe);
                if (pe == 2)
                {
                    k++;
                }
                if (pe == 1)
                {
                    printf("Insira o valor da R%d: ",i);
                    scanf("%f",&p[i]);
                    pr=pr+1/p[i];
                    pf[k]=1/pr;
                    printf("Total ate agora: %.3f\n\n",pf[k]);
                    i++;
                }
            }

        }
        if (op == 5)
            {
            tt=pf[k]+sr;
            op=0;
            if (vg1 == 0 && ri1 > 0)
                {
                    vg1=tt*ri1;
                }
            if (ri1 == 0 && vg1 > 0)
                {
                    ri1=vg1/tt;
                }
            printf("O resultado eh:\nVt=%.3f\nTT=%.3f\nI=%.3f\n",vg1,tt,ri1);
            for (;j < i;j++)
                {
                v=s[j]*ri1;
                printf("V%d=%.3f\n",j,v);
                }
            }
    }
    return 0;
}

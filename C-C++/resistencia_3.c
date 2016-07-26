/* Criado por: Bruno Santos da Costa */

#include <stdio.h>

float s[],sr=0,p[],pr[],pf[],tt=0,vg1=0,ri1=0,v,vp,pt=0,a=0;
int m=2,h=2,i=1,j=2,k=2,l=2,timer = 0,op = 0,pe = 0,n=1;

main()
{
    while(timer == 0)
    {
        pe=0;
        op=0;
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
            scanf("%f",&s[h]);
            sr=sr+s[h];
            printf("Total ate agora: %.3f\n\n",sr);
            h++;
            i++;
        }
        p[0]=0;
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
                    a=0;
                }
                if (pe == 1)
                {
                    printf("Insira o valor da R%d: ",i);
                    scanf("%f",&p[m]);
                    a=a+1/p[m];
                    p[k]=a;
                  //  pt=pt+1/pr[k];
                    i++;
                    m++;
                }
            }

        }
        if (op == 5)
        {
            op=0;
           for (;k >= 1 && n < k;)
            {
            tt=tt+1/p[n];
            n++;
            }
            tt=tt+sr;
           if (ri1 == 0 && vg1 > 0)
            {
                ri1=vg1/tt;
            }
            if (vg1 == 0 && ri1 > 0)
            {
                vg1=tt*ri1;
            }
            for (;k >= 0 && l < k;)
            {
                vp=pr[l]*ri1;
                printf("Vp%d=%.3f\n",l-1,vp);
                l++;
            }
            for (;h >= 0 && j < h;)
                {
                //printf("AKI===%.3f\n\n",s[1]);
                v=s[j]*ri1;
                printf("V%d=%.3f\n",j-1,v);
                j++;
                }

            printf("O resultado eh:\nVt=%.3f\nTT=%.3f\nI=%.3f\n",vg1,tt,ri1);
            }
    }
    return 0;
}

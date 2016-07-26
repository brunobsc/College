/* Criado por: Bruno Santos da Costa */


#include <stdio.h>
#include <math.h>

float p1,p2,p3,p4,p5,pr,s1,s2,s3,s4,s5,sr,tt,vg1,v1,i1,ri1,vp2,v2,v3,v4,v5,r9;
int timer = 0;
int op = 0;
int pe = 0;
int se = 0;

main()
{
    v1=0;
    v2=0;
    v3=0;
    v4=0;
    v5=0;
    ri1=0;
    vg1=0;
    while(timer == 0)
    {
        printf("\n\n1 - voltagem \n2 - Amperagem\n3 - Paralelos\n4 - serie\n5 - soma tudo\n6 - limpar\n");
        scanf("%d", &op);
        pe=0;
        se=0;

        if (op == 3)
            {
            printf("De 2 a 5, insira o numero de resistencias\n:");
            scanf("%d", &pe);
            }
            if (pe == 2)
                {
                printf("Insira o valor das resistencias em paralelo:\n");
                scanf("%f%f", &p1,&p2);
                pr=1/p1+1/p2;
                pr=1/pr;
                printf("O resultado eh %.3f\n",pr);
                }
                if (pe == 3)
                    {
                    printf("Insira o valor das resistencias em paralelo:\n");
                    scanf("%f%f%f", &p1,&p2,&p3);
                    pr=1/p1+1/p2+1/p3;
                    pr=1/pr;
                    printf("O resultado eh %.3f\n",pr);
                    }
                    if (pe == 4)
                        {
                        printf("Insira o valor das resistencias em paralelo:\n");
                        scanf("%f%f%f%f", &p1,&p2,&p3,&p4);
                        pr=1/p1+1/p2+1/p3+1/p4;
                        pr=1/pr;
                        printf("O resultado eh %.3f\n",pr);
                        }
                        if (pe == 5)
                            {
                            printf("Insira o valor das resistencias em paralelo:\n");
                            scanf("%f%f%f%f%f", &p1,&p2,&p3,&p4,&p5);
                            pr=1/p1+1/p2+1/p3+1/p4+1/5;
                            pr=1/pr;
                            printf("O resultado eh %.3f\n",pr);
                            }
        if (op == 4)
            {
            printf("De 1 a 5, insira o numero de resistencias em serie\n:");
            scanf("%d", &se);
            }
            if (se == 1)
                {
                printf("Insira o valor das resistencias em serie:\n");
                scanf("%f", &s1);
                sr=s1;
                printf("O resultado eh %.3f\n",sr);
                }
                if (se == 2)
                    {
                    printf("Insira o valor das resistencias em serie:\n");
                    scanf("%f%f", &s1,&s2);
                    sr=s1+s2;
                    printf("O resultado eh %.3f\n",sr);
                    }
                    if (se == 3)
                        {
                        printf("Insira o valor das resistencias em serie:\n");
                        scanf("%f%f%f", &s1,&s2,&s3);
                        sr=s1+s2+s3;
                        printf("O resultado eh %.3f\n",sr);
                        }
                        if (se == 4)
                            {
                            printf("Insira o valor das resistencias em serie:\n");
                            scanf("%f%f%f%f", &s1,&s2,&s3,&s4);
                            sr=s1+s2+s3+s4;
                            printf("O resultado eh %.3f\n",sr);
                            }
                            if (se == 5)
                                {
                                printf("Insira o valor das resistencias em serie:\n");
                                scanf("%f%f%f%f%f", &s1,&s2,&s3,&s4,&s5);
                                sr=s1+s2+s3+s4+s5;
                                printf("O resultado eh %.3f\n",sr);
                                }
        if (op == 1)
            {
            printf("Voltagem:\n");
            scanf("%f", &vg1);
            }
        if (op == 2)
            {
            printf("Amperagem:\n");
            scanf("%f", &ri1);
            }
        if (op == 5)
            {
            tt=pr+sr;
            if (vg1 == 0 && ri1 > 0)
                {
                    vg1=tt*ri1;
                }
            if (ri1 == 0 && vg1 > 0)
                {
                    ri1=vg1/tt;
                }
            vp2=pr*ri1;
            printf("O resultado eh:\nVt=%.3f\nTT=%.3f\nI=%.3f\nVp1=%.3f\n",vg1,tt,ri1,vp2);
            if (s1 > 0 && s2 == 0)
                {
                v1=s1*ri1;
                r9=(vp2+v1)-vg1;
                printf("V1=%.3f\n\nVerificador=%.3f\n",v1,r9);
                }
                if (s2 > 0 && s3 == 0)
                    {
                    v1=s1*ri1;
                    v2=s2*ri1;
                    r9=(vp2+v1+v2)-vg1;
                    printf("V1=%.3f\nV2=%.3f\n\nVerificador=%.3f\n",v1,v2,r9);
                    }
                    if (s3 > 0 && s4 == 0)
                        {
                        v1=s1*ri1;
                        v2=s2*ri1;
                        v3=s3*ri1;
                        r9=(vp2+v1+v2+v3)-vg1;
                        printf("V1=%.3f\nV2=%.3f\nV3=%.3f\n\nVerificador=%.3f\n",v1,v2,v3,r9);
                        }
                        if (s4 > 0 && s5 == 0)
                            {
                            v1=s1*ri1;
                            v2=s2*ri1;
                            v3=s3*ri1;
                            v4=s4*ri1;
                            r9=(vp2+v1+v2+v3+v4)-vg1;
                            printf("V1=%.3f\nV2=%.3f\nV3=%.3f\nV4=%.3f\n\nVerificador=%.3f\n",v1,v2,v3,v4,r9);
                            }
                            if (s5 > 0)
                                {
                                v1=s1*ri1;
                                v2=s2*ri1;
                                v3=s3*ri1;
                                v4=s4*ri1;
                                v5=s5*ri1;
                                r9=(vp2+v1+v2+v3+v4+v5)-vg1;
                                printf("V1=%.3f\nV2=%.3f\nV3=%.3f\nV4=%.3f\nV5=%.3f\n\nVerificador=%.3f\n",v1,v2,v3,v4,v5,r9);
                                }
            }

        if (op == 6)
            {
            pr=0;
            sr=0;
            tt=0;
            v1=0;
            v2=0;
            v3=0;
            v4=0;
            v5=0;
            ri1=0;
            vg1=0;
            system("cls");
            }
        if (op >= 7)
            {
            printf("Wrong\n");
            }
    }
    return 0;
}

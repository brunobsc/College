        if (op == 5)
        {
         //   if (pt > 0)
         //   {
          //  pt=1/pt;
          //  }
         //   tt=pt+sr;
           // printf("ITEM=%.3f",pt);
            op=0;
            for (;k >= 1 && l < k;)
                {
                tt=tt+1/p[l];
                vp=pr[l]*ri1;
                printf("Vp%d=%.3f\n",l,vp);
                l++;
                }
            for (;h >= 1 && j < h;j++)
                {
                v=s[j]*ri1;
                printf("V%d=%.3f\n",j,v);
                }
            tt=tt+sr;
            if (vg1 == 0 && ri1 > 0)
                {
                    vg1=tt*ri1;
                }
            if (ri1 == 0 && vg1 > 0)
                {
                    ri1=vg1/tt;
                }
                printf("O resultado eh:\nVt=%.3f\nTT=%.3f\nI=%.3f\n",vg1,tt,ri1);
            }

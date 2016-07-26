/* Criado por: Bruno Santos da Costa */

#include <stdio.h>

main(){
    int k=0,a=5,i[36],j=0,r[6][6],n=0;
    for (j=0;j<36;j++){
    i[j]=00;
    }

   // printf("%d",i[9-a]);
    for(k=0;k<1;k++){
            for(j=0;j<6;j++){
                r[k][j] = rand() % 36 + 1;
                i[36-r[k][j]]=r[k][j];
              //  printf("\n %d RANDOM:%d",n=n+1,i[36-r[k][j]]); /* Debugar numero gerados */
        }
    }
    for (j=0;j<36;j++){
        printf("%.2d    ",i[j]);
        if (j==5 || j==11 || j==17 || j==23 || j==29 || j==35){
            printf("\n\n");
        }
    }
};

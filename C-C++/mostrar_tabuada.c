#include <stdio.h>
#include <stdlib.h>

main() {
    int a,i;
    while(1) {
     printf("\n\nDigite o numero do qual deseja ver a tabuada de 1 a 10: ");
     scanf("%d",&a);
        if (a>0 && a<=10){
            system("cls");
            printf("TABUADA\n\n");
            for(i=1;i<=10;i++)
            {
                printf("%d X %d = %d\n",i,a,i*a);
            }
        }
        else{
            system("cls");
            printf("Numero invalido\n");
        }

    }
}

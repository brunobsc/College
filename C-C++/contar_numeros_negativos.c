#include <stdio.h>

int a,b=0,i=0;

main() {
    for (i=0;i<50;i++){
     printf("Digite o %d valor: ",i+1);
     scanf("%d",&a);
        if (a<0){
            b++;
        }
     }
         printf("\nTotal de numeros negativos: %d",b);
}

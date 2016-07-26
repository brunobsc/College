#include <stdio.h>

int a,b,i=0;

main() {
  printf("Digite o 1 valor: ");
  scanf("%d",&b);
    for (i=0;i<49;i++){
     printf("Digite o %d valor: ",i+2);
     scanf("%d",&a);
        if (a>b){
            b=a;
        }
     }
         printf("\nO maior valor digitado foi :\n%d",b);
}

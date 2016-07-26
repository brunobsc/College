#include <stdio.h>


main() {
  int a,b,c,i;
  printf("Digite o 1 valor: ");
  scanf("%d",&b);
  c=b;
    for (i=2;i<=100;i++){
     printf("Digite o %d valor: ",i);
     scanf("%d",&a);
        if (a>b){
            b=a;
        }
        else if (a<c) {
            c=a;
        }
     }
         printf("\nMaior: %d || Menor: %d\nDiferenca: %d\n",b,c,b-c);
}

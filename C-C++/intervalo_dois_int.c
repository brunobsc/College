#include <stdio.h>


main() {
    int a,b,c;
    printf("Insira dois valores inteiros:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    if (a>b){
        c=a;
        a=b;
        b=c;
    }
    printf("\n\nNumeros contidos entre o intervalo de %d a %d:\n",a,b);
    for (a+=1;a<b;a++){
        printf("%d\n",a);
    }
}

#include <stdio.h>


main() {
    int a=0,b,c,i;
    printf("Insira cem valores:\n");
    for (i=0;i<50;i++) {
        scanf("%d",&a);
        b+=a;
    }
    b=b/50;
    a=0;
    for (i=0;i<50;i++) {
        scanf("%d",&a);
        c+=a;
    }
    c=c/50;
    printf("\n%d %d\n",b,c);
}

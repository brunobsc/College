#include <stdio.h>

int a[4],b=0,i=0;

main(){
    for (i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;b<a[i];i++)
    {
        b=a[i];
        printf("result %d",b);
    }
}

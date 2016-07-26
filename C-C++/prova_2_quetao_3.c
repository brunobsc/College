/* Criado por: Bruno Santos da Costa */


#include <stdio.h>


main(){
    int i,a[10],b;
    scanf("%d",&b);
    a[0]=b;
    for (i=1;i<10;i++){
        scanf("%d",&a[i]);
        if (a[i] > b){
            b=a[i];
        }
    }
    for (i=0;i<10;i++){
        if (a[i] != b){
            printf("%d",a[i]);
        }
    }
}

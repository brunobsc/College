//Criado por: Bruno Santos da Costa.

#include <stdio.h>

main(){
	int a,m,d;
	printf("Entre com sua idade expressa em ANOS, MESES e DIAS, RESPECTIVAMENTE:\n");
	scanf("%d %d %d",&a,&m,&d);
	a=a*365;
	m=m*30;
	d=d+m+a;
	printf("\nVocê tem %d DIAS.\n\n", d);
}
#include <stdio.h>

main(){
	int a,b,c,d;
	printf("Insira TRÊS numeros INTEIROS e POSITIVOS:\n");
	scanf("%d %d %d", &a, &b, &c);
	if (a>0 && b>0 && c>0){
		d=(((a+b)*(a+b))+((b+c)*(b+c)))/2;
		printf("O valor de D é: %d\n\n", d);
	}
	else{
		printf("Entre apenas numeros INTEIROS e POSITIVOS.\n\n");
	}
}
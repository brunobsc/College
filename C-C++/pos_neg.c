#include <stdio.h>

main(){
	float n;
	printf("Insira um número:\n");
	scanf("%f",&n);
	printf("%.2f ", n);
	if (n<0){ //VER SE 0 É NEUTRO...
		printf("é Negativo.\n");
	}
	else {
		printf("é Positivo.\n");
	}
}

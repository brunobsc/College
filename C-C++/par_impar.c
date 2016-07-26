#include <stdio.h>

main(){
	int n;
	scanf("%d",&n);
	if (n%2 == 0 && n!=0){
		printf("%d é Par.\n\n", n);
	}
	else if (n != 0) {
		printf("%d é Impar.\n\n", n);
	}
	else {
		printf("Insira um número valido.\n\n");
	}
}
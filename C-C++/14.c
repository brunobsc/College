#include <stdio.h>
#include <stdlib.h>

main(){
	while(1){
		int i,n,resultado = 1;
		printf("Fatorial\n");
		printf("\nValor: ");
		scanf("%d",&n);
		for(i=n;i>1;--i)
			resultado = resultado*i;
		printf("O Fatorial de %d = %d\n\n", n,resultado);
        system("PAUSE");
        system("cls");
	}
}

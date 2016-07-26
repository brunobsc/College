#include <stdio.h>

main(){
	int i,par=0,impar=0,n;
	for (i=0;i<10;i++){
		printf("Insira o %d valor: ", i+1);
		scanf("%d",&n);
		if (n%2==0 && n!=0)
			par++;
		else if (n%2==1){
			impar++;
		}
	}
	printf("Quantidade de numeros IMPARES: %d\n"
		"Quantidade de numeros PARES: %d\n\n",impar,par);
}
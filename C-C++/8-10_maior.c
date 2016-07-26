#include <stdio.h>

main(){
	int i,n,maior,qtd=10;
	printf("Insira o 1 valor: ");
	scanf("%d",&maior);
	for(i=1;i<qtd;i++){
		printf("Insira o %d valor: ",i+1);
		scanf("%d",&n);
		if (n>maior){
			maior=n;
		}
	}
	printf("\nO Maior numero lido foi: %d\n\n", maior);
}
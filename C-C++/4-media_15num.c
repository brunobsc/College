#include <stdio.h>

main(){
	int qtd=15,num,i;
	float media,soma=0;
	for (i=0;i<qtd;i++){
		printf("Insira o %d valor: ", i+1);
		scanf("%d",&num);
		soma=soma+num;
	}
	media=soma/qtd;
	printf("\nA Soma dos %d numeros eh: %.0f\n"
		"A Media dos %d numeros eh: %.2f\n\n", qtd,soma,qtd,media);
}
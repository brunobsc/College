#include <stdio.h>

main(){
	int qtd,i,n,maior,menor;
	float soma,media;
	printf("Insira a quantidade de numeros a serem lidos: ");
	scanf("%d",&qtd);
	printf("\nInsira o 1 valor: ");
	scanf("%d",&n);
	maior=n;
	menor=n;
	soma=n;
	for(i=1;i<qtd;i++){
		printf("Insira o %d valor: ", i+1);
		scanf("%d",&n);
		soma=soma+n;
		if (n>maior)
			maior=n;
		else if (n<menor)
			menor=n;
	}
	media=soma/qtd;
	printf("\nA Media eh: %.2f\n"
		"O MAIOR numero eh: %d\n"
		"O MENOR numero eh: %d\n\n", media,maior,menor);
}
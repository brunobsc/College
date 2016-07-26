#include <stdio.h>

main(){
	float soma,vetor[10];
	int i,tamanho=(sizeof(vetor)/sizeof(int));
	for(i=0;i<tamanho;i++){
		printf("Insira um valor para o vetor[%d]: ",i);
		scanf("%f",&vetor[i]);
	}
	printf("-------------------------------------\n\tVALORES INSERIDOS:\n");
	for(i=0;i<tamanho;i++){
		printf("O valor do vetor[%d] eh %g\n", i,vetor[i]);
		soma+=vetor[i];
	}
	printf("\nA MEDIA dos elementos do vetor eh %g\n\n",(soma/tamanho));
}
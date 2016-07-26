#include <stdio.h>


main(){
	int i,soma=0,vetor[5];
	int tamanho=(sizeof(vetor)/sizeof(int)); /*Usando para caso haja mudança
				 no tamanho do vetor o código não precisará ser modificado. 
				 			--	(Ele se adapta automaticamente.)*/
	for(i=0;i<tamanho;i++){
		printf("Insira o valor da posicao %d/%d: ", i+1,tamanho);
		scanf("%d",&vetor[i]);
		soma+=vetor[i];
	}
	printf("\nA soma do vetor eh %d.\n\n",soma);
}
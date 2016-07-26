#include <stdio.h>

main(){
	int i,P=0,M=0,qtd=20,N[qtd];
	printf("Insira o 1 valor: ");
	scanf("%d",&M);
	for(i=1;i<qtd;i++){
		printf("Insira o %d valor: ",i+1);
		scanf("%d",&N[i]);
		if(N[i]<M){
			M=N[i];
			P=i;
		}
	}
	printf("\nO menor elemento de N eh %d "
		"e sua posicao dentro do vetor eh %d.\n\n", M,P);
}
#include <stdio.h>

main(){
	int tamanho=5; /* Caso haja mudança, será necessario apenas mudar aqui ;) */
	int i,vetorA[tamanho],vetorB[tamanho];
	for(i=0;i<tamanho;i++){
		printf("Insira o %d valor: ", i+1);
		scanf("%d",&vetorA[i]);
		vetorB[i]=(vetorA[i]*2);
	}
	printf("----------------------\n");
	for(i=0;i<tamanho;i++){
		printf("vetorA[%d]=%d -> vetorB[%d]=%d\n", i,vetorA[i],i,vetorB[i]);
	}
}
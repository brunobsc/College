#include <stdio.h>

main(){
	int i,impar=0,par=0,vetor[10];
	int tamanho=(sizeof(vetor)/sizeof(int));
	for(i=0;i<tamanho;i++){
		printf("Insira o %d valor: ", i+1);
		scanf("%d",&vetor[i]);
		if(vetor[i]%2==1)
			impar++;
		else if(vetor[i]%2==0 && vetor[i]!=0)
			par++;
	}
	printf("\n Este vetor contem:\n %d Numeros IMPARES \n %d Numeros PARES\n\n", impar,par);
}
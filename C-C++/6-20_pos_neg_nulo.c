#include <stdio.h>

main(){
	int i,qtd=20,num,pos=0,neg=0;
	for(i=0;i<qtd;i++){
		printf("Insira o %d numero: \n", i+1);
		scanf("%d",&num);
		if (num>0){
			printf("POSITIVO\n\n");
			pos++;
		}
		else if (num<0){
			printf("NEGATIVO\n\n");
			neg++;
		}
		else
			printf("NULO\n\n");
	}
	printf("Total de numeros POSITIVOS: %d\n"
		   "Total de numeros NEGATIVOS: %d\n\n",pos,neg);
}
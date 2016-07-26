#include <stdio.h>

main(){
	int pessoas=3,i;
	float peso[pessoas],max;
	printf("Insira a capacidade MAXIMA do elevador: ");
	scanf("%f",&max);
	for(i=0;i<pessoas;++i){
		printf("Peso da pessoas %d: ", i+1);
		scanf("%f", &peso[i]);
		max=max-peso[i];
	}
	if (max < 0){
		printf("O elevador EXCEDEU sua capacidade maxima em %.3fKg.\n\n",max/-1);
	}
	else {
		printf("O elevador está LIBERADO com %.3fKg restante.\n\n",max);
	}
}

//Criado por: Bruno Santos da Costa.

#include <stdio.h>

main(){
	float ladoa,ladob,valor;
	printf("Insira o tamanho do lado A:\n");
	scanf("%f",&ladoa);
	printf("Insira o tamanho do lado B:\n");
	scanf("%f",&ladob);
	printf("Insira o valor do M²:\n");
	scanf("%f",&valor);
	valor=(ladoa*ladob)*valor;
	printf("O Valor do terreno é R$%.2f\n\n", valor);
}

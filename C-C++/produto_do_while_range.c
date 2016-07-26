#include <stdio.h>
#include <stdlib.h>

main(){
	float num1,num2,res=10;
	do{
		printf("Insira o primeiro valor: ");
		scanf("%f",&num1);
		printf("Insira o segundo valor: ");
		scanf("%f",&num2);
		res=num1*num2;
		printf("O resultado eh: %g\n\n", res);
	}
	while(res>=10 && res<=1000);
	printf("Resultado fora do range (10-1000), SAIR...\n\n");
}
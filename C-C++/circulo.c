//Criado por: Bruno Santos da Costa.

#include <stdio.h>

main(){
	float raio,area;
	printf("Entre com Raio do Circulo:\n");
	scanf("%f", &raio);
	area = 3.1416*(raio*raio);
	printf("\nA Área do Circulo é %.2f\n\n", area);
}
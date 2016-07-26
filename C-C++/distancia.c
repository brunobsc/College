//Criado por: Bruno Santos da Costa.

#include <stdio.h>
#include <math.h>

main(){
	float x1,x2,y1,y2,dist;
	printf("Entre com o valor X do 1º Plano:\n");
	scanf("%f", &x1);
	printf("Entre com o valor Y do 1º Plano:\n");
	scanf("%f", &y1);
	printf("Entre com o valor X do 2º Plano:\n");
	scanf("%f", &x2);
	printf("Entre com o valor Y do 2º Plano:\n");
	scanf("%f", &y2);
	dist = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	printf("A distância é de %.2f\n\n", dist);
}
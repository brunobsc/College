//Criado por: Bruno Santos da Costa.

#include <stdio.h>

main(){
	int b,v,z,r;
	printf("Haverá quantos BOIS?\n");
	scanf("%d",&b);
	printf("Haverá quantas VACAS?\n");
	scanf("%d",&v);
	printf("Haverá quantos BEZERROS?\n");
	scanf("%d",&z);
	r=(b*3)+(v*4)+(z*6);
	printf("Você precisará de %d alqueires.\n\n", r);
}
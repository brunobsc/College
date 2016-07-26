//Criado por: Bruno Santos da Costa.

#include <stdio.h>
#include <math.h>

main(){
	int hora,min,seg;
	printf("Insira os SEGUNDOS para a conversão em hora:minuto:segundo:\n");
	scanf("%d", &seg);
	hora = (seg/3600);
	min = (seg%3600)/60;
	seg = seg%60;
	printf("\n%.2d:%.2d:%.2d\n\n", hora,min,seg);
}
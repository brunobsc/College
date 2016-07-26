//Criado por: Bruno Santos da Costa.

#include <stdio.h>

main(){
	int metro,m,c,d;
	printf("Insira o valor em METROS para conversão:\n");
	scanf("%d",&metro);
	m = metro*1000;
	c = metro*100;
	d = c/10;
	printf("É equivalente à:\n"
		   "%d Decimetros\n"
		   "%d Centimetros\n"
		   "%d Milimetros.\n\n", d,c,m);
}
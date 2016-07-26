//Criado por: Bruno Santos da Costa.

#include <stdio.h>
#include <math.h>

main(){
	printf("Insira a Altura e a Largura da parede respectivamente:\n");
	float altura,largura,litros,lata;
	scanf("%f %f", &altura, &largura);
	litros=(altura*largura)*2.5;
	lata=litros/8;
	printf("Você precisará de %.0f Latas de Tinta. \n\n", ceil(lata));
}
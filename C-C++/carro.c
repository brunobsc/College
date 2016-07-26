//Criado por: Bruno Santos da Costa.

#include <stdio.h>

main(){
	float cf,cc,pd,i;
	printf("Insira o Custo de Fábrica do carro:\n");
	scanf("%f", &cf);
	pd = cf*0.28; // pd é a Percentagem do Distribuidor.
	i =  cf*0.45; // i é o Imposto.
	cc = cf+(pd+i); // cc é o Custo ao Consumidor.
	//cc = ((cf*0.28)+(cf*0.45))+cf; // caso queira um codigo menos detalhado.
	printf("\nO Custo ao Consumidor será de R$ %.2f\n\n", cc);
}
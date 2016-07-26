//Criado por: Bruno Santos da Costa.

#include <stdio.h>

main(){
	int i;
	float gastos=0,restante=0;
	const char *despesas[] = { "Aluguel",
	                           "Telefone",
	                           "Luz",
	                           "Água",
	                           "Supermercado", 
	                           "Combustível",
	                           "Escolas", 
	                           "Diversos",
	                           NULL };
	const char *entrada[]={"Salário","Entrada Extra",NULL};

	for (i=0;despesas[i];++i){
		printf("Gasto com %s.\n", despesas[i]);
		scanf("%f", &gastos);
		restante-=gastos;
		//system("clear"); //No windows é | system("cls"); //OPCIONAL

	}
	for (i=0;entrada[i];++i){
		printf("%s.\n", entrada[i]);
		scanf("%f", &gastos);
		restante+=gastos;
		//system("clear"); //No windows é | system("cls"); //OPCIONAL

	}
	printf("Dinheiro Restante: R$%.2f\n\n", restante);
}
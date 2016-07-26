#include <stdio.h>

float acumular(char *prompt, const char **lista)
{
	float total=0.0;
	float entrada=0.0;
	int i;
	for (i=0;lista[i];++i) {
		printf("%s%s.\n", prompt, lista[i]);
		scanf("%f", &entrada);
		total+=entrada;
	}
	return total;
}

main(){
	int i;
	float gastos=0,valores=0;
	const char *despesas[] = { "Aluguel",
	                           "Telefone",
	                           "Luz",
	                           "Água",
	                           "Supermercado", 
	                           "Combustível",
	                           "Escolas", 
	                           "Diversos",
	                           NULL };
	const char *entrada[] = {  "Salário",
							   "Entrada Extra",
							   NULL };

	gastos = acumular("Gastos com ", despesas);
	valores = acumular("",entrada);
	
	printf("Dinheiro Restante: R$%.2f\n\n", valores-gastos);
}
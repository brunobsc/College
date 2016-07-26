#include <stdio.h>

main(){
	int dep,inss;
	float sal;
	printf("Insira o Salário Bruto R$ ");
	scanf("%f",&sal);
	if (sal < 0){
		printf("Valor Invalido.\n\n");
		return 0;
	}
	else if (sal < 300)
		inss=9;
	else if (sal > 700)
		inss=11;
	else
		inss=10;
	printf("Insira o número de Dependentes: ");
	scanf("%d",&dep);
	if (dep < 0){
		printf("Valor Invalido.\n\n");
		return 0;
	}
	sal=sal-(sal/100*inss)+(15*dep)+100;
	printf("\nO seu Salário Líquido será de R$ %.2f\n\n", sal);
}

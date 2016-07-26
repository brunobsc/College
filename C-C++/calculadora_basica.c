// Criado por Bruno Santos da Costa

#include <stdio.h>
#include <stdlib.h>

main(){
	char op;
	float num1,num2,res;
	start:
	printf("Insira uma das seguintes operacoes |+|-|/|*|: ");
	scanf("%c",&op);
	if (op != '+'&& op != '-'&& op != '/'&& op != '*'){
		printf("Operacao invalida, tente de novo: ");
		goto start;
	}
	printf("Insira o primeiro valor: ");
	scanf("%f",&num1);
	printf("Insira o segundo valor: ");
	scanf("%f",&num2);
	if (op=='+')
		res=num1+num2;
	else if (op=='-')
		res=num1-num2;
	else if (op=='/')
		res=num1/num2;
	else
		res=num1*num2;
	printf("O resultado de %g%c%g eh: %g\n\n", num1,op,num2,res);
}
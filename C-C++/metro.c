#include <stdio.h>
#include <math.h>

main(){
	int opcao,qtd;
	float pago,bilhete;
	char *tipo[30];
	printf("Selecione o tipo do bilhete:\n"""
		"""1 - Bilhete Unitário\n"""
		"""2 - Bilhete Duplo\n"""
		"""3 - Bilhete de 10 Viagens\n:");
	scanf("%d",&opcao);
	if (opcao == 1){
		bilhete=1.30;
		*tipo="Unitário";
	}
	else if (opcao == 2){
		bilhete=2.60;
		*tipo="Duplo";
	}
	else if (opcao == 3){
		bilhete=12.00;
		*tipo="de 10 Viagens";
	}
	else{
		printf("Opção Inválida.\n\n");
		return 0;
	}
	printf("Insira valor recebido pelo passageiro R$");
	scanf("%f",&pago);
	qtd=trunc(pago/bilhete);
	pago=pago-(qtd*bilhete);
	printf("\nVocê dará %d Bilhete %s e R$:%.2f de troco.\n\n\n",qtd,*tipo,pago);
}

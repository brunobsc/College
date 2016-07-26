#include <stdio.h>
#include <stdlib.h>

main(){
	char t;
	printf("Escolha a opção referente ao Turno que o aluno estuda:\n"""
		"""M - Matutino\n"""
		"""V-Vespertino\n"""
		"""N-Noturno\n:");
	scanf("%c", &t);
	if (t == 'm' || t == 'M')
		printf("Bom Dia!\n\n");
	else if (t == 'v' || t == 'V')
		printf("Boa Tarde!\n\n");
	else if (t == 'n' || t == 'N')
		printf("Boa Noite!\n\n");
	else
		printf("Valor Inválido!\n\n");

	//system("PAUSE");
}

#include <stdio.h>
#include <stdlib.h>

main(){
	char t;
	printf("Escolha a opção referente ao Turno que o aluno estuda:\n"""
		"""M - Matutino\n"""
		"""V - Vespertino\n"""
		"""N - Noturno\n:");
	t = getche();
	//t = getchar(); //LINUX
	switch(t){
		case 'M':
		case 'm':
			printf("\nBom Dia!\n\n");
		break;

		case 'V':
		case 'v':
			printf("\nBoa Tarde!\n\n");
		break;

		case 'N':
		case 'n':
			printf("\nBoa Noite!\n\n");
		break;

		default:
			printf("\nValor Inválido!\n\n");
		break;
	}
	//system("PAUSE");
}

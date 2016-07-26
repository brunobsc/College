#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
	char nome[14];
	int tam_sem_newline;
	start:
	__fpurge(stdin);
	//fflush(stdin); -- WINDOWS
	printf("Insira um nome de no maximo 10 caracteres\n: ");
	fgets(nome,13,stdin);
	tam_sem_newline=(strlen(nome)-1);
	if (tam_sem_newline>10){
		printf("\nTamanho maximo excedido, tente novamente.\n");
		goto start;
	}
	else {
		printf("OK! - O nome \"%.*s\" tem %d caracteres.\n\n", tam_sem_newline, nome ,tam_sem_newline);
	}
}
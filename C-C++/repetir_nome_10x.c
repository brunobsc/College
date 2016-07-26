#include <stdio.h>
#include <stdlib.h>

int main(){
	char nome[50];
	int i;
	printf("Insira o nome para a repeticao.\n: ");
	fgets(nome,49,stdin);
	for(i=0;i<10;++i)
	{
		printf("%s", nome);
	}
}

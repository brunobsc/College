//Criado por: Bruno Santos da Costa

#include <stdio.h>
#include <stdlib.h>

main(){
	char nome[5][50];
	int qtd=5,i,idade[5];
	float media=0;

	for(i=0;i<qtd;i++){
		system("clear");
		printf("Insira o Nome do %d aluno: ",i+1);
		//scanf("%49[^\n]s", nome[i]);
		fgets(nome[i],50,stdin);
		printf("Insira a Idade do %d aluno: ",i+1);
		scanf("%d%*c",&idade[i]);
		media=+idade[i];
	}
	media=media/qtd;
	system("clear");
	printf("A media da idade dos alunos abaixo eh de: %.2f\n", media);
	for(i=0;i<qtd;++i){
		printf("%s\n", nome[i]);
	}
}
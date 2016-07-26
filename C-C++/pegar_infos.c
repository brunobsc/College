#include <stdio.h>

main(){
	int i;
	const char *infos[]={"Nome","Idade","Endereço","Telefone","CEP",0};
	char inseridos[sizeof(infos)/sizeof(infos[0]) - 1][30];

	for (i=0;infos[i];++i) {
		printf("%s: ", infos[i]);	
		fgets(inseridos[i],30,stdin);		
		}
	printf("\nInformações Inseridas:\n");
	for(i=0;infos[i];++i){
		printf("%s:%s", infos[i],inseridos[i]);
	}
}
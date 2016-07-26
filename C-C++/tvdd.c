#include <stdio.h>
#include <string.h>

main(){
	int line[100],qtd=0;
	char check[50]={""};
	char funcao[50]={""}, *tabela[]={"/a/b/c","/a/bc",
	"/ab/c","/abc","a/b/c",
	"a/bc","ab/c","abc"},
	*tbinaria[]={"000","001","010","011","100","101","110","111"};
	for (qtd=0;qtd<8;qtd++){
		printf("%s=", tbinaria[qtd]);
		scanf("%d",&line[qtd]);

		if (line[qtd] == 1){
			if (strcmp(check,funcao) == 0){
			strcat(funcao, tabela[qtd]);
			}
			else {
				strcat(funcao, " + ");
				strcat(funcao, tabela[qtd]);
			}
		}

	}
	printf("\nS = %s \n\n", funcao);
}

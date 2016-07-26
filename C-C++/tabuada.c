//Criado por: Bruno Santos da Costa.

#include <stdio.h>

main(){
	int n,i;
	while(1){
		printf("\nInsira o numero que deseja ver a tabuada:\n");
		scanf("%d", &n);
		system("clear");
		if (n>0){
			for (i=1;i<10;++i){
				printf("%d x %d = %d\n", i,n,i*n);
			}
		}
		else{
			printf("Numero Inválido.\n\n");
		}
	}
}
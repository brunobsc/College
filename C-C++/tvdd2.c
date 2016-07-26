#include <stdio.h>
#include <string.h>
#include <math.h>


int v[64],bit,n,j;
int vars=3; /*Insira a quantidade de variaveis - OPCIONAL*/

main(){
	printf("Insira a quantidade de variais: ");
	scanf("%d",&vars);
	rodar();
}



rodar(){
	bit=pow(2,vars);

	for(n=0;n<bit;n++){
		show();
		scanf("%d",&v[n]);
	}

	for(n=0;n<bit;n++){
		get();

	}
	printf("\n\n");
}




show(){
	int x;
	for(x=vars-1;x>=0;x--){
		printf("%d", (n >> x) & 1);
		}
	printf(" =");
}

get(){
	int ok,i,plus,x;
	char check;
	if(v[n] == 1){
		plus++;
		if (plus>1){
			printf(" + ");
			plus--;
			}
		for(x=vars-1;x>=0;x--){
			ok = (n >> x) & 1;
			check = 97+(char) x;
			if (ok == 1){
				printf("%c", check);
			}
			else{
				printf("/%c", check);
			}
		}
	}
}


kmap(){
	int s[50]={0};
	for(n=0;n<bit;n++){
		if(v[n]==1){
			s[n]=n;
			printf("S%d %d\n",n, s[n]);
		}
	}
}
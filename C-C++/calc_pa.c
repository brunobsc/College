#include <stdio.h>

main(){
	int i=1,s=0,a=4;
	for(;a<109;i++){
		a = a+i;
		s = s+a;
	}
	printf("Valor da Soma: %d\n\n", s);
}
#include <stdio.h>

main(){
	int a;
	scanf("%d", &a);
	int res = a/2;
	int step = res;
	for(;;) {
	step /= 2;
	if (!step) step=1;
	long int tmp = res*res;
	long int tmp1 = tmp+2*res+1;
	if (tmp <= a && tmp1 > a )
	{
	  break;
	}
	if (tmp<a) res+=step;
	if (tmp>a) res-=step;
	}
	printf("%d\n", res);
}

#include <stdio.h>

main(){
	int i,total_notas=3;
	float notas[total_notas],media=0.0f;
	for(i=0;i<total_notas;++i){
		printf("Insira a NOTA %d: ",i+1);
		scanf("%f",&notas[i]);
		media=media+notas[i];
	}
	media=media/total_notas;
	printf("\nA MÉDIA das notas é %.2f\n", media);
	if (media >= 7)
		printf("Você foi APROVADO.\n\n");
	else if (media < 4)
		printf("Você foi REPROVADO.\n\n");
	else
		printf("Você fará a PROVA FINAL.\n\n");
}

#include <stdio.h>


	int j,i,qtd,idade,mulheres=0,hmais40=0,menos21=0,qtd=15;
	char sexo;

main(){
	for(j=0;j<qtd;j++){
		for(i=0;;i++){
			if (i>0){
				printf("Idade Invalida.\n");
			}
			printf("\nInsira a idade da %d pessoa: ",j+1);
			scanf("%d",&idade);
			if (idade>=0 && idade<=150){
				break;
			}
		}
		for(i=0;;i++){
			if (i>0){
				printf("Sexo Invalido.\n\n");
			}
			printf("Insira o sexo da %d pessoa: ",j+1);
			scanf("%s",&sexo);
			if (sexo=='f' || sexo=='F' || sexo=='m' || sexo=='M'){
				break;
			}
		}
		if (sexo=='f' || sexo=='F')
			mulheres++;
		if ((idade>40) && (sexo=='m' || sexo=='M'))
			hmais40++;
		if (idade<21)
			menos21++;
	}
	printf("\n\nNumero de MULHERES: %d\n"
		"Numero de HOMENS com MAIS de 40 anos: %d\n"
		"Numero de pessoas com MENOS de 21 anos: %d\n\n",mulheres,hmais40,menos21);
}
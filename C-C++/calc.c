#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	// Variaveis com valores recebidos do usuario
	int val1,val2;
	// Variavel com o resultado calculado
	int res;
	// Variavel com a operacao desejada recebida pelo usuario
	char op;
	system("title CALCULADORA v1"); // Define o titulo do programa na janela.
	// Desenha o cabecalho
	printf("\t\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd"
			"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\n"
           "\t\xba C A L C U L A D O R A \xba\n"
           "\t\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd"
			"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\n\n" );
	printf("(+) - Soma\n(-) - Subtracao\n(*) - Multiplicacao\n"
		   "(/) - Divisao\n(E) - Exponenciacao\n(R) - Raiz Quadrada\n"
		   "(P) - Porcentagem\n(S) - Sair\nOpcao: ");
	/* Recebe o caracter do teclado e o
	coloca dentro da variavel "op". */
	op = getche();
	switch(op){
		/* Operação de Soma, iniciada ao pressionar o caracter '+'.
		Recebe os valores digitado pelo usuário, realiza o calculo e
		mostra o resultado da operação. */
		case '+':
			printf("\n\n\tS o m a\n\n");
			printf("Primeiro Valor: ");
			scanf("%d",&val1);
			printf("Segundo Valor: ");
			scanf("%d",&val2);
			res = val1+val2;
			printf("\n%d + %d = %d\n\n", val1,val2,res);
			break;
		/* Operação de Subtração, iniciada ao pressionar o caracter '-'.
		Recebe os valores digitado pelo usuário, realiza o calculo e
		mostra o resultado da operação. */
		case '-':
			printf("\n\n\tS u b t r a c a o\n\n");
			printf("Primeiro Valor: ");
			scanf("%d",&val1);
			printf("Segundo Valor: ");
			scanf("%d",&val2);
			res = val1-val2;
			printf("\n%d - %d = %d\n\n", val1,val2,res);
			break;
		/* Operação de Multiplicação, iniciada ao pressionar o caracter '*'.
		Recebe os valores digitado pelo usuário, realiza o calculo e
		mostra o resultado da operação. */
		case '*':
		printf("\n\n\tM u l t i p l i c a c a o\n\n");
		printf("Primeiro Valor: ");
		scanf("%d",&val1);
		printf("Segundo Valor: ");
		scanf("%d",&val2);
		res = val1*val2;
		printf("\n%d * %d = %d\n\n", val1,val2,res);
	break;
		/* Operação de Divisão, iniciada ao pressionar o caracter '/'.
		Recebe os valores digitado pelo usuário, realiza o calculo e
		mostra o resultado da operação. */
		case '/':
		printf("\n\n\tD i v i s a o\n\n");
		printf("Primeiro Valor: ");
		scanf("%d",&val1);
		printf("Segundo Valor: ");
		scanf("%d",&val2);
			/*Caso o divisor seja 0 o programa mostrará a
			mensagem abaixo e encerrará. */
		if (val2 == 0) {
			printf("\nErro divisao por zero.\n\n\n");
			break;
		}
		res = val1/val2;
		printf("\n%d / %d = %d\n\n", val1,val2,res);
	break;
		/* Operação de Exponenciação, iniciada ao pressionar o caracter 'E'ou 'e'.
		Recebe os valores digitado pelo usuário, realiza o calculo e
		mostra o resultado da operação. */
		case 'E':
		case 'e':
		printf("\n\n\tE x p o n e n c i a c a o\n\n");
		printf("Base: ");
		scanf("%d",&val1);
		printf("Expoente: ");
		scanf("%d",&val2);
		res = pow(val1,val2);
		printf("\n%d elevado a %d = %d\n\n\n", val1,val2,res);
	break;
		/* Operação de Raiz Quadrada, iniciada ao pressionar o caracter 'R'ou 'r'.
		Recebe os valores digitado pelo usuário, realiza o calculo e
		mostra o resultado da operação. */
		case 'R':
		case 'r':
		printf("\n\n\tR a i z  Q u a d r a d a\n\n");
		printf("Valor: ");
		scanf("%d",&val1);
		res = sqrt(val1);
		printf("\nA Raiz Quadrada de %d = %d\n\n\n", val1,res);
	break;
		/* Operação de Porcentagem, iniciada ao pressionar o caracter 'P'ou 'p'.
		Recebe os valores digitado pelo usuário, realiza o calculo e
		mostra o resultado da operação. */
		case 'P':
		case 'p':
		printf("\n\n\tP o r c e n t a g e m\n\n");
		printf("Valor: ");
		scanf("%d",&val1);
		printf("Porcentagem: ");
		scanf("%d",&val2);
		res = (val1/100) * val2;
		printf("\n%d %% de %d = %d\n\n", val2,val1,res);
	break;
		/* Função Sair, iniciada ao pressionar o caracter 'S'ou 's'.
		Encerra o Programa com a mensagem abaixo. */
		case 'S':
		case 's':
		printf("\n\nPrograma Finalizado.\n\n\n");
	break;
	default:
		/* Aqui é a resposta padrão do programa caso nenhum dos
		caracteres acima for pressionado. */
		printf("\n\nOpcao Invalida.\n\n\n");
	}
	/* Mantem o programa aberto ate que o usuario
	pressione uma tecla. */
	system("PAUSE"); 
}

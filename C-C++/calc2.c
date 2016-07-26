#include <stdio.h>
#include <stdlib.h>


main(){
	// Variaveis com valores recebidos do usuario
	int val1,val2;
	// Variavel com o resultado calculado
	int res;
	// Variavel com a operacao desejada recebida pelo usuario
	char op;
	system("title CALCULADORA v2"); // Define o titulo do programa na janela.
	//Muda cor do prompt
	system("color 1E");
	do {
		//Limpa a Tela
		system("cls");
		// Desenha o cabecalho
		printf("\t\t\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd"
				"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\n"
	           "\t\t\xba C A L C U L A D O R A \xba\n"
	           "\t\t\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd"
				"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\n\n" );
		printf("(+) - Soma\t\t\t(P) - Porcentagem\n(-) - Subtracao\t\t\t(F) - Fatorial\n"
				"(*) - Multiplicacao\t\t(B) - Conversao Binario -> Decimal\n"
			   "(/) - Divisao\t\t\t(D) - Conversao Decimal -> Binario\n"
			   "(E) - Exponenciacao\t\t(S) - Sair\n(R) - Raiz Quadrada\n"
			   "\nOpcao: ");
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
				{
				int i;
				printf("\n\n\tE x p o n e n c i a c a o\n\n");
				printf("Base: ");
				scanf("%d",&val1);
				printf("Expoente: ");
				scanf("%d",&val2);
				res=1;
				if (val1 == 0 && val2 == 0) {
					printf("\nErro: Resultado Indefinido.\n\n\n");
					break;
				}
				/*Enquando o i for menor que o expoente, faça: resutado=base*resultado anterior */
				for(i=0;i<val2;++i){
					res=val1*res;
				}
				printf("\n%d elevado a %d = %d\n\n\n", val1,val2,res);
				}
			break;

			/* Operação de Raiz Quadrada, iniciada ao pressionar o caracter 'R'ou 'r'.
			Recebe os valores digitado pelo usuário, realiza o calculo e
			mostra o resultado da operação. (BUSCA BINARIA) */
			case 'R':
			case 'r':
				printf("\n\n\tR A I Z  Q U A D R A D A\n\n");
				printf("Valor: ");
				scanf("%d", &val1);
				/* Testar a metade do proprio numero como sua raiz */
				int res = val1/2;
				/* Inicializar o passo de busca */
				int step = res;
				for(;;) {
					step /= 2;
					if (!step) step=1;
					//(res+1)**2
					long int tmp = res*res;
					long int tmp1 = tmp+2*res+1;
					if (tmp <= val1 && tmp1 > val1 ){
						  break;
					}
					if (tmp<val1) res+=step;
					if (tmp>val1) res-=step;
				}
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

			case 'D':
			case 'd':
				{
				int x,bit;
				printf("\n\n\tDECIMAL PARA BINARIO\n\n");
				printf("Digite o numero em decimal: ");
				scanf("%d",&val1);
				// (<<) é a mesma coisa que multiplicar por 2
				for (bit=1;val1>=(1<<bit);++bit){}
				printf("Equivalente em Binario: ");
				// (>>) é a mesma coisa que dividir por 2
				for(x=bit-1;x>=0;x--){
					printf("%d", (val1 >> x) & 1);
					}
				printf("\n\n");
				}
			break;

			case 'B':
			case 'b':
				{
				char val[32];
				int i;
				printf("\n\n\tBINARIO PARA DECIMAL\n\n");
				printf("Digite o numero em Binario: ");
				// %31s é a definição para não receber mais que isso 
				scanf("%31s",val);
					res=0;
			        for(i=0;val[i];++i) {
			        // tratamento de erro: Se tiver outro caracter que não seja 0 ou 1, não aceitar
					if (val[i] != '1' && val[i] != '0') {
						printf("Entrada invalida\n");
			            res=0;
						break;
			        	}
			        	/* (val[i]=='1') significa que se isso for verdade seu resultado será 1, caso contrario será 0. */
			        	res=res*2+(val[i]=='1');
			        }
				printf("Equivalente em Decimal: %d\n\n\n",res);
				}
			break;

			case 'F':
			case 'f':
				{
				int i;
				res=1;
				printf("\n\n\tF A T O R I A L\n\n");
				printf("\nValor: ");
				scanf("%d",&val1);
				// i pega o valor da variavel e decrementa 1, multiplica pelo valor de i no momento... até a i chegar em 1.
				for(i=val1;i>1;--i)
					res *= i;
				printf("O Fatorial de %d = %d\n\n\n", val1,res);
				}
			break;

			/* Mostra a Mensagem abaixo e por op ser S ou s, ele sairá do laço... melhor descrito na ultima linha. */
			case 'S':
			case 's':
				printf("\n\nPrograma Finalizado.\n\n\n");
			break;

			/* Aqui é a resposta padrão do programa caso nenhum dos
			caracteres acima for pressionado. */
			default:			
			printf("\n\nOpcao Invalida.\n\n\n");
		}
	/* Mantem o programa aberto ate que o usuario
	pressione uma tecla. */
	system("PAUSE");
	/* O programa só sairá do loop(laço) caso op(opção) seja S ou s. */
	} while (op!='S' && op!='s');
}

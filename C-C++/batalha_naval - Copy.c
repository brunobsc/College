/* Criado por: Bruno Santos da Costa */


/* O programa abaixo simula um tabuleiro 6x6 (36 casas; ou seja de 1 a 36).
O usuario podera errar no maximo 3 vezes.
Para ganhar o usuario devera acertar todos os 6 numeros gerados. */


#include <stdio.h>
#include <stdlib.h>


int m[36],k=0,l=0,n=0,r[6][6];

int numeros_aleatorios(){
    int i,j;
    for(i=0;i<1;i++){
            for(j=0;j<6;j++){
                r[i][j] = rand() % 36 + 1;
              //  m[36-r[i][j]]=r[i][j];
              //  printf("%d RANDOM:%d\n",n=n+1,r[i][j]); /* Debugar numero gerados */
        }
    }
};

int procurar(){
    int i,j;
        for(i=0;i<1;i++){
                for(j=0;j<6;j++){
                   if (n == r[i][j]){

                    m[36-r[i][j]]=r[i][j];
                    tabuleiro();
                    r[i][j] = 0;
                    l++;
                    printf("Numero Correto.\n-----------------------\n");
                    return 0;
                    }
                }
            }
    tabuleiro();
    printf("Numero Incorreto.\n-----------------------\n");

    k++;
};

int tabuleiro(){
    int j=0;
    printf("\n           TABULEIRO\n");
    for (j=0;j<36;j++){
        printf("%.2d    ",m[j]);
        if (j==5 || j==11 || j==17 || j==23 || j==29 || j==35){
            printf("\n\n");
        }
    }
};

int main(){
    srand(time(NULL));
    numeros_aleatorios();
    tabuleiro();
        for(;k<3;){
            if (l<6){
                printf("\nInsira um numero:\n");
                scanf("%d",&n);
                system("cls");
                procurar();
                printf("Acertos: %d/6\n-----------------------\n",l);
                }
            else{
              system("cls");
              tabuleiro();
              printf("Acertos: %d/6\n-----------------------\n",l);
              printf("\nParabens!!!\n\n");
              return 0;
            }
        }
    system("cls");
    tabuleiro();
    printf("Acertos: %d/6\n-----------------------\n",l);
    printf("\nTentativas Excedidas.\n\n");
};

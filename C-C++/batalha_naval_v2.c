/* Criado por: Bruno Santos da Costa */


/* O programa abaixo simula um tabuleiro 6x6 (36 casas; ou seja de 1 a 36).
O usuario podera errar no maximo 3 vezes.
Para ganhar o usuario devera acertar todos os 6 numeros gerados. */


#include <stdio.h>
#include <stdlib.h>


int p[36];t=0,m[36],k=0,l=0,n=0;

int numeros_aleatorios(){
    int j;
        for(j=0;j<6;j++){
            t = rand() % 36 + 1;
            m[t] = t;
            //  m[36-r[i][j]]=r[i][j];
            //  m[r[i][j]-1]=r[i][j];
           // printf(" RANDOM:%d\n",m[t]); /* Debugar numero gerados */
    }
};

int procurar(){
    int j;

            for(j=0;j<6;j++){
               if (n == m[n]){
                l++;
                p[n]=n;
                printf("Numero Correto.\n-----------------------\n");
                tabuleiro();
                m[n]=0;
                return 0;
                }
            }
    printf("Numero Incorreto.\n-----------------------\n");
    tabuleiro();

    k++;
};

int tabuleiro(){
    int j=0;
    system("cls");
    printf("\n           TABULEIRO\n");
    for (j=0;j<36;j++){
      //  p[j]=m[j];
      //  p[m[j]-1]=m[j];
        printf("%.2d    ",p[j+1]);
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

/* Criado por: Bruno Santos da Costa */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

void getDouble(double *f, const char *prompt)
{
  char buffer[128];
  double n;
  char *endptr;
  do {
    if (prompt) { printf("%s",prompt); }
    scanf("%127s",buffer);
    n=strtod(buffer,&endptr);
  } while (*endptr != 0 || errno != 0);
  *f=n;
}

int main()
{
    double a[20];
    int i;
    for(i=0;i<20;i++)
    {
        char prompt[128];
        snprintf(prompt,128,"Entre com o item %i: ",i+1);
        getDouble(&a[i],prompt);
    }
    printf("\n-------------------------------------\nRESULTADO:\n");
    for(i=0;i<20;i++)
    {
        printf("\nValor do item %i adicionado 10 eh:  %.10G\n",i+1,a[i]+10);
    }
    exit(0);
}

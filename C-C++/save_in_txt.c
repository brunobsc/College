/* Criado por: Bruno Santos da Costa */


#include <stdio.h>
#include <math.h>

float x, y, ry;
int timer = 0;
const char *texto;

main()
{
    FILE *f = fopen("file.txt", "w");
    if (f == NULL)
    {
        printf("Error opening file!\n");
        printf("bug");
    }

    printf("Insira o texto aqui:");
    scanf("%c", &texto);
    fprintf(f,"%c", texto);

    fclose(f);
}

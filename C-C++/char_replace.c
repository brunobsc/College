#include <stdio.h>
#include <string.h>

main(){
    char frase[]={"as mina aqui do bailaa"};
    int i; 
    for (i=0;i<frase[i];i++) {
        if (frase[i]=='a'||frase[i]=='A'){
            frase[i]='@';
        }
    }
    printf("%s",frase);
}
#include <stdio.h>
#include <string.h>

//char info[]="C A L C U L A D O R A";
void titulo(char*t);
main (){

titulo("C A L C U L A D O R A");



}

void titulo(char*t){

    int i;
    printf("\t\xc9");
    for(i=0;i<strlen(t)+2;++i){
        printf("\xcd");
    }
    printf("\xbb\n\t\xba %s \xba\n\t\xc8",t);
    for(i=0;i<strlen(t)+2;++i){
        printf("\xcd");
    }
    printf("\xbc\n");
}

#include <stdio.h>
#include <string.h>

int main(){
    char string[100] = "tuewhfg erfh erf . we te .ry ry r.ewy wry t.rw" ;
    printf("Enter the string - ");
    //fgets(string,100,stdin);

    int lines=0;
    char *token = strtok(string,".");

    while (token !=NULL){
        token = strtok(NULL,".");
        lines++;
    }
    printf("The number of lines in the given text is %d.",lines);

}


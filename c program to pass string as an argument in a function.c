#include <stdio.h>

int main(){
    void bro(char *string);
    char string[10] = "fuck you";
    bro(string);
}

void bro(char *string){
    printf("this is the string that you gave - ");
    printf("%s",string);
}
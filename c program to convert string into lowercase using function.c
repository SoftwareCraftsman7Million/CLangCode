#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    void change_case(char *string);
    char string[] = "BRO";
    change_case(string);
}

void change_case(char *string){
    char string2[strlen(string)];
    for (int i = 0;i< strlen(string);i++){
        string2[i] = tolower(string[i]);
    }
    printf("%s",string2);
}
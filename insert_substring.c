#include <stdio.h>
#include <string.h>

int main(){
    void add_string(char *,int,char *);
    char string[10] = "string";
    int pos = 2;
    char sub[10] = "bro";
    add_string(string,pos,sub);
}

void add_string(char *string, int pos,char *sub){
    
    char first_string[strlen(string)+strlen(sub)];
    int j = 0;
    for (int i = 0;i<pos;i++){
        first_string[i] = string[i];
        j++;
    }

    for (int i = 0;i < strlen(sub); i++){
        first_string[j] = sub[i];
        j++;
    }

    for (int i = pos;i < strlen(string);i++){
        first_string[j] = string[i];
        j++;
    }
    first_string[j] = '\0';
    printf("the NEW STRING IS THIS - %s",first_string);



}
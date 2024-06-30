#include <stdio.h>
#include <string.h>

int main(){
    void remove_string(char *string, int n, int pos);
    char string[100] = "stringtringbro";
    int n = 8;
    int pos = 3;

    remove_string(string,n,pos);
}

void remove_string(char *string, int n, int pos){
    char new_string[strlen(string)];
    int j = 0;

    for (int i = 0; i < pos; i++){
        new_string[j] = string[i];
        j++;
    }

    for (int i = pos+n;i < strlen(string);i++){
        new_string[j] = string[i];
        j++;
    }
    new_string[j] = '\0';
    printf("%s",new_string);
}
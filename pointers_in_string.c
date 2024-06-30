#include <stdio.h>
#include <string.h>

int main(){
    char string[10] = "string";
    char *pointer;

    pointer = &string[0];

    for (int i = 0; i < strlen(string); i++){
        printf("character %c has address %ld\n",*pointer, pointer);
        pointer ++;
    }
}
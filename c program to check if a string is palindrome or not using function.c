#include <stdio.h>
#include <string.h>
int main(){
    char string1[100],string2[100];
    printf("Enter string 1 - ");
    scanf("%s",string1);
    
    void reverse(char string[]);
    reverse(string1);
    
}

void reverse(char string[100]){
    char string2[100];
    int size = strlen(string);
    
    for (int i = 0;i<size;i++){
        string2[i] = string[size-i-1];
    }
    string2[size] = '\0';
    
    if (strcmp(string,string2) == 0){
        printf("The given string is palindrome.");
    }
    else {
        printf("The given string is not a palindrome.");
    }
}




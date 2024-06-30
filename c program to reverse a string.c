#include <stdio.h>
#include <string.h>
int main(){
    char string1[100],string2[100];
    printf("Enter string 1 - ");
    scanf("%s",string1);
    int size = strlen(string1);
    
    for (int i = 0;i<size;i++){
        string2[i] = string1[size-i-1];
    }
    string2[size] = '\0';
    printf("%s",string2);
    
}




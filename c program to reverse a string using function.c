#include <stdio.h>
#include <string.h>
int main()
{
    void reverse(char *);
    char string[100];
    printf("Enter the string - ");
    fgets(string,100,stdin);
    reverse(string);
}

void reverse(char *string){
    int size = strlen(string);
    char string2[size];
    for (int i = 0;i < size;i++){
        string2[i] = string[size-i-1];
    }
    printf("%s",string2);
}
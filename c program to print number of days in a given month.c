#include <stdio.h>
#include <string.h>

int main(){
    
    char string[10];
    printf("Enter a month name - ");
    scanf("%s",string);
    
    if (strcmp(string,"january") || strcmp(string,"march") || strcmp(string ,"may") || strcmp(string,"july") || strcmp(string,"august") || strcmp(string,"october") || strcmp(string,"december")){
        printf("The month has 31 days.");
    }
    else if (strcmp(string , "february")){
        printf("The month has 28 or 29 days depending upon the year.");
    }
    else {
        printf("The month has 30 fucking days.");
    }
    
}

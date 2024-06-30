#include <stdio.h>
#include <string.h>
int main(){
    char string1[100],string2[100];
    printf("Enter string 1 - ");
    scanf("%s",string1);
    printf("Enter string 2 - ");
    scanf("%s",string2);
    
    strcat(string1,string2);
    printf("The concatenate string is %s.",string1);
}

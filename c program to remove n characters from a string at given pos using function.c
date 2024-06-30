#include <stdio.h>
#include <string.h>
int main(){
    void delete_char(char *string,int n, int pos);
    char string[100]; int pos,n;
    printf("Enter the string - ");
    gets(string);
    printf("Enter the position and number of characters - ");
    scanf("%d %d",&pos,&n);
    delete_char(string,n,pos);
}

void delete_char(char *string,int n, int pos){
    char string1[100] ;
    int j = 0;
    int string_size = strlen(string);
    for (int i = 0;i<pos ; i++){
        string1[j] = string[i];
        j = j+1;
    }
    
    for (int i = pos+n; i <= string_size;i++){
        string1[j] = string[i];
        j=j+1;
    }
    
    printf("%s",string1);
}

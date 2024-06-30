#include <stdio.h>
#include <string.h>
int main(){
    void insert_string(char *string,int pos, char *substring);
    char string[100], substring[100]; int pos;
    
    printf("Enter string - ");
    fgets(string,100,stdin);
    printf("Enter substring - ");
    fgets(substring,100,stdin);
    
    string[strcspn(string, "\n")] = '\0';
    substring[strcspn(substring, "\n")] = '\0';
    
    printf("Enter position - ");
    scanf("%d",&pos);
    
    insert_string(string,pos,substring);
}

void insert_string(char *string,int pos,char *substring){
    
    int j = 0;
    int size_string = strlen(string);
    int size_substring = strlen(substring);
    char string2[100] ;
    
    for (int i = 0; i < pos ; i++){
        string2[j] = string[i];
        j++;
    }
    
    for (int i = 0; i < size_substring;i++){
        string2[j] = substring[i];
        j=j+1;
    }
    
    for (int i = pos;i < size_string;i++){
        string2[j] = string[i];
        j=j+1;
    }
    string2[j] = '\0';
    printf("%s",string2);
}
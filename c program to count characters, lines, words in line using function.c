#include <stdio.h>
#include <string.h>
int main(){
    void count_lines(char *string),count_words(char *string),count_chars(char *string);
    char string[100];
    printf("Enter the goddamn string - ");
    gets(string);
    char string2[100],string3[100];
    strcpy(string2,string);
    strcpy(string3,string);
    count_lines(string);
    count_words(string2);
    count_chars(string3);
}

void count_lines(char *string){
    int line_count = 0;
    char *token = strtok(string,".");
    while (token !=NULL){
        token = strtok(NULL,".");
        line_count = line_count +1;
    }
    printf("number of lines are - %d\n",line_count);
}

void count_words(char *string){
    int word_count = 0;
    char *token = strtok(string," ");
    while (token !=NULL){
        token = strtok(NULL," ");
        word_count = word_count +1;
    }
    printf("number of words are - %d\n",word_count);
}

void count_chars(char *string){
    int char_count = 0;
    for (int i = 0;i<strlen(string);i++){
        if ((string[i] == ' ') || (string[i] == '.')) {
            continue;
        }
        else {
            char_count = char_count + 1;
        }
    }
    printf("number of characters are - %d\n",char_count);
}
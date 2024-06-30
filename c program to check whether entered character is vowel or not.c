#include <stdio.h>

int main(){
    char ch[1];
    printf("Enter a character - ");
    scanf("%c",ch);
    
    if (*ch == 'a' || *ch == 'A' || *ch == 'e' || *ch == 'E' || *ch == 'o' || *ch == 'O' || *ch == 'i' || *ch == 'I' ||  *ch == 'u' || *ch == 'U'){
        printf("this a fucking vowel");
    }
    else {
        printf("this a fucking consonant");
    }
}

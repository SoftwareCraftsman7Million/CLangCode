#include <stdio.h>

int main(){
    int n = 5;
    int factorial(int);
    printf("%d",factorial(n));
}

int factorial(int n){
    if (n > 1){
        return n * factorial(n-1);
    }
    else {
        return 1;
    }
}
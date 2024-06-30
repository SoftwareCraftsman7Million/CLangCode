#include <stdio.h>

int main(){
    int combination(int,int),factorial(int);
    int n,r;
    printf("Enter the values of n and r - ");
    scanf("%d %d",&n,&r);
    printf("combination is %d",combination(n,r));
}

int combination (int n, int r){
    int factorial(int);
    return (factorial(n)/(factorial(n-r)*factorial(r)));
}

int factorial(int n ){
    int fact = 1;
    while (n > 0){
        fact = fact * n;
        n = n -1;
    }
    return fact;
}
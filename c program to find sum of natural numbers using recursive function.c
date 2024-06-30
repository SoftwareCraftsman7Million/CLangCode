#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Enter n - ");
    scanf("%d",&n);
    int summation(int);
    printf("Sum is %d.",summation(n));
    
}

int summation(int num){
    if (num<=1){
        return num;
    }
    return num + summation(num-1);
}
#include <stdio.h>

int main(){
    int a,b;
    printf("Enter any two numbers - ");
    scanf("%d %d",&a,&b);

    int sum = *(&a) + *(&b);
    printf("the sum is %d.",sum);
}
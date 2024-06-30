#include <stdio.h>
#include <math.h>
int main(){
    int range, reverse(int) ;
    printf("Enter the range - ");
    scanf("%d",&range);
    for (int i = 1;i<=range;i++){
        printf("The reverse of the number %d is %d.\n",i,reverse(i));
    }
}

int reverse(int num){
    int digit,sum = 0;
    while (num > 0){
        digit = num %10;
        sum = sum*10 + digit;
        num = num/10;
    }
    return sum;
}
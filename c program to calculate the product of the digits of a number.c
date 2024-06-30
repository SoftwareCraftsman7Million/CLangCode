#include <stdio.h>

int main(){
    int n,find_digit(int),product(int);
    printf("Enter any number - ");
    scanf("%d",&n);
    printf("The number of digits in this number is %d.\n",find_digit(n));
    printf("The product of digits in this number is %d.",product(n));
}

int find_digit(int num){
    int temp, count = 0;
    temp = num;
    while (temp > 0){
        temp = temp/10;
        count = count +1;
    }
    return count;
}

int product(int num){
    int find_digit(int),temp,digit,sum = 1;
    int size = find_digit(num);
    temp = num;
    while (temp > 0 ){
        digit = temp%10;
        sum = sum *digit;
        temp = temp/10;
    }
    return sum;
}

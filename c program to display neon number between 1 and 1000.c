#include <stdio.h>
#include <math.h>
int main()
{
    int range;
    printf("Enter a number - ");
    scanf("%d", &range);
    int check_neon(int);
    for (int i = 1;i<=range;i++){
        if (check_neon(i)){
            printf("The number %d is neon number.\n",i);
        }
        else {
            printf("The number %d is not a neon number.\n",i);
        }
    }
}

int check_neon(int num){
    int square = pow(num,2);
    int digit,sum = 0,temp;
    temp = square;
    while (temp > 0){
        digit = temp%10;
        sum = sum + digit;
        temp = temp/10;
    }
    if (num == sum){
        return 1;
    }
    else {
        return 0;
    }
}
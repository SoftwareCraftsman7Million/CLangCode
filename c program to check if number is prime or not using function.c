#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    int check_prime(int);
    printf("Enter any number - ");
    scanf("%d",&num);
    
    if (check_prime(num)){
        printf("Number is prime.");
    }
    else {
        printf("Number is not prime.");
    }
}

int check_prime(int num){
    int flag = 1;
    
    for (int i = 2;i<(pow(num,0.5));i++){
        if (num%i == 0){
            flag = 0;
            break;
        }
        else {
            flag = 1;
        }
    }
    return flag;
}
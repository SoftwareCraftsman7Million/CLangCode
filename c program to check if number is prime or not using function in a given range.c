#include <stdio.h>
#include <math.h>
int main()
{
    int upper,lower;
    int check_prime(int);
    printf("Enter lower and upper limit - ");
    scanf("%d %d",&lower,&upper);
    for (int i = lower;i <=upper;i++){
        if (check_prime(i)){
            printf("Number %d is prime.\n",i);
        }
        else {
            printf("Number %d is not prime.\n",i);
        }
    }
}

int check_prime(int num){
    int flag = 1;
    
    for (int i = 2;i<=(pow(num,0.5));i++){
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
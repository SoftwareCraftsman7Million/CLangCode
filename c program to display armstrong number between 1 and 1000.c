#include <stdio.h>
#include <math.h>
int main(){
    int range;
    printf("Enter the range - ");
    scanf("%d",&range);
    int check_arm(int);
    for (int i = 100;i<=range;i++){
        if (check_arm(i) == 1){
            printf("%d is armstrong.\n",i);
        }
    }
}

int check_arm(int num){
    int temp,digit,sum = 0,size , find_size(int);
    size = find_size(num);
    temp = num;
    while (temp > 0){
        digit = temp %10;
        sum = sum + pow(digit,size);
        temp = temp/10;
    }
    if (sum == num){
        return 1;
    }
    else {
        return 0;
    }
}

int find_size(int num){
    int count = 0;
    while (num > 0){
        num = num / 10;
        count = count +1;
    }
    return count;
}

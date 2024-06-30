#include <stdio.h>

int main(){
    int gcd(int,int);
    int n,r;
    printf("Enter the values of n and r - ");
    scanf("%d %d",&n,&r);
    printf("gcd is %d",gcd(n,r));
}

int gcd(int n,int r){
    int max_num = n>r?n:r;
    int max = 0;
    
    for (int i = 1;i <=max_num;i++){
        if ((n%i==0) && (r%i==0)){
            max = i;
        }
    }
    return max;
}
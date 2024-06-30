#include <stdio.h>

int main(){
    int k;
    printf("Enter number - ");
    scanf("%d", &k);
    
    int summ(int);
    printf("%d",summ(k));
}

int summ(int k){  
    if (k ==0){      
        return 1;    
    }
    else {
        return (k*summ(k-1));   
    }
}
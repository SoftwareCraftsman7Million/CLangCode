#include <stdio.h>

int main(){
    int k;
    printf("Enter number - ");
    scanf("%d", &k);
    
    int summ(int);
    printf("%d",summ(k));
}

int summ(int k){   // take input k
    if (k > 0){      // base condition involving k where k is greater than some number
        return (k+summ(k-1));    // return um of k with summ(k-1)
    }
    else {
        return 0;            // ele return 0 if condition not satisfied
    }
}
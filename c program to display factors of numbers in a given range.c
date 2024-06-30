#include <stdio.h>
#include <math.h>
int main(){
    void factors(int);
    int range;
    printf("Enter a range - ");
    scanf("%d",&range);
    for (int i = 1;i<=range;i++){
        factors(i);
        printf("\n");
    }
}

void factors(int num){
    int count = 0;
    for (int i = 1;i<=num;i++){
        if (num%i == 0){
            count = count +1;
        }
    }
    int j = 0;
    int list[count];
    for (int i = 1; i<=num;i++){
        if (num%i == 0){
            list[j] = i;
            j=j+1;
        }
    }
    printf("The factors of the number %d are - ",num);
    for (int i = 0;i < count;i++){
        printf("%d, ",list[i]);
    }
}
#include <stdio.h>
#include <math.h>
int main(){
    int size;
    printf("Enter size of the array - ");
    scanf("%d",&size);
    
    int array[size];
    printf("Enter the elements of the array - ");
    for (int i = 0;i < size;i++){
        scanf("%d",&array[i]);
    }
    
    int max = 0;
    
    for (int i = 0;i<size;i++){
        if (array[i] >= max){
            max = array[i];
        }
    }
    printf("The max number is %d.",max);
}
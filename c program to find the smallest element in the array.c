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
    
    int min = array[0];
    
    for (int i = 0;i<size;i++){
        if (array[i] <= min){
            min = array[i];
        }
    }
    printf("The min number is %d.",min);
}

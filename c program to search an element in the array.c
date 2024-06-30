#include <stdio.h>

int main(){
    int size;
    printf("Enter size - ");
    scanf("%d",&size);
    
    int array[size];
    printf("Enter the elements of the array - ");
    for (int i = 0;i < size;i++){
        scanf("%d",&array[i]);
    }
    
    int ele,index,flag = 0;
    printf("Enter element - ");
    scanf("%d",&ele);
    
    for (int i = 0;i < size;i++){
        if (array[i] == ele){
            flag = 1;
            index = i;
            break;
        }
    }
    
    if (flag == 1){
        printf("Element %d found at index %d.",ele,index);
    }
    else {
        printf("Element not found");
    }
}

#include <stdio.h>
#include <math.h>
int main(){
    int ele,size;
    printf("Enter the element that you want to remove and the size of the array - ");
    scanf("%d %d",&ele,&size);
    
    int array1[size];
    printf("Enter the elements - \n");
    for (int i = 0;i<size;i++){
        scanf("%d",&array1[i]);
    }
    
    int new[size];
    
    for (int i = 0;i< size;i++){
        if (array1[i] == ele){
            array1[i] = 0;
        }
        else {
            new[i] = array1[i];
        }
    }
    for (int i = 0;i<size;i++){
        if (array1[i] != 0){
            printf("%d ",new[i]);
        }
    }
}




#include <stdio.h>
int main(){
    int size;
    printf("Enter the size of the array - ");
    scanf("%d",&size);

    int arr[size] ;
    printf("Enter the elements of the array - \n");
    for (int i = 0; i < size; i++){
        printf("Enter the element %d - ",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i = 0;i < size; i++){
        for (int j = 0; j < i ; j++){
            if (arr[j] > arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++){
        printf("%d \n",arr[i]);
    }
}
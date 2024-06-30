#include <stdio.h>

int main(){

    int arr[6] = {12,23,34,45,56,67};
    int *j = &arr[0];
    for (int i = 0; i < 6; i++){
        printf("element %d has address %ld\n",*j,j);
        j++;
    }
}
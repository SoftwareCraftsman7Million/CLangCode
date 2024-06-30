#include <stdio.h>

int main(){
    int a,b,c;
    
    printf("Enter the values of a,b,c - ");
    scanf("%d %d %d",&a,&b,&c);
    
    int array[3] = {a,b,c};
    
    for (int i = 0; i < 3;i++){
        for (int j = 0;j < i ; j++){
            if (array[j] > array[i]){
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
    printf("The minimum number is %d.\n",array[0]);
    printf("The maximum number is %d.",array[2]);
    
}

#include <stdio.h>

int main(){
    void swap (int *,int *);
    int a,b;
    printf("Enter the values of a and b - ");
    scanf("%d %d",&a,&b);
    printf("The values of a and b before function is called - %d and %d\n",a,b);
    swap(&a,&b);
    printf("The values of a and b after function is called - %d and %d\n",a,b);
}

void swap(int *p,int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
    
}
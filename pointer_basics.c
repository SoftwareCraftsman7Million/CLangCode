#include <stdio.h>

int main(){

    int i = 12;
    int *j;
    printf("done using i");
    printf("address of variable i is - %ld.\n", &i);
    printf("value of variable i is - %d.\n", i);
    printf("value at address of variable i is - %d.\n", *(&i));
    
    j = &i;

    printf("\n");
    printf("done using j\n");
    printf("address of variable i is - %ld.\n", j);
    printf("value of variable i using pointer jis - %ld.\n", *j);

}
#include <stdio.h>

int main(){
    int a,b, op;
    printf("Enter number a and b - ");
    scanf("%d %d",&a,&b);
    
    printf("Enter 1 for addition, 2 for subtraction, 3 for product, 4 for division, 5 for modulus - ");
    scanf("%d",&op);
    
    switch (op){
        case 1: printf("The sum of the numbers is %d.",a+b);
        break;
        case 2: printf("The difference of the numbers is %dd.",a-b);
        break;
        case 3: printf("The product of the numbers is %d.",a*b);
        break;
        case 4: printf("The quotient of the two numbers is %.2f.",((float)a)/((float)b));
        break;
        case 5: printf("The modulus of the numbers is %d.",a%b);
        break;
    }
}

matrix addition and subtraction - 
#include <stdio.h>

int main()
{
    int rows,columns;
    printf("Enter the rows and columns - ");
    scanf("%d %d",&rows,&columns);
    
    int a[rows][columns],b[rows][columns];
    int add[rows][columns], subtract[rows][columns];
    
    printf("Enter the elements of the matrix a and b - \n");
    for (int i = 0;i< rows;i++){
        for (int j = 0;j < columns;j++){
            printf("Enter the element a%d%d - ",i+1,j+1);
            scanf("%d %d",&a[i][j], &b[i][j]);
        }
    }
    
    for (int i = 0;i< rows;i++){
        for (int j = 0;j < columns;j++){
            add[i][j] = a[i][j] + b[i][j];
            subtract[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("\n");
    printf("Addition of the matrices is - \n");
    for (int i = 0;i< rows;i++){
        for (int j = 0;j < columns;j++){
            printf("%d ",add[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Subtraction of the matrices is - \n");
    for (int i = 0;i< rows;i++){
        for (int j = 0;j < columns;j++){
            printf("%d ",subtract[i][j]);
        }
        printf("\n");
    }
}


matrix multiplication
#include <stdio.h>

int main(){
    int a[10][10],b[10][10],mul[10][10];
    int rows,columns;
    printf("enter the rows and columns - ");
    scanf("%d %d",&rows,&columns);
    
    printf("enter the elements of the first and second matrix - ");
    for (int i = 0;i < rows; i ++){
        for (int j = 0;j<columns;j++){
            scanf("%d %d",&a[i][j],&b[i][j]);
        }
    }
    
    for (int i = 0;i < rows; i ++){
        for (int j = 0;j<columns;j++){
            mul[i][j] = 0;
            for (int k = 0;k < columns;k++){
                mul[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    
    for (int i = 0;i < rows; i ++){
        for (int j = 0;j<columns;j++){
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
}




matrix transpose
#include <stdio.h>

int main(){
    int a[9][9],b[9][9],i,j;
    int size_of_matrix = 2;
    
    printf("Enter the matrices a - ");
    for (int  i = 0;i<size_of_matrix;i++){
        for (int j =0;j<size_of_matrix;j++ ){
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("Matrix a - ");
    printf ("\n");
    printf ("\n");
    for (int  i = 0;i<size_of_matrix;i++){
        for (int j =0;j<size_of_matrix;j++ ){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf ("\n");
    
    for (i = 0;i<size_of_matrix;i++){
        for (j = 0;j<size_of_matrix;j++){
            b[j][i] = a[i][j];
        }
    }
    
    printf("Matrix b (transpose) - ");
    printf ("\n");
    printf ("\n");
    for (int  i = 0;i<size_of_matrix;i++){
        for (int j =0;j<size_of_matrix;j++ ){
            printf("%d ", b[i][j] );
        }
        printf("\n");
    }
    printf ("\n");
    
    int flag = 1; // matrix is symmetric
    //checking if symmetric or not
    for (int  i = 0;i<size_of_matrix;i++){
        for (int j =0;j<size_of_matrix;j++ ){
            if (a[i][j] == b[i][j]){
                flag = 1;
            }
            else{
                flag = 0;
                break;
            }
        }
    }
    
    if (flag == 1){
        printf("The matrix is symmetric.");
    }
    else{
        printf("The matrix is not symmetric.");
    }
}




factorial using recursion

#include <stdio.h>

int main(){
    int factorial(int num);
    
    int n = 7;
    
    printf("%d factorial = %d.",n,factorial(n));
}

int factorial(int num){
    if (num > 1){
        return num*factorial(num-1);
    }
    else {
        return 1;
    }
}




find max number 

#include <stdio.h>
#include <string.h>
int main(){
    
    int a,b,max;
    printf("Enter the numbers a and b - ");
    scanf("%d %d",&a,&b);
    
    max = a>b?a:b;
    printf("%d is greater.",max);
}





find if number is a perfect number
#include <stdio.h>

int main()
{
    int num,digit;
    printf("Enter the number - ");
    scanf("%d",&num);
    int sum = 0;
    for (int i = 1;i<num;i++){
        if (num%i == 0){
            sum = sum + i;
        }
    }
    
    if (sum == num){
        printf("number is perfect number");
    }
    else {
        printf("number not perfect number");
    }
}




find if number is strong number or not
#include <stdio.h>
#include <math.h>
int main()
{
    int factorial(int);
    int num,temp,digit;
    printf("Enter the number - ");
    scanf("%d",&num);
    temp = num;
    int sum = 0;
    while (temp > 0){
        digit = temp%10;
        sum = sum + factorial(digit);
        temp =temp/10;
    }
    if (sum == num){
        printf("number is strong number");
    }
    else {
        printf("number not strong number");
    }
}

int factorial (int num){
    int fact = 1;
    while (num > 1){
        fact = fact*num;
        num = num -1;
    }
    return fact;
}




find if number is Armstrong or not
#include <stdio.h>
#include <math.h>
int main()
{
    int num,temp,digit,size;
    printf("Enter the number and number of the digits - ");
    scanf("%d %d",&num,&size);
    temp = num;
    int sum = 0;
    while (temp > 0){
        digit = temp%10;
        sum = sum + pow(digit,size);
        temp =temp/10;
    }
    if (sum == num){
        printf("number is armstrong");
    }
    else {
        printf("number not armstrong");
    }
}



find reverse of the number
#include <stdio.h>

int main()
{
    int num,temp,digit;
    printf("Enter the number - ");
    scanf("%d",&num);
    temp = num;
    int sum = 0;
    while (temp > 0){
        digit = temp%10;
        sum = sum*10 + digit;
        temp =temp/10;
    }
    printf("The reverse of the number is %d",sum);
}




find sum of numbers of a digit
#include <stdio.h>

int main(){
    int sum = 0;
    int n = 1234;
    while (n > 0){
        sum = sum + (n%10); 
        n=n/10;
    }
    printf("%d",sum);
    
}

find sum of array numbers
#include <stdio.h>

int main(){
    int sum = 0;
    int n[10] = {1,2,2,3,8};
    for (int i = 0;i < (sizeof(n)/sizeof(n[0]));i++){
        sum = sum + n[i];
    }
    printf("%d",sum);
    
}

sort array in ascending order
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
        printf("%d",array[i]);
    }
}


reverse a string

#include <stdio.h>
#include <string.h>
int main(){
    char string[10] = "string";
    char string2[strlen(string)];
    
    for (int i = 0;i < strlen(string);i++){
        string2[i] = string[strlen(string)-i-1];
    }
    printf("%s",string2);
}



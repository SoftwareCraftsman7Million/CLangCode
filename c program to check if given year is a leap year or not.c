#include <stdio.h>

int main(){
    int year,check_leap(int);
    printf("Enter the year to check - ");
    scanf("%d",&year);
    if (check_leap(year) == 1 ){
        printf("Year is leap year.");
    }
    else {
        printf("year is not a leap year.");
    }
    
}

int check_leap(int year){
    return (((year %4 == 0) && (year%100 != 0)) || (year %400 == 0));
}
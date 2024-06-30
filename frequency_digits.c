#include <stdio.h>

int main(){
    int count_all(int);
    int n = 1234543234;
    int arr[count_all(n)][2];

    int temp = n;
    int number_into_digits[count_all(n)];
    int i = 0;
    while (temp > 0){
        number_into_digits[i] = temp%10;
        temp = temp/10;
        i++;
    }
    for (int i = 0; i < count_all(n); i++){
        printf("%d\n", number_into_digits[i]);
    }

    
}

int count_all(int n){
    int count = 0;
    while (n > 0){
        n = n /10;
        count = count +1;
    }
    return count;
}


//take number
//break into digits
//store digits in array
//count each digit

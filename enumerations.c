#include <stdio.h>
enum week {Mon = 12,tues = 23,wed = 23,thur = 54,fri,sat, sun = 99};
int main(){
    enum week day;
    
    for (int i = Mon;i < sun+1;i++){
        printf("%d\n",i);
    }
}
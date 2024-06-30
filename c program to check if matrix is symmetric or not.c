#include <stdio.h>

int main(){
    int size;
    printf("Enter size of the matrix - ");
    scanf("%d",&size);
    int matrix[size][size],transpose[size][size];
    
    for (int i = 0; i <size;i++){
        for (int j = 0;j < size; j++) {
            printf("Enter element a %d%d - ",i+1,j+1);
            scanf("%d" , &matrix[i][j]);
        }
    }
    
    for (int i = 0; i <size;i++){
        for (int j = 0;j < size; j++) {
            printf("%d " , matrix[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i <size;i++){
        for (int j = 0;j < size; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }
    printf("\n");
    int flag = 1;
    
    for (int i = 0; i <size;i++){
        for (int j = 0;j < size; j++) {
            printf("%d " , transpose[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i <size;i++){
        for (int j = 0;j < size; j++) {
            if (transpose[i][j] == matrix[i][j]){
                flag = 1;
            }
            else {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1){
        printf("The matrix is symmetric.");
    }
    else{
        printf("matrix aint symetric");
    }
}

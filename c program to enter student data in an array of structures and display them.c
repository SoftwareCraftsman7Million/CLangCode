#include <stdio.h>

struct student_structure {
    int roll;
    char name[20];
    float marks;
    float percentage;
    
};
int main()
{
    int size;
    printf("Enter size of the array - ");
    scanf("%d",&size);
    
    struct student_structure students_data[size];
    
    printf("Enter the details of the students - \n");
    for (int i = 0;i < size; i++){
        students_data[i].roll = i+1;
        printf("Enter the name of the student %d - ", i+1);
        scanf("%s",students_data[i].name);
        printf("Enter the marks - ");
        scanf("%f",&students_data[i].marks);
        printf("\n");
        students_data[i].percentage = (students_data[i].marks/100)*100;
        
    }
    printf("Roll No \t Name \t marks \t Percentage \t\n");
    for (int i = 0;i < size; i++){
        printf("%d \t ",students_data[i].roll);
        printf("%s \t ",students_data[i].name);
        printf("%.2f \t ",students_data[i].marks);
        printf("%.2f \t ",students_data[i].percentage);
        printf("\n");
    }
}

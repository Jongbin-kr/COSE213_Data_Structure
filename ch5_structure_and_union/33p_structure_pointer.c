#include <stdio.h>
#include <string.h>

typedef struct{
    int roll_no;
    char name[20];
    char course[20];
    int fees;
}Student;

void print_std(Student* p_std){
    printf("ROLL N = %d\n", (*p_std).roll_no);
    printf("NAME = %s\n", (*p_std).name);
    printf("COURSE = %s\n", (*p_std).course);
    printf("FEES = %d\n", (*p_std).fees);
}


int main(){

    Student Std1;
    Student* p_std= &Std1;


    printf("\n\nLet's Enter the details of the student!\n\n");

    printf("Enter the roll number = ");
    scanf("%d", &Std1.roll_no);
    // printf("%d", Std1.roll_no);

    printf("Enter the name = ");
    scanf("%s", Std1.name);
    // printf("%s", Std1.name);

    printf("Enter the course = ");
    scanf("%s", Std1.course);

    printf("Enter the fees = ");
    scanf("%d", &Std1.fees);


    print_std(p_std);

    return 0;
}
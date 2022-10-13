#include <stdio.h>
#include <string.h>


typedef struct student_profile{
    int number;
    char name[30];
    int fee;
    char DOB[50];
}student;

// typedef struct{
//     int number;
//     char name[30];
//     int fee;
//     char DOB[50];
// }student;

int main(){

    student stud1;


    printf("Enter the roll number: ");
    scanf("%d", &stud1.number);
    getchar(); // flush buffer

    printf("Enter the name : ");
    gets(stud1.name);

    printf("Enter the fees: ");
    scanf("%d", &stud1.fee);
    getchar();

    printf("Enter the name : ");
    gets(stud1.DOB);


    printf("%d\n", stud1.number);
    printf("%s\n", stud1.name);
    printf("%d\n", stud1.fee);
    printf("%s\n", stud1.DOB);


    return 0;
}
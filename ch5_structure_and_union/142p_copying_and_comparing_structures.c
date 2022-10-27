#include <stdio.h>

struct Student{
    int no;
    char name[80];
    float fees;
    char DOB[80];
};

int main(){

    struct Student std1 = {1, "Jane", 30.0, "mola"};
    struct Student std2, std3;

    std2 = std1;

    printf("std1: %d %s %f %s\n", std1.no, std1.name, std1.fees, std1.DOB);
    printf("std2: %d %s %f %s\n", std2.no, std2.name, std2.fees, std2.DOB);
    printf("std3: %d %s %f %s\n", std3.no, std3.name, std3.fees, std3.DOB);


    return 0;
}
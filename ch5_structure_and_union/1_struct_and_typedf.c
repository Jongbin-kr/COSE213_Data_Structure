#include <stdio.h>
#include <string.h>

typedef struct student{
    char name[20];
    int id;

}student;

// typedef struct str_student student;


int main(str_){

    student std1;

    std1.id = 12;
    // std1.name = "dnjswhdqls";
    strcpy(std1.name, "dnjswhdqls");

    printf("id: %d\n", std1.id);
    printf("name: %s\n", std1.name);

    return 0;
}

// 구조체에서 선언한 문자열에 값을 넣으려면 strcpy 써야하겠네.
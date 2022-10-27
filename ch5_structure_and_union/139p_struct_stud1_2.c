#include <stdio.h>

struct Student{
    int no;
    float fees;
}s1, s2; // 이런식으로 바로 변수 생성가능

int main(){
    
    struct Student std1;
    std1.no = 1;
    std1.fees = 10.0;

    struct Student std2 = {2};

    s1.no = 3;
    s1.fees = 5.0;
    
    s2.no = 4;

    printf("std1 = %d %f\n", std1.no, std1.fees);
    printf("std2.no = %d %d\n", std2.no, std2.fees);
    printf("s1.no = %d %f\n", s1.no, s1.fees); // 자동초기화
    printf("s2.no = %d %f\n", s2.no, s2.fees); // 자동초기화




    return 0;
}
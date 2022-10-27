#include <stdio.h>

typedef struct Name{
    char first_name[20];
    char second_name[20];
    char third_name[20];
}NAME;

typedef struct Date{
    int dd;
    int mm;
    int yy;
}DATE;

struct Student{
    int no;
    NAME full_name;
    DATE birth_data;
    float fees;
}std2;

int main(){

    struct Student std1 = {1, {"jong", "bin", "won"}, {11,22,33}, 65.0};
    
    std2.no = 2;
    // std2.full_name.first_name = "first";
    // std2.full_name.second_name = "second";
    // std2.full_name.third_name = "third";
    std2.birth_data.dd = 11;
    std2.birth_data.mm = 22;
    std2.birth_data.yy = 33;
    std2.fees = 70.0;

    printf("std1: %d %f\n", std1.no, std1.fees);
    printf("std1 name = %s-%s-%s\n",std1.full_name.first_name, std1.full_name.second_name, std1.full_name.third_name);
    printf("std1 birth = %d-%d-%d\n", std1.birth_data.dd, std1.birth_data.mm, std1.birth_data.yy);
    
    printf("std2: %d %f\n", std2.no, std2.fees);
    printf("std2 name = %s-%s-%s\n",std2.full_name.first_name, std2.full_name.second_name, std2.full_name.third_name);
    printf("std2 birth = %d-%d-%d\n", std2.birth_data.dd, std2.birth_data.mm, std2.birth_data.yy);
 
    
    return 0;
}
#include <stdio.h>
#include <string.h>

typedef struct Student{
    int no;
    char name[20];
    float fees;
}ST;


int main(){
    ST st[3] = {
        {1, "AAA", 50.0},
        {2, "BBB", 60.0},
    };

    printf("st 1 = %d %s %f\n", st[0].no, st[0].name, st[0].fees);
    printf("st 2 = %d %s %f\n", st[1].no, st[1].name, st[1].fees);
    printf("st 3 = %d %s %f\n", st[2].no, st[2].name, st[2].fees);

    st[2].no = 3;
    strcpy(st[2].name, "CCC");
    // st[2].name = "CCC"; -> 교과서에서는 오류인가....
    st[2].fees = 70.0;

    printf("st 3 = %d %s %f\n", st[2].no, st[2].name, st[2].fees);

    return 0;
}
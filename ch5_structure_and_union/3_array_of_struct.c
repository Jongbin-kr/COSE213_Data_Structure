#include <stdio.h>
#include <string.h>

struct student{
    int id;
    char name[20];
    int score;
};

struct Int{
    int a;
    int b;
    int c;
};

int main(){

    struct student std[5];


    std[0].id = 9;
    strcpy(std[0].name, "Jongbin");
    std[0].score = 95;

    // std[1] = {9, "Ara", 100};


    printf("%d\n%s\n%d\n", std[0].id, std[0].name, std[0].score);
    printf("%d\n%s\n%d\n", std[1].id, std[1].name, std[1].score);


    struct Int A[3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    // 이런식으로 값을 넣어줄 수는 없구나. 선언하면서 동시에 초기화만 가능.
    // A[0] = {1,2,3};

    printf("%d %d %d\n", A[0].a, A[0].b, A[0].c);
    printf("%d %d %d\n", A[1].a, A[1].b, A[1].c);
    printf("%d %d %d\n", A[2].a, A[2].b, A[2].c);


    return 0;
}
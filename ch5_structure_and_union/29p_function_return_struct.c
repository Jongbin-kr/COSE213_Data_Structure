#include <stdio.h>

typedef struct{
    int x;
    int y;
}Two_int;

Two_int sum_int(Two_int A, Two_int B){
    Two_int Sum;
    Sum.x = A.x + B.x;
    Sum.y = A.y + B.y;

    return Sum;
}

int main(){
    
    Two_int A = {1,2};
    Two_int B = {3,4};

    printf("%d\n", sum_int(A, B).x);
    printf("%d\n", sum_int(A, B).y);

    return 0;
}
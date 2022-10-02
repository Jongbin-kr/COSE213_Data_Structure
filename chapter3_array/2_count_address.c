#include <stdio.h>

int main(){
    int n, result;
    int* BA;
    int marks[] = {99, 67, 78, 54, 88, 90, 34, 85};


    printf("input the index of address you want: ");
    scanf("%d", &n);

    BA = marks;
    // result = BA + (sizeof(int) * (n - 0)); // 앞에 sizeof를 붙이면 안되겟는데? 주소값 연산이니까 기본적으로 4단위로 더해지니까.
    result = BA + (n - 0);

    printf("address of marks[%d]: %d\n", n, result);

    printf("siZe of int: %d\n", sizeof(int));
    printf("BA + 1: %d\n", BA + 1);


    return 0;
}

// 6422260
// 6422276
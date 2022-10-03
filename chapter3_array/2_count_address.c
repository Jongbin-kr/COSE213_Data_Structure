#include <stdio.h>

int main(){

    int n, p_result, int_result;
    int* p_BA; //주소값을 정수형 **포인터**로 받는 경우
    int int_BA; //주소값을 그냥 일반 정수형으로 받는 경우
    int marks[] = {99, 67, 78, 54, 88, 90, 34, 85};


    printf("input the index of address you want: ");
    scanf("%d", &n);

    p_BA = marks;
    int_BA = &marks;
    int_result = int_BA + (sizeof(int) * (n - 0));
    p_result = p_BA + (n - 0);


    printf("p_BA address of marks[%d]: %d\n", n, p_result);
    printf("int_BA address of marks[%d]: %d\n", n, int_result);
    
    printf("siZe of int: %d\n", sizeof(int));
    printf("p_BA + 1: %d\n", p_BA + 1);
    printf("int_BA + 1: %d\n", int_BA + 1);

    return 0;
}


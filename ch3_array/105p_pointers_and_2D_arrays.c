#include <stdio.h>

int main(){

    // 포인터 배열
    //(int* arr)[3];
    char *arr1[3] = {"apple", "banana", "choco"};
    //(int* )arr2[3] = {"d", "e", "f"};
    printf("\n%s", arr1[0]);


    // 배열 포인터는 오직 2차원 이상의 배열에만 쓸 수 있다.
    int arr3[2][3] = {10,20,30,1,2,3};
    int (*parr3)[3] = arr3; // 일반 포인터에도 배열명을 넣듯, 배열 포인터도 2차원 배열의 배열명
    printf("\n%d", parr3[0][1]);

    return 0;
}
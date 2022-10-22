#include <stdio.h>

int main(){

    // 배열 만들기 및 초기값 입력
    int arr1_size, arr1[10];
    printf("\nEnter the number of elememts in the array1: ");
    scanf("%d", &arr1_size);
    int i;
    for(i=0; i < arr1_size; i++){
        printf("\narr[%d] =", i);
        scanf("%d", &arr1[i]);
    }

    int arr2_size, arr2[10];
    printf("\nEnter the number of elememts in the array: ");
    scanf("%d", &arr2_size);
    for(i=0; i < arr2_size; i++){
        printf("\narr[%d] =", i);
        scanf("%d", &arr2[i]);
    }



    // 배열값 합치기
    int arr3_size, index = 0, arr3[20];
    arr3_size = arr1_size + arr2_size;

    for(i=0; i<arr1_size; i++){
        arr3[index] = arr1[i];
        index++;
    }

    for(i=0; i<arr2_size; i++){
        arr3[index] = arr2[i];
        index++;
    }



    // 배열 값 출력
    printf("\n The array after operation: ");
    for(i=0; i<arr3_size; i++){
        printf("\n arr3[%d] == %d", i, arr3[i]);
    }

    return 0;
}
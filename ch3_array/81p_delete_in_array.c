#include <stdio.h> 

int main() {  
    
    // 배열 만들기 및 초기값 입력
    int arr_size, arr[10];
    printf("\nEnter the number of elememts in the array: ");
    scanf("%d", &arr_size);
    int i;
    for(i=0; i < arr_size; i++){
        printf("\narr[%d] =", i);
        scanf("%d", &arr[i]);
    }
   


    // 값 삭제하기
    int deleted_pos;
    printf("\nEnter the position of number to delete: ");
    scanf("%d", &deleted_pos);
    
    for(i=deleted_pos; i<arr_size; i++){
        arr[i] = arr[i+1];
    }
    arr_size -= 1; //배열 크기 하나 줄여주기

    

    // 배열 값 출력
    printf("\n The array after operation: ");
    for(i=0; i<arr_size; i++){
        printf("\n arr[%d] == %d", i, arr[i]);
    }

    return 0;
}
#include <stdio.h>

int main(){
    // 배열 만들기 및 초기값 입력
    int arr_size, arr[10];
    printf("\nEnter the number of elememts in the array: ");
    scanf("%d", &arr_size);
    int i;
    for(i=0; i < arr_size; i++){
        printf("\narr[%d] =", i);
        scanf("%d", &arr[i]);
    }


    // 배열에 값 삽입
    int inserted_num, inserted_pos;
    printf("\n Enter the number to be inserted: ");
    scanf("%d", &inserted_num);
    printf("\n Enter the number to be inserted: ");
    scanf("%d", &inserted_pos);

    for(i=arr_size-1; i>=inserted_pos; i--){
        arr[i+1] = arr[i];
    }
    arr[inserted_pos] = inserted_num;
    arr_size = arr_size + 1; // array size


    // 배열 값 출력
    printf("\n The array after operation: ");
    for(i=0; i<arr_size; i++){
        printf("\n arr[%d] == %d", i, arr[i]);
    }

    return 0;
}
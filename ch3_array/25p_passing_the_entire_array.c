#include <stdio.h>

void func(int a[10]){  //void func(int* a){ 역시 가능하다. a[]를 통해서 배열을 선언한게 재밌네.
    int i;
    for (i=0; i<5; i++){
        printf("%d\n", a[i]);
    }
}

int main(){
    int arr[5] = {5,2,1,3,4};
    func(arr);

    printf("arr[6] == %d\narr = %d\n", arr[5], arr);
    printf("arr[0] == %d\n", arr[0]);

    return 0;
}

/*
int *arr == int arr[] == int arr[size]
관련 내용은 아래를 참고.
https://stackoverflow.com/questions/5573310/difference-between-passing-array-and-array-pointer-into-function-in-c
*/
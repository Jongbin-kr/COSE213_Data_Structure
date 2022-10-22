#include <stdio.h>

int main(){

    int arr[] = {1,2,3,4,5};
    int *p_arr;

    p_arr = arr; // arr == &arr[0]. ~= &arr. 셋 모두 첫 요소의 주소로 값은 같으나, &arr은 배열 전체의 주소. arr의 경우, 컴파일러가 &arr[0]으로 자동으로 바꾼다고 한다. (출처: https://plming.tistory.com/50)
    *p_arr = 10;
    *(p_arr + 1) = 20;

    printf("\n Array1 is: ");
    int i;
    for(i=0; i<5; i++){
        printf("\n%d", arr[i]);
    }


    int arr2[] = {1,2,3,4,5};
    int *p_subarr;

    p_subarr = &arr2[2];
    *p_subarr = -1;
    *(p_subarr + 1) = 0;
    *(p_subarr -1) = 1;

    printf("\n Array2 is: ");
    for(i=0; i<5; i++){
        printf("\n%d", arr2[i]); // arr[i] == *(arr + i)
    }



    return 0;
}
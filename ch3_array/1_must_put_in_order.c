/*
array에 값을 집어넣을 때, 반드시 순서대로 넣어야 하는가?
*/


#include <stdio.h>

int main(){

    int arr[10];

    arr[2] = 3;

    printf("%d", arr[2]);


    return 0;
}

/*
ㄴㄴ 꼭 그럴 필요는 없다.
인덱스 값으로만 접근할 수만 있으면 된다.
*/
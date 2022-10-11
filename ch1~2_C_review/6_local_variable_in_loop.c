/*
python과 마찬가지로, c에서도 for문 안의 변수는 전역변수로 취급되는가? 
*/

#include <stdio.h>

int main(){

    int i, x;

    for (i = 0; i < 5; i++){
        x = i;
        printf("x: %d\n", x);
    }

    printf("x: %d", x); 

    return 0;
}


/*
그러하다. 내가 반복문 역시 하나의 함수라고 잘못 생각했나보다.
지역변수, 전역변수 개념은 새로이 함수를 정의하는 경우만 적용되나보다.
*/
#include <stdio.h>

int main(){

    void* vp;
    int a = 4;

    vp = &a;

    // printf("%d\n", *vp);  
    // => 보이드 포인터는 `(type *)` 형태로 포인터 자료형을 명시해줘야 한다!
    printf("%d\n", *(int *)vp);    

    return 0;
}
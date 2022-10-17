#include <stdio.h>

int main(){

    void* vp;
    int a = 4;

    vp = &a;

    printf("%d\n", *(int *)vp);    
    // printf("%d\n", *vp);  
    // => 보이드 포인터는 `(type *)` 형태로 포인터 자료형을 명시해줘야 한다!
    // 주소값을 저장할 때 말고, 실제로 사용할 때 자료값 명시해주기!!!
    
    return 0;
}
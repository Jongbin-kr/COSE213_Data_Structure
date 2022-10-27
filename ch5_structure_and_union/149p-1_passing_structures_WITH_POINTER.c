#include <stdio.h>

struct Numbers{
    int x;
    int y;
}NUM = {1,2}, *p_NUM = &NUM; //여기서는 변수를 같이 선언/초기화하는 것.

void plus_1(struct Numbers* p_n){
    printf("x = %d\n", (*p_n).x);
    printf("y = %d\n", (*p_n).y);
    
    (*p_n).x += 1;
    (*p_n).y += 1;

    printf("in fuction, x+1 = %d\n", (*p_n).x);
    printf("in fuction, y+1 = %d\n", (*p_n).y);;
}

int main(void){

    plus_1(p_NUM);

    printf("main x=%d y=%d\n", NUM.x, NUM.y);

    return 0;
}
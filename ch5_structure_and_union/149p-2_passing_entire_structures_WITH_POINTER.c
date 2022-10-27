#include <stdio.h>

struct Numbers{
    int x;
    int y;
};

void plus_1(struct Numbers* p_n){
    printf("x = %d\n", (*p_n).x);
    printf("y = %d\n", (*p_n).y);
    
    (*p_n).x += 1;
    (*p_n).y += 1;

    printf("in fuction, x+1 = %d\n", (*p_n).x);
    printf("in fuction, y+1 = %d\n", (*p_n).y);;
}

int main(void){
    struct Numbers NUM = {1,2};
    struct Numbers *p_NUM = &NUM;

    plus_1(p_NUM);

    printf("main x=%d y=%d\n", NUM.x, NUM.y);

    return 0;
}
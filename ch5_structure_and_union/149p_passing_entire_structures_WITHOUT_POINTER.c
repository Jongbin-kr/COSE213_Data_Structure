#include <stdio.h>

typedef struct Numbers{
    int x;
    int y;
}NUM;

void plus_1(NUM n){
    printf("x = %d\n", n.x);
    printf("y = %d\n", n.y);
    
    n.x += 1;
    n.y += 1;

    printf("in fuction, x+1 = %d\n", n.x);
    printf("in fuction, y+1 = %d\n", n.y);;
}

int main(void){

    NUM n, m = {1,2};
    
    n.x = 10;
    n.y = 20;

    int n_1, m_1;
    plus_1(n);
    plus_1(m);

    printf("n x=%d y=%d\n", n.x, n.y);
    printf("m x=%d y=%d\n", m.x, m.y);

    return 0;
}
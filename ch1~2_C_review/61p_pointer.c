#include <stdio.h>

int main(){

    int a = 10;
    int *pa = &a;

    printf("Pa: %d", pa);
    printf("a + 1: %d", (*pa)+1);
    printf("pa + 1: %d", pa+1);

    return 0;
}
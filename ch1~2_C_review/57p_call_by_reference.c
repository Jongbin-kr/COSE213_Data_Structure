#include <stdio.h>

void add(int* a){
    int result;

    *a = *a + 10;

    printf("in function: %d\n", *a);

}



int main(void){
    int a = 2;
    printf("before : %d\n", a);
    add(&a);
    printf("after: %d\n", a);



    return 0;
}
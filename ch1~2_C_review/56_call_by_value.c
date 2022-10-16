#include <stdio.h>

int add(int a){
    int result;

    result = a + 10;

    printf("in function: %d\n", result);

    return result;

}

int main(void){
    int a = 2;
    printf("before : %d\n", a);
    add(a);
    printf("after: %d\n", a);



    return 0;
}
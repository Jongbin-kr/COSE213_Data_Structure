#include <stdio.h>

int main(void){

    int num1 = 15; // 00001111
    int num2 = 20; // 00010100
    printf("\nnum1, num2: %d, %d\n", num1, num2);
    
    int num3 = num1 & num2;
    printf("\nafter &: %d\n", num3);

    int num4 = num1 | num2;
    printf("\nafter |: %d\n", num4);

    int num5 = num1 >> 1;
    printf("\nafter num1 >> 1: %d\n", num5);

    int num6 = num2 << 1;
    printf("\nafter num2 << 1: %d\n", num6);
    

    return 0;
}
#include <stdio.h>

int main(){

    char str[100];
    char ch;

    printf("\nLet's start input.");

    ch = getchar();
    int i = 0;
    while (ch != '\n') {
        str[i] = ch;
        i++;
        ch = getchar();
    }
    str[i] = '\0';

    printf("\nThe result is %s", str);

    return 0;
}
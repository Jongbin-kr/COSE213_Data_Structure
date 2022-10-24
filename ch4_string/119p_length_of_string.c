#include <stdio.h>

int main(){

    char str[100];
    printf("\nInput string: \n");
    gets(str);

    int index = 0;
    while(str[index] != '\0'){
        printf("%c", str[index]);
        index++;
    }

    printf("\nThe length of string is...%d", index);

    return 0;
}
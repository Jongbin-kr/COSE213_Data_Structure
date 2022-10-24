#include <stdio.h>

int main(){

    char str[200], new_str[200];

    printf("\nEnter raw string: \n");
    gets(str);

    int i;
    for(i=0; str[i] != '\0'; i++){
        if((str[i] >='a') && (str[i] <= 'z')){
            new_str[i] = str[i] - 32;
        } 
        else if((str[i] >= 'A') && (str[i] <= 'Z')){
            new_str[i] = str[i] + 32;
        }
    }
    new_str[i] = '\0'; // 마지막에 널문자 넣는거 잊지말자!!!

    printf("\nAfter conversion: %s", new_str);


    return 0;
}
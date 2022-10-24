#include <stdio.h>
#include <string.h>

int main(){

    char str1[100], str2[100];
    int same_toggle = 0;
    int i=0, j=0;

    printf("\nInput str1: \n");
    gets(str1);
    printf("\nInput str2: \n");
    gets(str2);

    // array length check
    if(strlen(str1) != strlen(str2)){
        same_toggle = -1;
        printf("\n The two strings are NOT equal.");
    }
    else{
        while ((i < strlen(str1)) && (j < strlen(str2))) {
            if (str1[i] == str2[j]) {
                same_toggle = 1;
                i++;
                j++;
            }else{
                same_toggle = 0;
                break;
            }
        }
    }

    if (same_toggle == 1){
        printf("\n Two strings are EQUAL.");

    } else if(same_toggle == 0) {
        if (str1[i] > str2[j]) printf("\n str1 is greater than str2.");
        else printf("\n str2 is greater than str1.");
    }


    return 0;
}
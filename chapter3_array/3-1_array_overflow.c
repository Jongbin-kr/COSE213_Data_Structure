#include <stdio.h>

int main(){

    int arr[5];

    int j;
    for (j = 0; j < 6; j++){
        arr[j] = j;
    }

    int i;
    for (i = 0; i < 6; i++){
        printf("print %d: %d\n", i, arr[i]);
    }

    return 0;
}
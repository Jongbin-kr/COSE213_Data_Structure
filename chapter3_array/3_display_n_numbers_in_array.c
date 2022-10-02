#include <stdio.h>

int main(){
    int i;
    int arr[20];

    for (i=0; i < 20; i++){
        scanf("%d", &arr[i]);
    }

    for (i=0; i < 20; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
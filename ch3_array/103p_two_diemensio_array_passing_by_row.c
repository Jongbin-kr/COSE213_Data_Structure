#include <stdio.h>

void func(int arr[]){
    int i;
    for (i=0;i<3;i++){
        printf("\n%d", arr[i]);
    }

}


int main(){

    int arr[2][3] = {1,2,3,4,5,6};
    func(arr[0]);
    
    return 0;

}
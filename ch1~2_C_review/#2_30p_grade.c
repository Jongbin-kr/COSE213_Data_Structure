#include <stdio.h>

int main(){

    int m;

    scanf("%d", &m);
    // printf("%d", m);

    if(m > 75){
        printf("0");
    }
    else if((m >= 60 ) && (m < 75)){
        printf("A");
    }
    else if((m >= 50) && (m < 60)){
        printf("B");
    }
    else if((m >= 40) && (m < 50)){
        printf("C");
    }
    else printf("D");

    return 0;
}
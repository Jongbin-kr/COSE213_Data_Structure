#include <stdio.h>
#include <string.h>

struct person{
    char name[20];
    int age;
    char address[50];
};

int main(void){

    struct person a = {"John", 30, "Newyork in U.S.A"};

    printf("name: %s\n", a.name);
    printf("age: %d\n", a.age);
    printf("address: %s\n", a.address);

    return 0;
}
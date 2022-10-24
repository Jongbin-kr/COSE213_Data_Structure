#include <stdio.h>

int main(){

    char str1[20], str2[20], str3[20];

    printf("\nInput str1\n");
    scanf("%s", str1);
    printf("\nstr1: %s", str1);
    getchar();


    printf("\nInput str2\n");
    gets(str2);
    printf("\nstr2: %s", str2);

    int i = 0;
    char ch = getchar();
    printf("\nInput str3\n");
    while((ch != '\n') && (i < sizeof(str3)-1)){
        str3[i] = ch;
        i++;
        ch = getchar();
    }
    str3[i] = '\0';
    
    printf("\nstr3: %s", str3);

    return 0;
}
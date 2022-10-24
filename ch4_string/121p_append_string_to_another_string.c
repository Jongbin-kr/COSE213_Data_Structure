#include <stdio.h>

int main(){

    char dest_str[100], source_str[100];

    
    printf("\nEnter source string to append: ");
    gets(source_str);

    printf("\nEnter dest string: ");
    gets(dest_str);

    int i = 0;
    while(dest_str[i] != '\0') i++;

    int j = 0;
    for(j=0; source_str[j] != '\0'; j++){
        dest_str[i] = source_str[j];
        i++;
    }
    dest_str[i] = '\0';

    printf("\nAppend strig is...\n");
    puts(dest_str);

    return 0;
}
#include<stdio.h>

int main(){
    char str[50];
    // gets(str);
    // puts(str);

    fgets(str, 50, stdin);
    puts(str);
    
    return 0;
}
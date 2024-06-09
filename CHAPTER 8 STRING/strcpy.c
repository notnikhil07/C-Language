#include<stdio.h>
#include<string.h>

int main(){
    char oldStr[] = "purana";
    char newStr[] = "naya";
    strcpy(newStr,oldStr);
    puts(newStr);
    return 0;
}
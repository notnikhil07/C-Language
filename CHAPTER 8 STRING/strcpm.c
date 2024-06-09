#include<stdio.h>
#include<string.h>

int main(){
    char first[] = "Nikhil";
    char second[] = "Kumar";
    int comp = strcmp(first, second);
    printf("%d ", comp);

    return 0;
}
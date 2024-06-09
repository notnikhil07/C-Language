#include<stdio.h>



int main(){
    char *canChange = "Hello World";
    puts(canChange);
    canChange = "Hello";
    puts(canChange);

    //char canNotchange[] = "Hello World"; //array cannot change
    //puts(canNotchange);
    //canNotchange = "hello";

    return 0;
}
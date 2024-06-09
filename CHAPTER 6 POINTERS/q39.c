#include<stdio.h>

void printAdress(int n);
void _printAdress(int *n);


int main(){
    int n = 5;
    printf("%p\n", n);
    printAdress(n);
    _printAdress(&n);
    printf("%p\n", &n);


    return 0;
}

void printAdress(int n){
    printf("%p\n", &n);
}

void _printAdress(int *n){
    printf("%p\n", &*n);
}
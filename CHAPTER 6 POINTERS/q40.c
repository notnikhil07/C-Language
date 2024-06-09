#include<stdio.h>

void doWork(int a, int b, int *sum,int *prod, int *avr);

int main(){
    int a,b;
    int sum, prod, avr;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("\nEnter the second number:");
    scanf("%d", &b);
    doWork(a, b, &sum, &prod, &avr);
    printf("sum = %d , product = %d , average = %d", sum, prod, avr);

    return 0;
}

void doWork(int a, int b, int *sum,int *prod, int *avr){
    *sum = a + b;
    *prod = a*b;
    *avr = (a+b)/2;
}
#include<stdio.h>

int main(){
    int a,b,sum,sub,mul;
    float div;

    printf("Enter the first no: ");
    scanf("%d", &a);
    printf("Enter the second no: ");
    scanf("%d", &b);

    sum = a+b;
    printf("Sum = %d\n", sum);

    sub = a-b;
    printf("Subract = %d\n", sub);

    mul = a*b;
    printf("Multiplication = %d\n", mul);
    
    div = a/b;
    printf("Division = %d\n", div);

    return 0;
}
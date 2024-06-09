#include<stdio.h>

int main(){
    int a,b,sum;
    printf("Enter the first no: ");
    scanf("%d", &a);

    printf("Enter the second no: ");
    scanf("%d", &b);

    sum = a+b;
    printf("The sum of %d and %d is %d", a,b,sum);
    
    return 0;
}
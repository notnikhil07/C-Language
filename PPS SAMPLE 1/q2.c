#include<stdio.h>

int main(){
    float a,b,swap;

    printf("Enter the first no: ");
    scanf("%f", &a);

    printf("Enter the second no: ");
    scanf("%f", &b);

    swap = a;
    a = b;
    b = swap;

    printf("After swapping first no %.2f\n",a);
    printf("After swapping second no %.2f\n",b);
}
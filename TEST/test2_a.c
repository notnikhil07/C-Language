#include<stdio.h>
int main(){
    float a, b , c;
    printf("Enter the first number\n");
    scanf("%f",&a);
    printf("Enter the second number\n");
    scanf("%f",&b);
    printf("Enter the third number\n");
    scanf("%f",&c);
    printf("The average of three numbers is %.2f",(a+b+c)/3);
    
    return 0;
}
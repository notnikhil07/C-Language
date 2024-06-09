#include<stdio.h>
int main(){
    float a, b, area;
    printf("Enter the length of rectangle\n");
    scanf("%f",&a);
    printf("Enter the breath of rectangle\n");
    scanf("%f",&b);
    printf("The perimeter of rectangle is %f", 2*(a + b));
    
    return 0;
}
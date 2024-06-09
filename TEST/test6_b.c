#include<stdio.h>
#include<math.h>

float findSqrt(float a);

int main(){
    float a;
    printf("Enter the number\n");
    scanf("%f",&a);

    printf("Square root of %f is %0.3f",a ,findSqrt(a));

    return 0;
}

float findSqrt(float a){
    return sqrt(a);
}
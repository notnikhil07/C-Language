#include<stdio.h>

int main(){
    int a,b,per,area;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    per=2*(a+b);
    area=a*b;

    if(per>area){
        printf("Perimeter is greater. Perimeter = %d and Area = %d", per,area);
    }
    else if(per<area){
        printf("Area is greater. Perimeter = %d and Area = %d", per,area);
    }
    else if(per == area){
        printf("Equal. Perimeter = %d and Area = %d", per,area);
    }
}
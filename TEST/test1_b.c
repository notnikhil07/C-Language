#include<stdio.h>
int main(){
    float numb;
    printf("Enter the number\n");
    scanf("%f",&numb);
    printf("The cube of %.1f is %.2f", numb, numb*numb*numb); //a^3
    return 0;
}
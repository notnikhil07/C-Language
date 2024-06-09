//wap to evaluate sum of any three number using call by value & call by refrence.

#include<stdio.h>

int addThreeByValue(int n1, int n2, int n3);

int main(){
    int num1,num2, num3,sum;
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    sum = addThreeByValue(num1,num2,num3);

    printf("Sum using call by value: %d", sum);


    return 0;
}

int addThreeByValue(int n1, int n2, int n3){
    return n1+n2+n3;
}
//wap to evaluate sum of any three number using call by value & call by refrence.

#include<stdio.h>

void addThreeByRefrence(int n1, int n2, int n3, int *result);

int main(){
    int num1,num2, num3,sum;
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    addThreeByRefrence(num1,num2,num3, &sum);

    printf("Sum using call by value: %d", sum);

    return 0;
}

void addThreeByRefrence(int n1, int n2, int n3, int *result){
    *result = n1 + n2 + n3;
}
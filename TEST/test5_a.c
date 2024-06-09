#include<stdio.h>

int sum(int a, int b);

int main(){
    int a, b;
    printf("Enter the first no\n");
    scanf("%d",&a);
    printf("Enter the second no\n");
    scanf("%d",&b);
    
    printf("The sum is %d",sum(a,b));

    return 0;
}


int sum(int a, int b){
    return a + b;
}
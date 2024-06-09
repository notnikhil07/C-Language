#include<stdio.h>

int main(){
    int n,sum=0,lastDigit, r=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    while(n>0){
        r=r+(n%10);
        r=r*10;
        n=n/10;
    }
    r=r/10;
    printf("The reverse is %d\n", r);
    while(r>0){
        lastDigit=r%10;
        sum = sum+lastDigit;
        r=r/10; 
    }
    printf("Sum is %d", sum);
    return 0;
}
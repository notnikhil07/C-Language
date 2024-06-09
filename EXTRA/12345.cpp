#include<stdio.h>

int main(){
    int n,sum=0,lastDigit, r=0,s;
    printf("Enter the number: ");
    scanf("%d", &n);
    s==n;
    while(n>0){
        r=r+(n%10);
        r=r*10;
        n=n/10;
    }
    r=r/10;
    printf("The reverse is %d\n", r);
    while(s>0){
        lastDigit=s%10;
        sum = sum+lastDigit;
        s=s/10;  
    }
    
    printf("Sum is %d", sum);
    return 0;
}

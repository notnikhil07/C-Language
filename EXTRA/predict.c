#include<stdio.h>  
 int main(){    
    int n,sum=0,lastDigit;    
    printf("Enter a number:");    
    scanf("%d",&n);    
    while(n>0){
        if(n%2 != 0){    
    lastDigit=n%10;    
    sum=sum+lastDigit;    
    n=n/10;
        }
}    
    printf("Sum is=%d",sum);    
    return 0;  
}   
#include<stdio.h>  
 int main()    
{    
int n,sum=0,m;    
printf("Enter a number:");    
scanf("%d",&n);    
while(n>0){
	if(n%2 != 0){
m=n%10;    
sum=sum+m;    
n=n/10;    
}
break;
}
printf("Sum is=%d",sum);    
return 0;  
}   

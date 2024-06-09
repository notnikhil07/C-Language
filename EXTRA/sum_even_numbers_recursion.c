//WAP to print sum of even numbers in array in recursion

#include<stdio.h>

int sumOfEven(int a[],int num,int sum);

int main(){
    int i,a[100],num,sum=0;
    printf("Enter number of Array Elements\n");
    scanf("%d",&num);
    printf("Enter Array Elements\n");
    for(i=0;i<num;i++){
        scanf("%d",&a[i]);
    }
    sumOfEven(a,num-1,sum);

    return 0;
}

int sumOfEven(int a[],int num,int sum){
    if(num>=0){
        if((a[num])%2==0){
            sum+=(a[num]);
        }
        sumOfEven(a,num-1,sum);
    }
    else{
        printf("Sum=%d\n",sum);
        return 0;
    }
}
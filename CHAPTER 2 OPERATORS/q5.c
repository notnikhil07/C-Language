#include<stdio.h>
int main(){
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("%d", num%2 == 0);
    return 0;
}
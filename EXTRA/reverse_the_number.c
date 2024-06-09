#include<stdio.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int r = 0;
    for(int i =0; n>0; i++){
        r=r+(n%10);
        r=r*10;
        n=n/10;
    }
    r=r/10;
    printf("The reverse number is %d", r);

    return 0;
}
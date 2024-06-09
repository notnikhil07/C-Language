#include<stdio.h>

int main(){
    int x,y;
    printf("Enter the x axis and y axis: ");
    scanf("%d %d", &x, &y);

    if(x==0 && y==0){
        printf("The point is origin");
    }
    else if(x==0 && y!=0){
        printf("Lies on y-axis");
    }
    else if(y==0 && x!=0){
        printf("Lies on x-axis");
    }
    else {
        printf("The point is %d (x axis) and %d (y axis) from origin.", x, y);
    }
}
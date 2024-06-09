#include<stdio.h>

int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);

    if(year%2 == 0){
        printf("Even");
    }

    else{
        printf("Odd");
    }

    return 0;
}
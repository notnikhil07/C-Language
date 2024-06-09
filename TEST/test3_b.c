#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:-");
    scanf("%d", &num);

    if (num>0) {
        printf("Natural Number");
    }
    else {
        printf("Its not");
    }

    return 0;
}
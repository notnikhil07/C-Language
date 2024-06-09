#include<stdio.h>

void greet(char country);

int main(){
    char country;
    printf("Enter your country (India = i, Pakistan = p): ");
    scanf("%c", &country);
    greet(country);
    return 0;
}

void greet(char country){
    if(country == 'i'){
        printf("Namaste");
    }
    else if(country == 'p'){
        printf("Fuck you");
    }
    else{
        printf("Kuch nhi");
    }
}
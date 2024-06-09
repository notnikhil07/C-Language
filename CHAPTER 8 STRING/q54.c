#include<stdio.h>

void countCharacter(char str[], char ch);

int main(){
    char str[] = "hellobhai";
    char ch = 'a';
    countCharacter(str, ch);
}

void countCharacter(char str[], char ch){
    for(int i=0; str[i] != '\0' ; i++){
        if(str[i] == ch){
            printf("%c is present in character", ch);
            return;
        }
    }
    printf("%c is not present", ch);
}


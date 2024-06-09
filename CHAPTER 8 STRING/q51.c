#include<stdio.h>
#include<string.h>

//void passWrd(char ch[]);

int main(){
    char pass[100];
    char salt[] = "123";
    gets(pass);
    char password = strcat(pass, salt);
    puts(pass);

    return 0;
}
// void passWrd(char ch[]){
//     gets(ch);
//     int salt = 123;
//     strcat(ch,salt);
// }
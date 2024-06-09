#include<stdio.h>
#include<string.h>

typedef struct computerscience{
    char name[50];
    int roll;
    float cgpa;
} coe;

int main(){
    coe s1;
    s1.roll=32;
    s1.cgpa=8.4;
    strcpy(s1.name, "Nikhil");
    printf("%d\n", s1.roll);
    printf("%s\n", s1.name);

    return 0;
}
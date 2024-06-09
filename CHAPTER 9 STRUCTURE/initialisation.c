#include<stdio.h>

struct student {
    char name[50];
    int roll;
    float cgpa;
};

void studentInfo(struct student s1);

int main(){
    struct student s1 = {"Nikhil",32,8.4};
    printf("Student name = %s\n", s1.name);

    struct student *ptr = &s1;
    printf("Student roll = %d\n", (*ptr).roll);
    printf("Student name = %s", ptr->name);


    return 0;
}

void studentInfo(struct student s1){
    printf("Student name %s\n", s1.name);
}
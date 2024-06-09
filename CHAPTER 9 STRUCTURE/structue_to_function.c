#include<stdio.h>

struct student {
    char name[50];
    int roll;
    float cgpa;
};

void studentInfo(struct student s1);

int main(){
    struct student s1 = {"Nikhil",32,8.4};

    studentInfo(s1);

    return 0;
}

void studentInfo(struct student s1){
    printf("Student Information\n");
    printf("Student name %s\n", s1.name);
    printf("Student roll no %d\n", s1.roll);
    printf("Student cgpa %0.2f\n", s1.cgpa);
}
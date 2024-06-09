//	Pointer With Structure:
#include<stdio.h>
struct student{
	char name[50];
	int id;
	float marks;
};
int main(){
	struct student s;
	printf("Enter student Name : ");
	gets(s.name);
	printf("Enter Student ID : ");
	scanf("%d", &s.id);
	printf("Enter Student Marks : ");
	scanf("%f", &s.marks);
	
	printf("\nStudent Details : \n");
	printf("Name : %s\n", s.name);
	printf("Id : %d\n", s.id);
	printf("Marks : %.2f\n", s.marks);
	return 0;
}

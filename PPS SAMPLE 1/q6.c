#include<stdio.h>

int main(){
	int a = 5, b = 9;

	a = ++a;
	printf("%d\n", a);

    b = --b;
    printf("%d", b);

	return 0;
}
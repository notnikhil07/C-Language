//	Pointer With Array:
#include<stdio.h>
int main(){
	int A[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	int i, *ptr = A;
	for(i=0; i<10; i++){
		printf("%u\t%d\n", ptr, *ptr);
		ptr++;
	}
	return 0;
}

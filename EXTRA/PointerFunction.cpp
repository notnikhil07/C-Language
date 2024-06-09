//	Pointer With Function:
#include<stdio.h>
int* print(int test[], int size){
	int f=0, temp;
	int l = size - 1;
	while(f<=1){
		temp = test[f];
		test[f] = test[l];
		test[l] = temp;
		f++;
		l--;
	}
	return test;
}
int main(){
	int A[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	int *ptr = A;
	for(int i=0; i<10; i++){
		printf("%u\t%d\n", ptr, *ptr);
		ptr++;
	}
	return 0;
}

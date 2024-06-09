#include<stdio.h>

int main(){
	int count,n;
    printf("Enter the number: ");
    scanf("%d", &n);
	count = n * 2 - 1;

	for(int i = 1; i <= count; i++) {
		for(int j = 1; j <= count; j++) {
			if(j == i || (j == count - i + 1)) {
				printf("*");
			}
			else{
				printf(" ");
			}
		}

		printf("\n");
	}

	return 0;
}

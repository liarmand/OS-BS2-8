#include <stdio.h>

int main(){

	int n, width;

	printf("Enter n: ");
	scanf("%d", &n);

	width = 2*n-1;

	for (int i = 1; i < width+1; i+=2) {
		for (int j = 0; j < (width-i)/2; j++){
			printf(" ");
		}
		for (int j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
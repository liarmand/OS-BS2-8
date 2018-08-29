#include <stdio.h>

void swapping(int *var1, int *var2){

	int swap;
	swap = *var1;
	*var1 = *var2;
	*var2 = swap;
		
}

int main() {
	int a,b;

	printf("Enter two integers: ");
	scanf("%d %d", &a, &b);

	swapping(&a,&b);

	printf("This swapped integers: %d %d\n", a, b);

	return 0;
}
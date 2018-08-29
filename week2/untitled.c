#include <stdio.h>


int main() {
	int a,b;

	printf("Enter two integers: ");
	scanf("%d %d", &a, &b);

	int swap = &a;
	&a = &b;
	&b = swap;

	printf("This swapped integers: %d %d\n", a, b);

	return 0;
}
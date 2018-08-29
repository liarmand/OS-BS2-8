#include <stdio.h>
#include <memory.h>

int main(){
	char inp_string[20];

	//reading string
	printf("Enter the string: ");
	scanf("%s", inp_string);

	//reversing & printing string
	int loop;
	for(loop = (int) strlen(inp_string) - 1; loop > -1; loop--)
		printf("%c", inp_string[loop]);
	
	printf("\n");
	
	return 0;
}

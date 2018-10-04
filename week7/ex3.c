#include <stdio.h>
#include <stdlib.h>


int main(){
	// Allows user to specify the original array size, stored in variable n1.
	printf("Enter original array size:");
	int n1=0;
	scanf("%d",&n1);

	//Create a new array of n1 ints
	int* a1 = malloc(n1*sizeof(int));
	int i;
	for(i=0; i<n1; i++){
		a1[i]=100;

		//Print each element out (to make sure things look right)
		printf("%d", a1[i]);
	}

	//User specifies the new array size, stored in variable n2.
	printf("\nEnter new array size: ");
	int n2=0;
	scanf("%d",&n2);

	//Dynamically change the array to size n2
	a1 = realloc(el1, n2*sizeof(int));

	//If the new array is a larger size, set all new members to 0. Reason: dont want to use uninitialized variables.
  	for(int i = n1 ; i < n2 ; i++){
		a1[i]=0;
	}

	//Print each element out (to make sure things look right)
	for(int i = 0 ; i < n2 ; i++){
		printf("%d", a1[i]);
	}
	printf("\n");

	//Done with array now, done with program :D
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>


int main(){
	//Accepting the size of array from user
	printf("Enter size of array: ");
	int nold;
	scanf("%d", &nold);

	//Filling the array with 0`s and printing to be sure all is gone right
	int *el1 = malloc(nold*sizeof(int));
  	int i = 0;
	for(i ; i < nold ; i++){
		el1[i]=100;

		printf("%d", el1[i]);
	}

	//Accepting the new size of the array from user
	printf("\nEnter new size of array : ");
	int nnew;
	scanf("%d",&nnew);

	//Dynamical change of array to new size
	el1 = realloc(el1, nnew*sizeof(int));

	// If size of new array bigger than older one
  	for(int i = nold ; i < nnew ; i++){
		el1[i]=0;
	}

	//Printing to be sure all is gone right
	for(int i = 0 ; i < nnew ; i++){
		printf("%d", el1[i]);
	}
	
	printf("\n");

	//end of the program
	return 0;
}

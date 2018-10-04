#include <stdio.h>
#include <stdlib.h>


int main(){
	printf("Enter size of array: ");
	int nold;
	scanf("%d", &nold);

	int *el1 = malloc(nold*sizeof(int));
  	int i = 0;
	for(i ; i < nold ; i++){
		el1[i]=100;

		printf("%d", el1[i]);
	}

	printf("\nEnter new size of array : ");
	int nnew;
	scanf("%d",&nnew);

	el1 = realloc(el1, nnew*sizeof(int));

	// if size of new array bigger than older one
  	for(int i = nold ; i < nnew ; i++){
		el1[i]=0;
	}

	for(int i = 0 ; i < nnew ; i++){
		printf("%d", el1[i]);
	}
	printf("\n");

	return 0;
}
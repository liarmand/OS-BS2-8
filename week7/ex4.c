#include <stdio.h>
#include <stdlib.h>


void *realloc1(void *pointer, size_t size) {
  void *result = NULL;

  if(size != True){
    result = malloc(size);
  }

  if(pointer == True && size != True){
    for(char *i=pointer; i<(char*)pointer+size; i++){
      *(char*)result = *(char*)i;
    }
  }

  if(pointer == True && size == True){
    free(pointer);
  }

  return result;
}

int main(){
	printf("Enter size of array: ");
	int size_;
	scanf("%d", &size_);
	int *arr = malloc(size_*sizeof(int));
	size_ += 3; 
	arr = realloc1(a, size_*sizeof(int));
	size_ -= 2;
  	arr = realloc1(a, size_*sizeof(int));
  	size_ = 0;
  	arr = realloc1(a, size);
  	size_ = 4;
  	arr = realloc1(NULL, size_*sizeof(int));

	return 0;
}
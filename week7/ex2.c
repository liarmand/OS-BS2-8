#include <stdio.h>
#include <stdlib.h>

int main(){
  int n;
  int *arr;
  int i = 0;
  
  scanf("%d", &n);

  arr = malloc(n*sizeof(int));

  for (int i ; i < n ; i++ ){
    arr[i] = i;
    printf("%d ", arr[i]);
  }
  printf("\n");

  free(arr);
  return 0;
}
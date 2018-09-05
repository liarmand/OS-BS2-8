#include <stdio.h>

void swapping(int *var1, int *var2){
    int swap;
    swap = *var1;
    *var1 = *var2;
    *var2 = swap;
}

void bubbleSort(int array[], int len){
    while (len!=0) {
        int newn = 0;
        for (int i=1; i <= len-1; i++){
            if (array[i-1]>array[i]) {
                swapping(&array[i-1], &array[i]);
                newn = i;
            }
        }
        len = newn;
    }
}

int main() {

    int inp_array[10] = {10, 50, 9, 17, 23, 31, 1, 33, 6, 90};
    bubbleSort(inp_array, 10);

    for (int i=0; i < 10; i++){
        printf("%d ", inp_array[i]);
    }

    return 0;
}
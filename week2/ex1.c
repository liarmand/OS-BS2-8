#include <stdio.h>
#include <limits.h>
#include <float.h>

int main () {

//declaring variables
int int_var = INT_MAX;
float float_var = FLT_MAX;
double double_var =  DBL_MAX;

//printing sizes of variables
printf("Size of int is %d. Max value is %d\n", (int) sizeof(int_var), int_var);
printf("Size of float is %d. Max value is %f\n", (int) sizeof(float_var), float_var);
printf("Size of double is %d. Max value is %f\n", (int) sizeof(double_var), double_var);

return 0;
}
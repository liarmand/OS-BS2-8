#include<stdio.h>
#include<unistd.h>



int main(){
  int pipl[2];
  pipe(pipl);

  char string1[] = "lolkek",string2[60];

  write(pipl[1], string1, 60);

  read(pipl[0], string2, 60);

  printf("%s\n", s2);
}
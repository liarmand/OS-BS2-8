#include<stdio.h>
#include<unistd.h>



int main(){
  int pipl[2];
  pipe(pipl);
  pid_t pid = fork();

  if (pid == 0) {

    char string[60];

    close(pipl[1]);

    read(pipl[0], string, 60);

    printf("%s\n", string);
  } else {
    char string[] = "lolkek";

    close(pipl[0]);

    write(pipl[1], string, 60);
  }
}
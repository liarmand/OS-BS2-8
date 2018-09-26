#include<stdio.h>
#include<unistd.h>
#include<signal.h>
#include<stdlib.h>

void hand(int sig){
  printf("Programm was intercepted SIGINT signal.\n");
  exit(0);
}
int main(){
  signal(SIGUSR1, hand);
  while(1);
}
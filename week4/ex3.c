#include <stdio.h>
#include <stdlib.h>

void command_wait(){
    printf("$ ");
}

void read_command(char *command){
    scanf("%s", command);
}

int main(){
    char command[10];
    while(1){
        command_wait();
        read_command(command);
        system(command);
    }
}
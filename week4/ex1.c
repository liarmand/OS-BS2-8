#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int n = 10;
    switch(fork() ) {
        case 0:
            printf("Hello from child [%d - %d]\n", getpid(), n);
            exit(0);
        default:
            printf("Hello from parent [%d - %d]\n", getpid(), n);
            exit(0);
    }
}

//The program starts a new process with child process. PID of a child is the next possible number.

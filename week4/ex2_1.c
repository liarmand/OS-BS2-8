#include <stdio.h>
#include <unistd.h>

int main()
{
    for (int i = 0; i < 3; i++) {
        fork();
        sleep(5);
    }
    return 0;
}

//Equation for the number of processes: processes_numb = 2 ^ (loop_numb)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


int main() {
    char inp[256];
    while(1) {
        printf("$ ");
        fgets(inp, 256, stdin);
        char *addr = strchr(inp, '&');
        if (addr) {
            *addr = '\0';
            int pid = fork();
            if (!pid) {
                system(inp);
                printf("\n[%d] Done\n", getpid());
            }
        } else {
            system(inp);
        }
    }

    return 0;
}
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd_in = open("/dev/random", O_RDWR);
    int fd_out = open("ex1.txt", O_RDWR);

    char str[21];

    read(fd_in, str, 20);
    str[20] = '\0';

    write(fd_out, str, 21);

    close(fd_in);
    close(fd_out);

    return 0;
}

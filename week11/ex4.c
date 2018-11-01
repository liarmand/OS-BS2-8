#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
	int fd1, fd2;
	char *file1, *file2;
	size_t f_size;

	fd1 = open("ex1.txt", O_RDONLY);
	f_size = lseek(fd1, 0, SEEK_END);
	file1 = mmap(NULL, f_size, PROT_READ, MAP_PRIVATE, sfd, 0);

	fd2 = open("ex1.memcpy.txt", O_RDWR | O_CREAT, 0666);
	ftruncate(fd2, f_size);

	file2 = mmap(NULL, f_size, PROT_READ | PROT_WRITE, MAP_SHARED, fd2, 0);
	memcpy(file2, file1, f_size);

	munmap(file1, f_size);
	munmap(file2, f_size);

	close(fd1); 
	close(fd2);

	return 0;
}

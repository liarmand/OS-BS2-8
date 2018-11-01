#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <sys/stat.h>

int main() {
	int aFile = open("ex1.txt", O_RDWR);

        struct stat st = {};
        if (fstat(aFile, &st)) 
        	printf("Fstat error \n");

        off_t size = st.st_size;
        char *ad;

        ad = mmap(NULL, size, PROT_READ|PROT_WRITE, MAP_SHARED, aFile, 0);
        if (ad == MAP_FAILED) 
        	printf(" Mmap error \n");	

	strncpy(ad, "This is a nice day", 18);
        return 0;
} 

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

#define N 10

void *print_thread(void *tid){
    printf("I am a thread № %d\n\n", tid);
    pthread_exit(NULL);
}

int main(int agrc, char *argv[]) {
    pthread_t threads[N];
    int status, i;

    for (i=0; i < N; i++){
        sleep(1);
        printf("This is main part. Creation of thread № %d\n", i );
        status = pthread_create(&threads[i], NULL, print_thread, i);

        if (status !=0){
            printf("There is some error from pthread_create. Error code %d\n", status);
            exit(-1);
        }
    }
    pthread_exit(NULL);
}
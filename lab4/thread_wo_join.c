#include <stdio.h>
#include <pthread.h>

void *helper(void* arg) {
    printf("thread \n");
    pthread_exit(0);
}
void main() {
    pthread_t thread;
    pthread_create(&thread, NULL, &helper, NULL);
    printf("main process\n");
    exit(0);
}

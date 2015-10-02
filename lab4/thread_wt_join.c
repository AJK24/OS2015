#include <stdio.h>
#include <pthread.h>
void *helper();

void main() {
    pthread_t thread;
    pthread_create(&thread, NULL, &helper, NULL);
    pthread_join(thread, NULL);
    printf("main \n");
    exit(0);
}
void *helper(void* arg) {
    printf("thread\n");
    pthread_exit(0);
}

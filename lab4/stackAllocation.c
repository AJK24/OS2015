#include <stdio.h>
#include <pthread.h>
void *helper();

void main() {
    int i = 0;
    pthread_t thread;
    pthread_create(&thread, NULL, &helper, &i);
    pthread_join(thread, NULL);
    printf("i is %d\n", i);
}
void *helper(void *arg) {
    int *num = (int*) arg;
    *num = 2;
    pthread_exit(0);
}

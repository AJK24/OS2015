#include <stdio.h>
#include <pthread.h>

void print_hello_world() {
    pid_t pid = getpid();
    printf("Hello world process ID %d\n", pid);
    printf("Hello world thread  ID %d\n", pthread_self());
    pthread_exit(0);
}
void main() {
    pthread_t thread;
    pthread_create(&thread, NULL, (void *) &print_hello_world, NULL);
    print_hello_world();
}

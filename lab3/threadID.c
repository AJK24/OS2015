#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

pthread_t thread_id = 0x0;
void print_hello_world() {
    thread_id = pthread_self();  //like getpid in process, but for threads
    printf("You deallocated my father!\n");
    pthread_exit(0);
}
int main() {
    pthread_t thread;
    pthread_create(&thread, NULL, (void *)&print_hello_world, NULL);
    pthread_yield();
    printf("No, thread %#010x, I AM your father!!\n", thread_id);
    
    return 0;
}

#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <string.h>

void *helper();

void main() {
    char *message = malloc(100);
    strcpy(message, "I am the parent");
    pthread_t thread;
    pthread_create(&thread, NULL, &helper, message);
    pthread_join(thread, NULL);
    printf("%s\n", message);
}
void *helper(void *arg) {
    char *message = (char *) arg;
    strcpy(message, "I am the child");
    pthread_exit(0);
}

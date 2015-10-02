#include <stdio.h>
#include <pthread.h>
void *helper();

void main() {
    pthread_t threads[5];
    int i, j = 0;
    for (i = 0; i < 5; i++) {
        pthread_create(&threads[i], NULL, &helper, &j);
    }
    for (i = 0; i < 5; i++) {
        pthread_join(threads[i], NULL);
    }
    printf("j is %d\n", j);
}
void *helper(void *arg) {
    int *num = (int *) arg;
    *num = (*num) + 1;
    pthread_exit(0);
}

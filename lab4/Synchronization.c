#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
void *helper();


sem_t sem;
void main() {
    pthread_t threads[5];
    int i, j = 0;
    sem_init(&sem, 0, 0);
    for (i = 0; i < 5; i++) {
    pthread_create(&threads[i], NULL, &helper, &j);
    }
    sem_post(&sem);
    for (i = 0; i < 5; i++) {
    pthread_join(threads[i], NULL);
    }
    printf("j is %d\n", j);
}
void *helper(void *arg) {
    sem_wait(&sem);
    int *num = (int *) arg;
    *num = (*num) + 1;
    sem_post(&sem);
    pthread_exit(0);
}

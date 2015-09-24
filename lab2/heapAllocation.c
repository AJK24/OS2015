#include<stdio.h>
#include<pthread.h>

int main(){
	int *p = malloc(sizeof(int));
    *p = 7;
    pid_t pid = fork();
    if(pid == 0 )
        *p = 6;
    printf("the value of p is %d \n", *p);


	return 0;
}

// void main()
// main()

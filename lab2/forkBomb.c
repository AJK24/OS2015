#include<stdio.h>
#include<pthread.h>

int main(){
	for(int i = 0;i<100;i++){
		pid_t pid = fork();
		printf("pid %d \n",pid);
	}
	return 0;
}

// void main()
// main()
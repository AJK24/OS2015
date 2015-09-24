#include<stdio.h>
#include<pthread.h>

int main(){
	int a = 1;
	for(int i =0;i<3;i++){
		pid_t pid = fork();

		if(pid  > 0){
			printf("we get a pid from fork(), we are parent process \n");
			a=6;
		}else{
			printf("we are child process      a == %d \n",pid);
		}


	}

	return 0;
}

// void main()
// main()

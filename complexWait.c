#include<stdio.h>
#include<pthread.h>
#include<wait.h>
int foo(int n){
    if( n < 2){
        exit(n);// normal return ,return 0
    }else{
        int v1,v2;
        pid_t pid = fork();
        if(pid ==0){// child
            foo(n-1);
        }
        pid_t pid2 = fork();
        if(pid2==0)
            foo(n-2);
        waitpid(pid,&v1,0);
        waitpid(pid2,&v2,0);
        exit(WEXITSTATUS(v1)+WEXITSTATUS(v2));
    }
}


int main(void){
    int n = 10;
    int val = foo(n);
    printf("The fibonacci value of %d is  %d\n",n,val);
    return 0;
}

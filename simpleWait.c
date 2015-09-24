#include<stdio.h>
#include<pthread.h>

int main(){
    pid_t pid = fork();
    int exit;
    if(pid != 0){
        wait(&exit);
        // waitpid(-1,&exit,0);
    }
    if(pid == 0){
        printf("child \n");
    }else{
        printf("parent \n");
    }
    printf("Child process alwyas finish first \n");

}

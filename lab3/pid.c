#include <pthread.h>
#include <stdio.h>

int main(int argc, char *argv[]){
  pid_t pid = getpid();   /* get current processes PID */

  printf("My pid: %d\n", pid);
    printf("Input parameters: %s   %s  \n", argv[0], argv[1]);

  getchar();
  return 0;
}
 
